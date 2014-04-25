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

unsigned char bufferIndex, mode;    //mode: 0 = null, 1 = S, 2 = i, 3 = d
unsigned char numOut = 0x49;
unsigned char uartBuffer[3];        //buff containing char inputs from usart
unsigned char decBuffer[3];         //buff containing conversions to decimal

int i;

extern void setup();
extern void setupUSARTAndI2C();

void main(void)
{
    setup();

    setupInterrupts();

    setupUSARTAndI2C();

    bufferIndex = 0;
    mode = 0;
    
    //write initial msg to user on USART
    Write1USART('i');   //FIGURE OUT HOW TO SEND STRING

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
                    for(i = 0; i <= 2; i++)
                    {
                        uartBuffer[i] = '0';
                    }
                }

                //if user pressed enter (in S mode), read buffer, reset index
                else if (commandBuffer == '\r' && mode == 1)
                {   
                    //read buffer and convert to decimal
                    for(i = 0; i <= bufferIndex; i++)
                    {
                        decBuffer[i] = uartBuffer[i] - '0';
                    }

                    //Send msg and don't process number if > 100.
                    if (decBuffer[0] > 1)
                    {
                        Write1USART('E');
                    }
                    else 
                    {
                        //convert dec buffer to single character
                       numOut = (decBuffer[0] * 100 + decBuffer[1] * 10 + decBuffer[2]) * 2;

                       //***Send over I2C
                        IdleI2C1();      //wait until bus is idle
                        StartI2C1();    //send Start Condition
                        IdleI2C1();

                        WriteI2C1(0xA2);

                        IdleI2C1();
                        //**** Write data to Slave ****

                        WriteI2C1(numOut);
                        IdleI2C1();

                        // **** Close I2C ****
                        StopI2C1();

                        //*** end of send ***
                    }
                    bufferIndex = 0;
                    mode = 0;   //back to no mode
                    Write1USART('\n');   //send  new line
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
