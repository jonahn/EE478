
#include <errno.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/types.h> 
#include <sys/socket.h>
#include <netinet/in.h>
#include <pthread.h>
#include <time.h>

#include "../../../Shared/settings.h"
#include "../../../Shared/emptymp3data.h"
#include "networkReciever.h"

extern "C" {
#if DEBUG
    #include "wiringPi.h"
#else
    #include <wiringPi.h>
    #include <wiringPiSPI.h>
    #include <wiringPiI2C.h>
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

unsigned char playlistBitPosition = 0;
unsigned char playlistNumber = 0;
unsigned char playlistNumberComplete = 0;


unsigned long currentIndex = 0;

unsigned char currentSong = 0;

void isM4ReadyISR()
{
    isM4Ready = 1;
}

void playlistNumberISR()
{
    char bit = (char) digitalRead(PIN_PLAYLIST_NUMBER_DATA);
    playlistNumber = playlistNumber || (bit << playlistBitPosition);
    playlistBitPosition++;
    
    if(playlistBitPosition >= 7)
    {
        printf("Got new playlist number %d. \n", playlistNumber);
        playlistNumberComplete = 1;
        playlistBitPosition = 0;
        currentSong = playlistNumber;
        digitalWrite(PIN_NEED_NEW_PLAYLIST_NUMBER, LOW);
    }
}

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
            return 1;
        }
        
        //uses wiringPi pin 7 to ask for new data
        if (wiringPiISR (PIN_NEEDS_MORE_DATA, INT_EDGE_FALLING, &isM4ReadyISR) < 0)
        {
            fprintf (stderr, "Unable to setup ISR: %s\n", strerror (errno)) ;
            return 1;
        }
        
        // set output SPI channel to 0 and speed to 8MHz
        if (wiringPiSPISetup(0,1000000) < 0)
        {
            fprintf (stderr, "Unable to open SPI device 0: %s\n", strerror (errno)) ;
            exit (1) ;
        }
        
        pinMode(PIN_LED_INDICATOR, OUTPUT); //INDICATOR LED
        digitalWrite (PIN_LED_INDICATOR, HIGH);
        
        pinMode(PIN_NEED_NEW_PLAYLIST_NUMBER, OUTPUT); //GPIO TO GET NEW PLAYLIST NUMBER
        digitalWrite (PIN_NEED_NEW_PLAYLIST_NUMBER, LOW);
        
        pinMode(PIN_PLAYLIST_NUMBER_DATA, INPUT);  //DATA
        
        //uses wiringPi pin 2 to ask for new playlist number
        if (wiringPiISR (PIN_PLAYLIST_NUMBER_CLK, INT_EDGE_RISING, &playlistNumberISR) < 0)
        {
            fprintf (stderr, "Unable to setup ISR: %s\n", strerror (errno)) ;
            return 1;
        }
        
        NetworkReciever reciever = NetworkReciever(atoi(argv[1]));
        reciever.runReciever(&networkThread);

#if DEBUG
        CompeletedFile doneFile;
        doneFile.filePath = "files/mp3file1.mp3";
        reciever.files->push_back(doneFile);
#endif

        //------------I2C Setup ------------------------
        int fd = wiringPiI2CSetup(0x51);
        unsigned int cycleCount = 0;
        unsigned int majCount = 0;
        unsigned char playListSize;
        unsigned char percentPlayed;
        string test = "abcdefghijk";
        // struct timespec tim;
        // tim.tv_sec = 0;
        // tim.tv_nsec = 50000;
		
        while(1)
		{
            cycleCount++;
            if (cycleCount %50000 == 0)
            {

                majCount++;
                if(majCount%1000 == 0)
                {
                    //write a char to PIC
                    if(fd >=0)
                    {
                        // playListSize = reciever.files->size() + '0';
                        // wiringPiI2CWrite (fd, playListSize);
                        // cycleCount = 1;
                        
                        // percentPlayed =  0x45;//(/* currentIndex / */ currentFile.totalSongLength );
                        // wiringPiI2CWrite (fd, percentPlayed);
                            
                        for (int i = 0; i < test.size() -1; i++)
                        {
                            wiringPiI2CWrite (fd, test[i]);
                        }
                    }
                }
            }
#if DEBUG
            isM4ReadyISR();
#endif
            if(isM4Ready == 1)
            {
                isM4Ready = 0;
                if(reciever.files->size() > 0)
                {
                    CompeletedFile currentFile = reciever.files->at(currentSong % reciever.files->size());
                    
                    FILE * f = fopen(currentFile.filePath.c_str(), "rb");
                    fseek(f, currentIndex, SEEK_SET);
                    
                    unsigned char arr[EMPTY_MP3_DATA_LENGTH];
                    
                    //only read the first ~30000 bytes
                    unsigned int numberOfBytesRead = (unsigned int) fread(arr , 1 , EMPTY_MP3_DATA_LENGTH , f);
                    fclose(f);
                    
                    int indexesSent = sendOverSPI(arr, numberOfBytesRead);
                    currentIndex += indexesSent;

                    //reached the end of the song
                    if(indexesSent == 0)
                    {
                        //currentSong = (currentSong + 1) % reciever.files->size();   //loop over playlist if at end
                        currentIndex = 0;
                        playlistBitPosition = 0;
                        digitalWrite(PIN_NEED_NEW_PLAYLIST_NUMBER, HIGH);
                        printf("Asking for new playlist number. \n");
                    }
                    
                    //Send song info over i2c
                    
                    //write a char to PIC
                    if(fd >=0)
                    {

                        //if (cycleCount == 0)
                       // {
                       //      playListSize = *(currentFile.songTitle.c_str());//reciever.files->size() + '0';
                       //      wiringPiI2CWrite (fd, playListSize);
                       //      cycleCount = 1;
                            
                           
                       // // }
                       // // else
                       // // {
                       //      percentPlayed = (/* currentIndex / */ currentFile.totalSongLength );
                       //      wiringPiI2CWrite (fd, percentPlayed);
                        //    cycleCount = 0;
                       // }
                        // //send song artist
                        // for (int i = 0; i < 20; i++)
                        // {
                        //       //if artist name size < index, send char
                        //              currentFile.songArtist.at(0) 
                        //       //else, send ' ' char
                        // }

                        // //send song name 
                        // for (int i = 0; i < 50; i++)
                        // {
                        //       //if song name size < index, send char
                        //       //else, send ' ' char
                        // }
                    }   
                }
                else
                {
                    const unsigned char * arr = emptymp3data;
                    
                    sendOverSPI(arr, EMPTY_MP3_DATA_LENGTH);
                   
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
