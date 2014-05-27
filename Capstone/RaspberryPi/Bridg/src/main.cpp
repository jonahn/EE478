
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
    unsigned char readbuffer[1];
    
    for(i = 0; i < EMPTY_MP3_DATA_LENGTH; i++)
    {
        tempData[(2*i) % frameSize] = 0x01;
        tempData[(2*i+1) % frameSize] = data[i];
        
        //write
        wiringPiSPIDataRW(channel, &tempData[2*i % frameSize], 2);
        
        nanosleep((struct timespec[]){{0, 10000}}, NULL);
        
        //read
        wiringPiSPIDataRW(channel, readbuffer, 1);
    }
}

unsigned char isM4Ready()
{
    unsigned char tempData[] = {0,0};
    unsigned char readbuffer[1] = {0x0};
    
    //write
    wiringPiSPIDataRW(channel, tempData, 2);
    
    //read
    wiringPiSPIDataRW(channel, readbuffer, 1);
    
    return *readbuffer;
}

int main(int argc, char **argv)
{
    // set output SPI channel to 0 and speed to 8MHz
    if (wiringPiSPISetup (0,8000000) < 0)
    {
        fprintf (stderr, "Unable to open SPI device 0: %s\n", strerror (errno)) ;
        exit (1) ;
    }
    
    wiringPiSetupSys();

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

        NetworkReciever reciever = NetworkReciever(atoi(argv[1]));
        reciever.runReciever(&networkThread);

		while(1)
		{
            if(isM4Ready() == 0x08)
            {
                printf("%d \n", reciever.files->size());
                
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
                    sendOverSPI(actualmp3data, EMPTY_MP3_DATA_LENGTH);
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
