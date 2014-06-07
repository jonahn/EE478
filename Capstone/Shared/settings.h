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

// -- PIN ASSIGNMENTS -- //
#define PIN_LED_INDICATOR 1
#define PIN_NEEDS_MORE_DATA 7
#define PIN_PLAYLIST_NUMBER_CLK 2
#define PIN_PLAYLIST_NUMBER_DATA 3
#define PIN_NEED_NEW_PLAYLIST_NUMBER 0

#if DEBUG
#define INDICATOR_FILE "brightnessfile.txt"
#else
#define INDICATOR_FILE "/sys/devices/platform/leds-gpio/leds/carambola2:green:wlan/brightness"
#endif

#define TIME_SCALE  SCALE
#define SAMPLE_LENGTH 2048*SCALE
#define SAMPLE_RATE 44100*SCALE
#define TIME_INTERVAL 8192.0f / SAMPLE_RATE

#define HEADER_LENGTH   4 //in bytes
#define COMMAND_LENGTH  4
#define TYPE_LENGTH     1

#define BIT_RATE 96000

#define PORT_NUMBER 2000
#define SERVER_ADDRESS "10.0.0.1"

enum BridgDataType
{
    MP3_ENCODED_DATA        = 0x01,
    SONG_TITLE              = 0x02,
    SONG_ARTIST             = 0x03,
    TOTAL_SONG_LENGTH_BYTES = 0x04,
    COMMAND                 = 0x05
};

enum BridgCommands
{
    PLAY                    = 0x01,
    PAUSE                   = 0x02,
    NEW_SONG_UPLOAD         = 0x03,
    UPLOAD_DONE             = 0x04,
    SKIP                    = 0x05
};

struct BridgData
{
    char            dataType;
    uint32_t        length; // in bytes
    char *          data;
};

#endif
