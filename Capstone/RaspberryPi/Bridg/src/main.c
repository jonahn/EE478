
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
#include "settings.h"

#define BUFFER_SIZE 256

pthread_t iThread;
/*
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
	float buffer[256];
	struct sockaddr_in serv_addr, cli_addr;
	int n;

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
		
		while(1)
		{
			listen(sockfd,5);
			clilen = sizeof(cli_addr);
			newsockfd = accept(sockfd,(struct sockaddr *) &cli_addr, &clilen);

			if (newsockfd < 0) 
			  error("ERROR on accept");

			bzero(buffer,BUFFER_SIZE);
			n = read(newsockfd, buffer, BUFFER_SIZE * sizeof(float) );
			if (n < 0) error("ERROR reading from socket");
			printf("Here is the message: %s\n",buffer);
			n = write(newsockfd,"y",1);
			if (n < 0) error("ERROR writing to socket");

			wiringPiSPIDataRW (channel, buffer, bufsize) ;
		}

		close(newsockfd);
		close(sockfd);
        
		return 0; 

	}
	else
	{
		//parent
		return 0;
	}
}
*/
/*
 * SPItest3.c:
 * LED manipulation using wiringPi SPI functions
 * to control 6 x RGB LEDs via WS2803 chip
 * Ramps R, G and B for each LED until all are on full.
 * The program does 18 x 256 = 4609 writes to the chip buffer,
 * latching the output each time, and still manages it in a couple of seconds!
 
 */

#include <wiringPi.h>
#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <errno.h>
#include <string.h>
int main (void)
{
    int channel=0 ;
    uint8_t i=0 ;
    uint16_t j=0 ;
    uint8_t k=0 ;
    uint8_t bufsize=5;
    uint16_t delaytime = 550 ;
    uint8_t outbuffer [5] ;
    uint8_t firstbuffer [] = {170,2,3,4,5} ;
    int cnt;
    
    printf("Raspberry Pi wiringPi SPI LED test program\n");
    
    // set output SPI channel to 0 and speed to 8MHz
    
    if (wiringPiSPISetup (0,8000000) < 0)
    {
        fprintf (stderr, "Unable to open SPI device 0: %s\n", strerror (errno)) ;
        exit (1) ;
    }
    printf ("Starting\n") ;
    
    wiringPiSetupSys() ;
    
    // for each location in the buffer
    
        // go through each value in turn and load buffer location with LED level
        
            
            // load output buffer and send it out
            
            for (k=0;k!=bufsize;k++)
            {
                outbuffer [k] = firstbuffer [k] ;
            }
            
            k=0 ;
            
            wiringPiSPIDataRW (channel, outbuffer, 1) ;
            
	    wiringPiSPIDataRW (1, outbuffer, 3);

            delayMicroseconds (delaytime) ;
            
    
    printf ("Done\n") ;

	for(k =  0; k < bufsize; k++)
		printf ("%i \n", outbuffer[k]);
    
    return 0 ;
}
