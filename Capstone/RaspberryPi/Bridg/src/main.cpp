
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

#define TRANSFER_BUFFER_SIZE    256
#define VIEN                    "awesome dude\0"
#define AHMED                   "scrub lord\0"

pthread_t iThread;
pthread_t networkThread;

int channel = 0;

unsigned char isM4Ready = 0;

void waitUntilRecieve();

void error( const char *msg )
{
    perror( msg );
    exit( 1 );
}

int sendOverSPI( const unsigned char * data, const unsigned int inLength )
{
    int frameSize = 1024;
    int i;
    unsigned char tempData[inLength];
    int returnIndex = EMPTY_MP3_DATA_LENGTH - 1;
    int lastIndex = 0;
    
    for( int i = inLength - 1; i > 0; i-- )
    {
        if( data[i] == 0xFB && data[i-1] == 0xFF )
        {
            returnIndex = i - 1;
            break;
        }
    }

    for( i = 0; i < returnIndex; i++ )
    {
        if( i % frameSize == 0 && i != 0 )
        {
            wiringPiSPIDataRW( channel, tempData, frameSize );
            lastIndex = i;
        }
        
        tempData[i % frameSize] = data[i];
    }
    
    if( lastIndex != ( returnIndex - 1 ) )
    {
        wiringPiSPIDataRW( channel, tempData, returnIndex - lastIndex);
    }
    
    for( int i = 0; i < frameSize; i++ )
        tempData[i] = 0;
    
    wiringPiSPIDataRW( channel, tempData, EMPTY_MP3_DATA_LENGTH - returnIndex);

    return returnIndex;
}

void isM4ReadyISR()
{
    isM4Ready = 0x01;
}

unsigned long currentIndex = 0;

unsigned long currentSong = 0;

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
        if (wiringPiSPISetup(0,1000000) < 0)
        {
            fprintf (stderr, "Unable to open SPI device 0: %s\n", strerror (errno)) ;
            exit (1) ;
        }
        
        NetworkReciever reciever = NetworkReciever(atoi(argv[1]));
        reciever.runReciever(&networkThread);

#if DEBUG
        CompeletedFile doneFile;
        doneFile.filePath = "files/mp3file1.mp3";
        reciever.files->push_back(doneFile);
#endif
        
		while(1)
		{
#if DEBUG
            isM4ReadyISR();
#endif
            if(isM4Ready != 0)
            {
                isM4Ready = 0;
                if(reciever.files->size() > 0)
                {
                    CompeletedFile currentFile = reciever.files->front();
                    //reciever.files->pop_front();
                    
                    FILE * f = fopen(currentFile.filePath.c_str(), "r");
                    unsigned long fileSize = (unsigned long) ftell(f);
                    
                    if(currentIndex > fileSize)
                    {
                        currentSong++;
                        currentIndex = 0;
                    }
                    
                    fseek(f, currentIndex, SEEK_SET);
                    
                    unsigned char arr[EMPTY_MP3_DATA_LENGTH];
                    
                    //only read the first ~30000 bytes
                    unsigned int numberOfBytesRead = (unsigned int) fread(arr , 1 , EMPTY_MP3_DATA_LENGTH , f);
                    fclose(f);
                    
                    int indexesSent = sendOverSPI(arr, numberOfBytesRead);
                    currentIndex += indexesSent;

                    printf("First five bytes (%s): 0x%x, 0x%x, 0x%x, 0x%x, 0x%x \n", currentFile.filePath.c_str(), arr[0],arr[1],arr[2],arr[3],arr[4]);
                }
                else
                {
                    const unsigned char * arr = &mp3_data[currentIndex];
                    
                    int indexesSent = sendOverSPI(arr, EMPTY_MP3_DATA_LENGTH);
                    currentIndex += indexesSent; // michael is the best ;)
                    
                    printf("First five bytes: 0x%x, 0x%x, 0x%x, 0x%x, 0x%x \n", arr[0],arr[1],arr[2],arr[3],arr[4]);
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
