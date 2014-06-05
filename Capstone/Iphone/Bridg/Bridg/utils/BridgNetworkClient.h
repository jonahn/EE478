//
//  BridgNetworkClient.h
//  Bridg
//
//  Created by Ahmed Jafri on 6/2/14.
//  Copyright (c) 2014 lol. All rights reserved.
//

#ifndef __Bridg__BridgNetworkClient__
#define __Bridg__BridgNetworkClient__

#include <iostream>
#include "settings.h"

class BridgNetworkClient
{
public:
    void resetForNewSong();
    void finishedWithSong();
    void skipSong();
    void sendTitle(const char * songTitle);
    void sendArtist(const char * artist);
    void sendMusicData(int length, unsigned char * inData);
    void sendSongLengthinBytes(float songLengthInSeconds);
private:
    void sendDataToServer(BridgData inData);
    int serialize(char * dataBuffer, BridgData dataToSerialize);
    void sendCommand(BridgCommands command);
};

#endif /* defined(__Bridg__BridgNetworkClient__) */
