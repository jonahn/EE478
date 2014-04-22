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

#pragma config FOSC = ECHPIO6   // Select external oscillator (EC) - high power
#pragma config PLLCFG = OFF     // Using oscillator directly.
#pragma config PRICLKEN = ON    // Primary Clock Enable
#pragma config FCMEN = OFF      // Fail Safe Clock Monitor Enable
#pragma config IESO = OFF       // External/Internal Oscillator Switchover

#pragma config WDTEN = OFF

//Interrupt
#pragma code
#pragma interruptlow low_vector

// needs to go after above config
#include "uart_interrupts.h"

volatile int i;
unsigned char temp;

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

    /* Reset Push Buttons and LEDs */
    PORTA = 0x07;
    PORTB = 0x07;

    temp = PORTA;

    setupInterrupts();

    // #2: set RX/TX TRIS
    TRISCbits.TRISC6 = 0; // TX
    TRISCbits.TRISC7 = 1; // RX

    Open1USART(USART_TX_INT_OFF & USART_RX_INT_ON & USART_ASYNCH_MODE & 
        USART_EIGHT_BIT & USART_BRGH_HIGH, 9600);
 
    while(1)
    {
        /* Output Button Presses to LEDs */
        //delay(100);
        //temp = ~temp;

        if(Rx1buffer != 'a')
            temp = temp | 0x01;
        else
            temp = temp & ~0x01;

        delay(10);
        Write1USART('j');
        PORTB = temp;
    }
}

void delay(long delayTime)
{
     volatile long k, j;
     for(k = 0; k < delayTime; k++)
         for(j = 0; j < delayTime; j++);
}
