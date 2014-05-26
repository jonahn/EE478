//
//  networkReciever.cpp
//  BridgServer
//
//  Created by Ahmed Jafri on 5/25/14.
//  Copyright (c) 2014 lol. All rights reserved.
//

#include <errno.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <pthread.h>
#include <sstream>

#include "networkReciever.h"
#include "../../../Shared/settings.h"

std::deque<CompeletedFile> mp3Files;
unsigned int fileCounter;
int port;

extern void error(const char *msg);

NetworkReciever::NetworkReciever(int portNumber)
{
    mp3Files = std::deque<CompeletedFile>();
    files = &mp3Files;
    fileCounter = 0;
    port = portNumber;
}

void* recieverThread(void* maxNumberOfFiles)
{
    int sockfd, newsockfd;
	socklen_t clilen;
	unsigned char buffer[BUFFER_SIZE];
	struct sockaddr_in serv_addr, cli_addr;
	long n;
    
    sockfd = socket(AF_INET, SOCK_STREAM, 0);
    if (sockfd < 0)
		error("ERROR opening socket");
    bzero((char *) &serv_addr, sizeof(serv_addr));
    serv_addr.sin_family = AF_INET;
    serv_addr.sin_addr.s_addr = INADDR_ANY;
    serv_addr.sin_port = htons(port);
    if (bind(sockfd, (struct sockaddr *) &serv_addr, sizeof(serv_addr)) < 0)
        error("ERROR on binding");
    
    int32_t bufferSize = 0;
    
    std::string currentPath;
    FILE * currentFile = 0;
    
	while(1)
	{
        listen(sockfd,5);
        clilen = sizeof(cli_addr);
        newsockfd = accept(sockfd,(struct sockaddr *) &cli_addr, &clilen);
        
        if (newsockfd < 0)
            error("ERROR on accept");
        
        bzero(buffer,BUFFER_SIZE);
        
        n = read(newsockfd, &bufferSize, sizeof(int32_t) );
        if (n < 0) error("ERROR reading from socket");

        if(bufferSize > 0)
        {
            n = read(newsockfd, buffer, bufferSize );
            if (n < 0) error("ERROR reading from socket");
        }
        else
        {
            switch (bufferSize)
            {
                case 0:
                {
                    fileCounter++;
                    
                    if(fileCounter > 7)
                    {
                        fileCounter = 7;
                        mp3Files.pop_back();
                    }
                    
                    printf("Creating file: mp3file%d.mp3 \n", fileCounter);
                    std::ostringstream s;
                    s << "files/mp3file" << fileCounter << ".mp3";
                    currentPath = std::string(s.str());
                    
                    remove(currentPath.c_str());
                    currentFile = fopen(currentPath.c_str(), "a");
                    break;
                }

                case 1:
                {
                    printf("Done creating file: mp3file%d.mp3 \n", fileCounter);
                    
                    if(currentFile != 0)
                        fclose(currentFile);
                    
                    CompeletedFile doneFile;
                    doneFile.filePath = currentPath;
                    mp3Files.push_back(doneFile);
                    break;
                }
                    
                default:
                    fwrite(buffer, 1, bufferSize, currentFile);
                    break;
            }
        }
        
        close(newsockfd);
    }
    
    close(sockfd);
}

void NetworkReciever::runReciever(pthread_t *threadHandle)
{
    int maxFiles = 10;
    
    pthread_create(threadHandle, NULL, recieverThread, (void*)&maxFiles);
}

