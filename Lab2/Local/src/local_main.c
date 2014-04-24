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
#include "local_setup.h"

#include "uart_interrupts.h"

extern unsigned char temp, commandBuffer, charReceived;

unsigned char bufferIndex, mode, numOut;    //mode: 0 = null, 1 = S, 2 = i, 3 = d
unsigned char uartBuffer[3];        //buff containing char inputs from usart
unsigned char decBuffer[3];         //buff containing conversions to decimal


extern void setup();
extern void setupUSARTAndI2C();

void sendi2c(char commandBuff);

void main(void)
{
    setup();

    setupInterrupts();

    setupUSARTAndI2C();

    bufferIndex = 0;
    mode = 0;
    numOut = 0;
    //write initial msg to user on USART
    Write1USART("\nEnter number from 0 - 200 for Setpoint(s) or i/d\n");

    while(1)
    {
        //commands:
        //setpoint  - s
        //increment - i
        //decrement - d   
                    
            if (charReceived == 1)      //check if a character sent from UART
            {
                //toggle LED (testing)
                temp = ~temp;
                PORTB = temp;

                //reset received flag
                charReceived = 0;


                //Setpoint case
                if(commandBuffer == 's')
                {
                    mode = 1;       //indicating setpoint
                    bufferIndex = 0;

                    //clear buffer
                    int i;
                    for(int i = 0; i <= bufferIndex; i++)
                    {
                        uartBuffer[i] = '0';
                    }
                }

                //if user pressed enter (in S mode), read buffer, reset index
                else if (commandBuffer == '\r' && mode == 1)
                {
                    //read buffer and convert to decimal
                    int i;
                    for(int i = 0; i <= bufferIndex; i++)
                    {
                        decBuffer[i] = uartBuffer[i] - '0';
                    }

                    //Send msg and don't process number if > 100.
                    if (decBuffer[2] > 1)
                    {
                        Write1USART("\nNumber entered too high.\n");
                    }
                    else 
                    {
                        //convert dec buffer to single character
                        numOut = (decBuffer[2] * 100 + decBuffer[1] * 10 + decBuffer[0]) * 2;

                        sendi2c(numOut);

                        bufferIndex = 0;
                        mode = 0;   //back to no mode
                    }

                }
                //number entered while in s mode
                else if (mode == 1)
                {
                    uartBuffer[bufferIndex] = commandBuffer;
                    bufferIndex++;
                }


                //at this point, data to send is 1 byte from 0 - 200

                //send data to remote node
                //sendi2c(commandBuffer);
            }

        
    } //end of while(1)
    
    CloseI2C1();
}

void sendi2c(char commandBuff)
{
    IdleI2C1();      //wait until bus is idle
    StartI2C1();    //send Start Condition
    IdleI2C1();

    WriteI2C1(0xA2);

    IdleI2C1();
    //**** Write data to Slave ****

    WriteI2C1(commandBuff);
    IdleI2C1();

    // **** Close I2C ****
    StopI2C1();    
}