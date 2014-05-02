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
#include "../../src/sram.h"

#include "uart_interrupts.h"
#include "local_setup.h"
#include "warnings.h"

#define INCREMENT_COMMAND   0x01
#define DECREMENT_COMMAND   0x02
#define SP_COMMAND          0x03


extern unsigned char temp, commandBuffer, charReceived, screenUpdated;

unsigned char bufferIndex, mode, PORTCtemp, SRAMDataBus, address;    //mode: 0 = null, 1 = Setpoint

unsigned char numOut = 100;         //value the user increments/decrements and sets - 50%duty to begin with
unsigned char sendVal = 100;        //value that is sent to rhe remote channel - 50%duty to begin with
unsigned char correctedVal = 100;   //calculated value based on remote channel feedback - 50%duty to begin with
unsigned char actualVal;            //actual value sent back from remote channel

unsigned char minCycle = 0;             //counter for cycles through while loop. used for error msg timing
unsigned char majorCycle = 0;

unsigned char uartBuffer[3];        //buff containing char inputs from usart
unsigned char decBuffer[3];         //buff containing conversions to decimal

#pragma udata userdata
char str[] = "Welcome to Remote Surgery System!\r\nEnter commands: Setpoint(s), Increment(i), Decrement(d)\r\n\0";
char errMax[] = "Number entered exceeds 100 or invalid input.\r\n\0";
char errMin[] = "Number entered below     0.\r\n\0";

unsigned char strLength;
int i;

extern void setup();
extern void setupUSARTAndI2C();
extern void storeData();
void getData();

extern void correctedIncrement();
extern void correctedDecrement();
extern void increment();
extern void decrement();
extern void sendDataI2C();
void correctedIncrement();
void correctedDecrement();
void increment();
void decrement();
void sendDataI2C();

void sendErrorMessageMin();
extern void sendErrorMessageMin();

void sendErrorMessageMax();
extern void sendErrorMessageMax();
extern void displayWarnings();
char clearScreen = 0x1; //always clear the screen except for when waiting for user input
char lastCommand = 0x0;

void UARTSend(char *str, unsigned long strLength);

void main(void)
{
    setup();

    setupInterrupts();

    setupUSARTAndI2C();

    bufferIndex = 0;
    mode = 0;

    Write1USART(0x0c);   // clear hyperterminal
    delay(10);
    puts1USART(str);
    
    while(1)
    {
        minCycle++;             //increment cycle
        if(minCycle % 10 == 0)
        {
            majorCycle++;
            if(majorCycle % 50 == 0)
            {
                screenUpdated = NOT_UPDATED;
            }
        }

        // Poll the slave if not receiving input from user
        if( 1 != charReceived )
        {
            // Get actual value from motor
            IdleI2C1();         // wait until bus is idle
            StartI2C1();        // send Start Condition
            IdleI2C1();
            WriteI2C1(0xA2 | 0x01);    // write address
            IdleI2C1();
            actualVal = ReadI2C1();         // read data

            StopI2C1();

            //Done getting datas

            //Compute error value
            if( (actualVal) > (numOut) )
            {
                correctedDecrement();
            } else if((actualVal) < (numOut) )
            {
               // correctedDecrement();
                correctedIncrement();
            }

            displayWarnings();
        }
        else
        {
            //reset received flag
            charReceived = 0;        

            //Setpoint case
            if( 's' == commandBuffer )
            {
                mode = 1;       //indicating setpoint
                bufferIndex = 0;
                clearScreen = DONT_CLEAR_SCREEN;

                //clear buffer
                for( i = 0; i <= 2; i++ )
                {
                    decBuffer[i] = '0';
                    uartBuffer[i] = '0';
                }
            }
                
            //if in s mode
            else if (1 == mode)
            {
                //if user pressed enter (in S mode), read buffer, reset index
                if ( '\r' == commandBuffer )
                {
                    clearScreen = CLEAR_SCREEN;
                    lastCommand = SP_COMMAND;
                    screenUpdated = NOT_UPDATED;
                    //read buffer and convert to decimal
                    for(i = 0; i <= bufferIndex; i++)
                    {
                        decBuffer[i] = uartBuffer[i] - '0';
                    }

                    //Send msg and don't process number if > 100.
                    if (decBuffer[0] > 1)
                    {
                        sendErrorMessageMax();
                        delay(100);
                    }
                    else 
                    {
                        //convert dec buffer to single character
                        numOut = (decBuffer[0] * 100 + decBuffer[1] * 10 + decBuffer[2]) * 2;
                        correctedVal = numOut;

                        address = 0x6;

                        sendVal = numOut;
                        sendDataI2C();
                    }
                    bufferIndex = 0;
                    mode = 0;   //back to no mode
                    Write1USART('\r');   //send  new line
                    delay(100);
                    Write1USART('\n');   //send  new line
                    delay(100);
                }
                //number entered while in s mode
                else
                {
                    clearScreen = DONT_CLEAR_SCREEN;
                    uartBuffer[bufferIndex] = commandBuffer;
                    bufferIndex++;
                }
            }

            //Increment buffer
            else if ( 'i' == commandBuffer )
            {
                clearScreen = CLEAR_SCREEN;
                lastCommand = INCREMENT_COMMAND;
                screenUpdated = NOT_UPDATED;
                increment();
            }
            //Decrement buffer
            else if (commandBuffer == 'd')
            {
                clearScreen = CLEAR_SCREEN;
                lastCommand = DECREMENT_COMMAND;
                screenUpdated = NOT_UPDATED;
                decrement();
            }
            //at this point, data to send is 1 byte from 0 - 200
        }

    } //end of while(1)
    
    CloseI2C1();
}




