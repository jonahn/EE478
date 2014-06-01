/* 
 * File:   Main.c
 * Author: Ahmed Jafri, Jake Yang, Anna Horstmann
 *
 * Created on April 20, 2014, 6:28 PM
 */

#include <stdio.h>
#include <stdlib.h>
#include <p18f25k22.h>
#include <usart.h>
#include <i2c.h>

#include "../../src/utils.h"
//#include "../../src/sram.h"

#include "interrupts.h"
#include "local_setup.h"

#define SONG_LENGTH     50



//extern unsigned char temp, commandBuffer, charReceived, screenUpdated;
//
//unsigned char bufferIndex, mode, PORTCtemp, SRAMDataBus, address;    //mode: 0 = null, 1 = Setpoint
//
//unsigned char numOut = 100;         //value the user increments/decrements and sets - 50%duty to begin with
//unsigned char sendVal = 100;        //value that is sent to rhe remote channel - 50%duty to begin with
//unsigned char correctedVal = 100;   //calculated value based on remote channel feedback - 50%duty to begin with
//unsigned char actualVal;            //actual value sent back from remote channel
//
//unsigned char minCycle = 0;             //counter for cycles through while loop. used for error msg timing
//unsigned char majorCycle = 0;
//
//unsigned char uartBuffer[3];        //buff containing char inputs from usart
//unsigned char decBuffer[3];         //buff containing conversions to decimal

#pragma udata userdata

//strings to send to USART
char headerStr[] = "Bridg Stats\r\n\0";
char numSongsStr[] = "Number of Songs Currently in Playlist:  \r\n\0";
char perPlayedStr[] = "% Played:  \r\n\0";
unsigned char strLength;
int i;

char clearScreen = 0x1; //always clear the screen except for when waiting for user input
char lastCommand = 0x0;

//variables for i2c
unsigned char recievedDataFlag;
unsigned char data;

//external functions
extern void setup();
extern void setupUSARTAndI2C();
extern void storeData();
extern void setupLED_Pins();

//internal functions
void getData();
void UARTSend(char *str, unsigned long strLength);

void main(void)
{
    setup();

    setupInterrupts();
    setupUSARTAndI2C();

    setupLED_Pins();

    Write1USART(0x0c);   // clear hyperterminal
    delay(10);
    puts1USART(headerStr);
    
    while(1)
    {
//        //CHANGE TO Update screen every 5 sec
//        minCycle++;             //increment cycle
//        if(minCycle % 10 == 0)
//        {
//            majorCycle++;
//            if(majorCycle % 50 == 0)
//            {
//                //screenUpdated = NOT_UPDATED;
//            }
//
        if(recievedDataFlag)
        {
            Write1USART(data);
            delay(50);
            recievedDataFlag = 0;
        }

        if(0)
        {
            Write1USART(0x0c);   // clear hyperterminal
            delay(50);

            //send # of Songs (1 char = 0-255)

            //send name of song (CHAR_LENGTH)

            puts1USART(numSongsStr);
            delay(50);
            puts1USART(perPlayedStr);
            delay(5000);

        //send to LEDs percent played of song (0 - 9)
        }
            
    CloseI2C1();
    }
}




