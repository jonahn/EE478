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

extern unsigned char temp, dataToSend, commandBuffer;
unsigned char w;
unsigned int set;

unsigned char I2C_Recv[21];

extern void setup();
extern void setupUSARTAndI2C();

void main(void)
{
    setup();

    setupInterrupts();

    setupUSARTAndI2C();

    for(w=0;w<20;w++)
    I2C_Recv[w]=1;

    while(1)
    {
        //commands:
        //setpoint  - s
        //increment - i
        //decrement - d

        if(commandBuffer == 'a')
        {
            temp = temp & ~0x01;
                    
            if (set == 0)
            {
                set = 1;
                IdleI2C1();      //wait until bus is idle
                StartI2C1();    //send Start Condition
                IdleI2C1();

                //I2Cstatus = WriteI2C1( 0xA2 | 0x00);

                IdleI2C1();

                StopI2C1();

                IdleI2C1();

                //**** Write data to Slave ****
                StartI2C1();    //send Start Condition
                IdleI2C1();

                putcI2C1('U');
                IdleI2C1();

                // **** Close I2C ****
                StopI2C1();

            }
        }
        else
        {
            temp = temp | 0x01;
            set = 0;
        }

        PORTB = temp;
        
    } //end of while(1)
    
    CloseI2C1();
}