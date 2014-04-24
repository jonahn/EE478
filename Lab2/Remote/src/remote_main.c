/* 
 * File:   Main.c
 * Author: Ahmed Jafri, Jake Yang, Anna Horstmann
 *
 * Created on April 20, 2014, 6:28 PM
 */

#include <stdio.h>
#include <stdlib.h>
#include <p18f25k22.h>
#include <i2c.h>

#pragma config WDTEN = OFF

#include "i2c_slave.h"

extern unsigned char toggleLED;
unsigned char temp;
volatile int i;

void main(void)
{
    toggleLED = 0;

    ANSELCbits.ANSC3 = 0;   //SDA
    ANSELCbits.ANSC4 = 0;   //SCL

    TRISB = 0;      //test LED initialize port
    PORTB = 0x01;   //test LED

    setupInterrupts();

    //TODO: SETUP I2C
    OpenI2C1(SLAVE_7, SLEW_OFF);
    SSP1ADD = 0xA2;


    while(1)
    {
        temp = ~temp;
        PORTB = temp;
        delay(100);

        if (toggleLED == 1)
        {
            //temp = ~temp;
            //PORTB = temp;
            toggleLED = 0;
            toggleLED = toggleLED;
        }
        
    }
}
