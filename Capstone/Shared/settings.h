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

//#define RUNNING_IN_XCODE 0 //1 for XCODE, 0 for Carambola (dont fork or fork)

#if DEBUG
#define INDICATOR_FILE "brightnessfile.txt"
#else
#define INDICATOR_FILE "/sys/devices/platform/leds-gpio/leds/carambola2:green:wlan/brightness"
#endif


#define TIME_SCALE  SCALE
#define SAMPLE_LENGTH 2048*SCALE
#define SAMPLE_RATE 44100*SCALE
#define TIME_INTERVAL 8192.0f / SAMPLE_RATE

#endif
