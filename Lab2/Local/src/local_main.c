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

extern unsigned char temp, dataToSend, commandBuffer, charReceived;
unsigned int set;

extern void setup();
extern void setupUSARTAndI2C();

void main(void)
{
    setup();

    setupInterrupts();

    setupUSARTAndI2C();

    while(1)
    {
        //commands:
        //setpoint  - s
        //increment - i
        //decrement - d

            
                    
            if (charReceived == 1)
            {
                temp = ~temp;
                charReceived = 0;

                IdleI2C1();      //wait until bus is idle
                StartI2C1();    //send Start Condition
                IdleI2C1();

                WriteI2C1(0xA2);

                IdleI2C1();
                //**** Write data to Slave ****

                WriteI2C1(commandBuffer);
                IdleI2C1();

                // **** Close I2C ****
                StopI2C1();
            }
        PORTB = temp;
        
    } //end of while(1)
    
    CloseI2C1();
}