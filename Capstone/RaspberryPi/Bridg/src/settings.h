//
//  settings.h
//  BridgServer
//
//  Created by Ahmed Jafri on 5/15/14.
//  Copyright (c) 2014 lol. All rights reserved.
//

#ifndef BridgServer_settings_h
#define BridgServer_settings_h

#define RUNNING_IN_XCODE 0 //1 for XCODE, 0 for Carambola (dont fork or fork)

#if RUNNING_IN_XCODE
    #define INDICATOR_FILE "brightnessfile.txt"
#else
    #define INDICATOR_FILE "/sys/devices/platform/leds-gpio/leds/carambola2:green:wlan/brightness"
#endif


#endif
