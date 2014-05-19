//
//  indicator.h
//  BridgServer
//
//  Created by Ahmed Jafri on 5/13/14.
//  Copyright (c) 2014 lol. All rights reserved.
//

#ifndef Bridg_indicator_h
#define Bridg_indicator_h

void turnOnLight();

void turnOffLight();

void* indicatorThread(void* microSeconds);

void runIndicatorThread();

#endif
