//
//  settings.h
//  Bridg
//
//  Created by Ahmed Jafri on 5/20/14.
//  Copyright (c) 2014 lol. All rights reserved.
//

#ifndef Bridg_settings_h
#define Bridg_settings_h

#define SCALE 1
#define BUFFER_SIZE 32768

static float TIME_SCALE __unused = SCALE;
static int SAMPLE_LENGTH __unused = 2048*SCALE;
static float SAMPLE_RATE __unused = 44100*SCALE;
static float TIME_INTERVAL __unused = 8192.0f / SAMPLE_RATE;

#endif
