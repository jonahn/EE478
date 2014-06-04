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

std::deque<CompeletedFile> *mp3Files;
unsigned int fileCounter;
int port;

extern void error(const char *msg);
extern unsigned long currentSong;
extern unsigned long currentIndex;

NetworkReciever::NetworkReciever(int portNumber)
{
    mp3Files = new std::deque<CompeletedFile>();
    files = mp3Files;
    fileCounter = 0;
    port = portNumber;
}

void addFileToQueue(std::string currentPath, std::string currentSongArtist, std::string currentSongTitle, unsigned char currentTotalSongLength)
{
    CompeletedFile doneFile;
    doneFile.filePath = currentPath;
    doneFile.songArtist = currentSongArtist;
    doneFile.songTitle = currentSongTitle;
    doneFile.totalSongLength = currentTotalSongLength;
    mp3Files->push_back(doneFile);
}

BridgData parseData(unsigned char * buffer, unsigned int length)
{
    BridgData data = BridgData();
    data.dataType = (BridgDataType)*buffer;
    data.length = *(unsigned int*)(&buffer[sizeof(char)]);
    data.data = (char*)&buffer[sizeof(unsigned int) + sizeof(char)];
    
    return data;
}

std::string currentPath;
std::string currentSongArtist;
std::string currentSongTitle;
char currentTotalSongLength;
FILE * currentFile = 0;

void handleCommand(char command)
{
    switch (command)
    {
        case NEW_SONG_UPLOAD:
        {
            fileCounter++;
            
            if(fileCounter > 7)
            {
                fileCounter = 7;
                mp3Files->pop_back();
            }
            
            printf("Creating file: mp3file%d.mp3 \n", fileCounter);
            std::ostringstream s;
            s << "files/mp3file" << fileCounter << ".mp3";
            currentPath = std::string(s.str());
            
            //delete the file if it exists
            remove(currentPath.c_str());
            
            currentFile = fopen(currentPath.c_str(), "a");
            
            addFileToQueue(currentPath, currentSongArtist, currentSongTitle, currentTotalSongLength);
            
            break;
        }
            
        case UPLOAD_DONE:
        {
            printf("Done creating file: mp3file%d.mp3 \n", fileCounter);
            
            if(currentFile != 0)
                fclose(currentFile);
            
            break;
        }
            
        case SKIP:
        {
            printf("Skipping song. \n");

            currentSong++;
            currentIndex = 0;
            
            break;
        }
            
        default:
            printf("No command: 0x%x. \n", command);
            break;
    }
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
    
    uint32_t bufferSize = 0;
    
	while(1)
	{
        listen(sockfd,5);
        clilen = sizeof(cli_addr);
        newsockfd = accept(sockfd,(struct sockaddr *) &cli_addr, &clilen);
        
        if (newsockfd < 0)
            error("ERROR on accept");
        
        bzero(buffer,BUFFER_SIZE);
        
        n = read(newsockfd, &bufferSize, sizeof(uint32_t) );
        if (n < 0) error("ERROR reading from socket");

        n = read(newsockfd, buffer, bufferSize);
        
        if (n < 0) error("ERROR reading from socket");
        
        BridgData data = parseData(buffer, bufferSize);
        
        switch (data.dataType)
        {
            case COMMAND:
            {
                handleCommand( *data.data );
                
                break;
            }

            case MP3_ENCODED_DATA:
            {
                fwrite(data.data, 1, data.length, currentFile);
                break;
            }
            case SONG_ARTIST:
            {
                currentSongArtist = data.data;
            }
            case SONG_TITLE:
            {
                currentSongTitle = data.data;
            }
            case TOTAL_SONG_LENGTH_BYTES:
            {
                currentTotalSongLength = data.data;
            }
                
            default:
                break;
        }
        
        close(newsockfd);
    }
    
    close(sockfd);
    
    return 0;
}

void NetworkReciever::runReciever(pthread_t *threadHandle)
{
    int maxFiles = 10;
    
    pthread_create(threadHandle, NULL, recieverThread, (void*)&maxFiles);
}

