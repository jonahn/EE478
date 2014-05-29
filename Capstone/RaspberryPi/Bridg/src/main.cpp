
#include <errno.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/types.h> 
#include <sys/socket.h>
#include <netinet/in.h>
#include <pthread.h>

#include "../../../Shared/settings.h"
#include "../../../Shared/emptymp3data.h"
#include "networkReciever.h"
#include "../../../Shared/mp3_data.h"

extern "C" {
#if DEBUG
    #include "wiringPi.h"
#else
    #include <wiringPi.h>
    #include <wiringPiSPI.h>
#endif
}

#define TRANSFER_BUFFER_SIZE 256

pthread_t iThread;
pthread_t networkThread;

int channel = 0;

unsigned char isM4Ready = 0;

void waitUntilRecieve();

void error(const char *msg)
{
    perror(msg);
    exit(1);
}

void sendOverSPI(const unsigned char * data, const unsigned int inLength)
{
    int frameSize = 256;
    int i;
    unsigned char tempData[inLength];
    
    int lastIndex = 0;
    
    for(i = 0; i < EMPTY_MP3_DATA_LENGTH; i++)
    {
        if(i % frameSize == 0 && i != 0)
        {
            wiringPiSPIDataRW(channel, tempData, frameSize);
            lastIndex = i;
        }
        
        tempData[i % frameSize] = data[i];
    }
    
    if(lastIndex != (EMPTY_MP3_DATA_LENGTH - 1) )
    {
        wiringPiSPIDataRW(channel, tempData, EMPTY_MP3_DATA_LENGTH - lastIndex);
    }
}

void isM4ReadyISR()
{
    isM4Ready = 0x01;
}

unsigned int currentIndex = 0;

int main(int argc, char **argv)
{
	if (argc < 2)
    {
        fprintf(stderr,"ERROR, no port provided\n");
        exit(1);
	}
    
	printf("Forking to background now and exit in one minute.\n");

#if DEBUG
    pid_t result = 0;
#else
    pid_t result = fork();
#endif

	if (result == -1)
	{
		fprintf(stderr, "Failed to fork: %s.", strerror(errno));
		return 1;
	}
	else if (result == 0)
	{
		//Create a session and set the process group id.
		setsid();

        if (wiringPiSetup() < 0)
        {
            fprintf (stderr, "Unable to setup wiringPi: %s\n", strerror (errno)) ;
            return 1 ;
        }
        
        //uses pin 3 on header (wiringPi pin 8)
        if (wiringPiISR (0, INT_EDGE_FALLING, &isM4ReadyISR) < 0)
        {
            fprintf (stderr, "Unable to setup ISR: %s\n", strerror (errno)) ;
            return 1 ;
        }
        
        // set output SPI channel to 0 and speed to 8MHz
        if (wiringPiSPISetup(0,8000000) < 0)
        {
            fprintf (stderr, "Unable to open SPI device 0: %s\n", strerror (errno)) ;
            exit (1) ;
        }
        
        NetworkReciever reciever = NetworkReciever(atoi(argv[1]));
        reciever.runReciever(&networkThread);

		while(1)
		{
            if(isM4Ready != 0)
            {
                isM4Ready = 0;
                if(reciever.files->size() > 0)
                {
                    CompeletedFile currentFile = reciever.files->front();
                    //reciever.files->pop_front();
                    
                    FILE * f = fopen(currentFile.filePath.c_str(), "r");
                    
                    unsigned char buffer[EMPTY_MP3_DATA_LENGTH];
                    
                    //only read the first ~30000 bytes
                    result = fread (buffer , 1 , EMPTY_MP3_DATA_LENGTH , f);
                    printf("Sending data from file.");
                    fclose(f);
                    
                    sendOverSPI(buffer, EMPTY_MP3_DATA_LENGTH);
                }
                else
                {
                    if(currentIndex > 10)
                    {
                        currentIndex = 0;
                    }
                    
                    const unsigned char * arr = &mp3_data[currentIndex * EMPTY_MP3_DATA_LENGTH];
                    
                    sendOverSPI(arr, EMPTY_MP3_DATA_LENGTH);
                    printf("First five bits: 0x%x, 0x%x, 0x%x, 0x%x, 0x%x \n", arr[0],arr[1],arr[2],arr[3],arr[4]);
                    currentIndex++;
                }
            }
        }
        
		return 0; 

	}
	else
	{
		//parent
		return 0;
	}
}
