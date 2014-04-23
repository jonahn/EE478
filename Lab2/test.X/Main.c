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

#include "uart_interrupts.h"

// needs to go after above config

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
    TRISCbits.TRISC6 = 0; // TX
    TRISCbits.TRISC7 = 1; // RX

    ANSELCbits.ANSC6 = 0;
    ANSELCbits.ANSC7 = 0;

    SPBRG = 129;
    SPBRGH = 129;

    Open1USART(USART_TX_INT_OFF & USART_RX_INT_ON & USART_ASYNCH_MODE & 
        USART_EIGHT_BIT & USART_BRGH_HIGH, 129);


 
    while(1)
    {
        /* Output Button Presses to LEDs */
        //delay(100);
        //temp = ~temp;
        if(Rx1buffer != 'a')
            temp = temp | 0x01;
        else
            temp = temp & ~0x01;

        //delay(150);
        //Write1USART(Rx1buffer);

        PORTB = temp;
    }
}

void delay(long delayTime)
{
     volatile long k, j;
     for(k = 0; k < delayTime; k++)
         for(j = 0; j < delayTime; j++);
}
