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
#include "../../src/utils.h"


#include "i2c_slave.h"


extern unsigned char toggleLED;
extern unsigned char tempData;
unsigned char temp;
volatile int i;
unsigned int duty;



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

    //setup PWM
    TRISCbits.RC2 = 1; // Set TRIS bit
    CCPTMRS0 =  0x00; // Select Timer 2
    PR2 = 0b111000; // Value 64, Set Freq = 20k
    CCP1CON = 0b00001100; // set Duty Cycle 2 LSB
    CCPR1L = 0x00;  // set Duty Cycle eight bits
    T2CON = 0b00000101; // Turn Timer 2 on
    TRISCbits.RC2 = 0; // Clear TRIS bit


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

        duty = tempData * 1.14 ; //0xE4, 0d228 = 100%

        CCP1CONbits.DC1B0 = duty & 1;
        CCP1CONbits.DC1B1 = (duty>>1) & 1;
        CCPR1L = (duty >> 2);
    }
}
