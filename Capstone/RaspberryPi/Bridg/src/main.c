
#include <errno.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/types.h> 
#include <sys/socket.h>
#include <netinet/in.h>
#include <pthread.h>

#include "indicator.h"
#include "../../../Shared/settings.h"

#define TRANSFER_BUFFER_SIZE 256

pthread_t iThread;

int channel = 0;

void error(const char *msg)
{
    perror(msg);
    exit(1);
}
int main(int argc, char **argv)
{
	int sockfd, newsockfd, portno;
	socklen_t clilen;
	unsigned char buffer[BUFFER_SIZE];
	struct sockaddr_in serv_addr, cli_addr;
	long n;

    
    // set output SPI channel to 0 and speed to 8MHz
    if (wiringPiSPISetup (0,8000000) < 0)
    {
        fprintf (stderr, "Unable to open SPI device 0: %s\n", strerror (errno)) ;
        exit (1) ;
    }
    
    wiringPiSetupSys();

	if (argc < 2) {
	 fprintf(stderr,"ERROR, no port provided\n");
	 exit(1);
	}
	printf("Forking to background now and exit in one minute.\n");

#if RUNNING_IN_XCODE
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

		//runIndicatorThread();

		sockfd = socket(AF_INET, SOCK_STREAM, 0);
		if (sockfd < 0) 
		error("ERROR opening socket");
		bzero((char *) &serv_addr, sizeof(serv_addr));
		portno = atoi(argv[1]);
		serv_addr.sin_family = AF_INET;
		serv_addr.sin_addr.s_addr = INADDR_ANY;
		serv_addr.sin_port = htons(portno);
		if (bind(sockfd, (struct sockaddr *) &serv_addr, sizeof(serv_addr)) < 0) 
		      error("ERROR on binding");
		
        uint32_t bufferSize = 0;
        
        int k = 0;
        
		while(1)
		{
			listen(sockfd,5);
			clilen = sizeof(cli_addr);
			newsockfd = accept(sockfd,(struct sockaddr *) &cli_addr, &clilen);

			if (newsockfd < 0) 
			  error("ERROR on accept");

			bzero(buffer,BUFFER_SIZE);
            
            n = read(newsockfd, &bufferSize, sizeof(uint32_t) );

            if(bufferSize != 0)
                n = read(newsockfd, buffer, bufferSize );
            else
                k = 0;
            
			if (n < 0) error("ERROR reading from socket");

            printf("Sending data over SPI with length: %d \n", bufferSize);
            
            int frameSize = 256;
            int i;
            
            uint32_t dataLength = 30000;
            
            char mp3Data[dataLength];
            
            char tempData[frameSize];
            
            for (i = 0; i < bufferSize; i++)
            {
                if(k < dataLength)
                {
                    mp3Data[k] = buffer[i];
                }
                
                k++;
            }
            
            char readbuffer[1];
            
            if(k >= dataLength)
            {
                for(i = 0; i < dataLength; i++)
                {
                    tempData[(2*i) % frameSize] = 0x01;
                    tempData[(2*i+1) % frameSize] = mp3Data[i];
                    
                    //write
                    wiringPiSPIDataRW(channel, tempData[2*i % frameSize], 3);
                    
                    //read
                    wiringPiSPIDataRW(channel, readbuffer, 1);
                    
                    //printf("Response was: %x", *readbuffer);
                }
                
                k = 0;
            }
			//wiringPiSPIDataRW (channel, buffer, bufferSize);
            
            close(newsockfd);
		}

		close(sockfd);
        
		return 0; 

	}
	else
	{
		//parent
		return 0;
	}
}