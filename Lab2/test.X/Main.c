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

#pragma config FOSC = ECHPIO6   // Select external oscillator (EC) - high power
#pragma config PLLCFG = OFF     // Using oscillator directly.
#pragma config PRICLKEN = ON    // Primary Clock Enable
#pragma config FCMEN = OFF      // Fail Safe Clock Monitor Enable
#pragma config IESO = OFF       // External/Internal Oscillator Switchover

#pragma config WDTEN = OFF

#include "uart_interrupts.h"

volatile int i;
unsigned char temp;

unsigned int set;

void delay(long delayTime);

extern char Rx1buffer; 

void main(void)
{
    /* Make RA0 - RA2 inputs (Push Buttons) */
    TRISA = 0x07;
 
    /* Enable Digital Inputs */
    ANSELA = 0xE0;

    /* Make RB0 - RB2 outputs (LEDs) */
    TRISB = 0;

    ADCON1 = 0b00001110;
    ADCON0 = 0x00;
    ADCON2 = 0b00001000;

    /* Reset Push Buttons and LEDs */
    PORTA = 0x07;
    PORTB = 0x07;

    temp = 0x01;

    setupInterrupts();
    RCSTAbits.SPEN = 1;     //set up asynchronous communication
    RCSTAbits.CREN = 1;     //Enable receive

    // #2: set RX/TX TRIS
    //TRISCbits.TRISC6 = 0; // TX
    //TRISCbits.TRISC7 = 1; // RX

    ANSELCbits.ANSC6 = 0;
    ANSELCbits.ANSC7 = 0;

    ANSELCbits.ANSC3 = 0;   //SDA
    ANSELCbits.ANSC4 = 0;   //SCL

    SPBRG = 129;
    SPBRGH = 129;

    Open1USART(USART_TX_INT_OFF & USART_RX_INT_ON & USART_ASYNCH_MODE & 
        USART_EIGHT_BIT & USART_BRGH_HIGH, 129);


    //I2C
    //Need to set TRIS bits?

    
    //open, se4t device as MASTER, slew on for sharper transitions
    OpenI2C1(MASTER, SLEW_OFF);
    SSP1ADD = 0x31;

    set = 0;
    
    while(1)
    {
        //commands:
        //setpoint  - s
        //increment - i
        //decrement - d

        if(Rx1buffer != 'a'){
            temp = temp | 0x01;
            //IdleI2C1();
            //StopI2C1();
            //IdleI2C1();
            set = 0;
        }
        else
        {
            temp = temp & ~0x01;
            if (set == 0)
            {
                set = 1;
                IdleI2C1();      //wait until bus is idle
                StartI2C1();    //send Start Condition
                IdleI2C1();
                StopI2C1();
            }
        }
        PORTB = temp;
    }
}

void delay(long delayTime)
{
     volatile long k, j;
     for(k = 0; k < delayTime; k++)
         for(j = 0; j < delayTime; j++);
}
