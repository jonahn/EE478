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
#include "uart_interrupts.h"

#pragma config FOSC = XT
#pragma config WDTEN = OFF
#pragma config PLLCFG = OFF
#pragma config PRICLKEN = OFF   // Primary clock enable bit (Primary clock enabled)
#pragma config FCMEN = OFF      // Fail-Safe Clock Monitor Enable bit (Fail-Safe Clock Monitor disabled)
#pragma config IESO = ON        // Internal/External Oscillator Switchover bit

volatile int i;
unsigned char temp;

void delay(long delayTime);
void USART_putc (unsigned char c);

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

 //TRISC = 0B11000000;
 //ANSELC = 0x00;

 //TXSTA1bits.TX9  = 0; // Select 8-bit transmission
 TXSTA1bits.BRGH = 1; // Select highspeed baud rate. Divide by 4.
 //TXSTA1bits.SYNC = 0; // Async mode
 TXSTA1bits.TXEN = 1; // enable transmission

 RCSTA1bits.SPEN = 1; //
 //RCSTA1bits.RX9  = 0; // Select 8-bit transmission
 RCSTA1bits.CREN = 1; // enable continuous recieve

 // #1: initialize SPBRG and BRG for desired baud rate
 SPBRG  = 129; // 71=56000. 69=57600. 104=38400.
 SPBRGH = 1;
 //BAUDCON1bits.BRG16 = 0;
 ANSELCbits.ANSC6 = 1;

 // #2: set RX/TX TRIS
 TRISCbits.TRISC6 = 1; // TX
 TRISCbits.TRISC7 = 1; // RX

 Open1USART(USART_TX_INT_OFF & USART_RX_INT_OFF & USART_ASYNCH_MODE
         &USART_EIGHT_BIT & USART_CONT_RX & USART_BRGH_HIGH, SPBRG);
 
 setupInterrupts();
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
     USART_putc('j');
     PORTB = temp;
 }
}

void delay(long delayTime)
{
     volatile long k, j;
     for(k = 0; k < delayTime; k++)
         for(j = 0; j < delayTime; j++);
}

void USART_putc (unsigned char c)
{
    while (!TXSTAbits.TRMT);
    TXREG = c;
}
