//
//  networkReciever.h
//  BridgServer
//
//  Created by Ahmed Jafri on 5/25/14.
//  Copyright (c) 2014 lol. All rights reserved.
//

#ifndef __BridgServer__networkReciever__
#define __BridgServer__networkReciever__

#include <iostream>
#include <deque>
#include <pthread.h>
#include <string>

typedef struct
{
    std::string filePath;
    std::string songArtist;
    std::string songTitle;
    std::string totalSongLength;
}CompeletedFile;

class NetworkReciever
{
public:
    NetworkReciever(int portNumber);
    void runReciever(pthread_t *threadHandle);
    std::deque<CompeletedFile> *files;
};

#endif /* defined(__BridgServer__networkReciever__) */
