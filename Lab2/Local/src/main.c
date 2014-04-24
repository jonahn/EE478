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

unsigned char I2Cstatus, dataBuf, w;
unsigned char I2C_Recv[21];
unsigned char dataToSend;   //temporary value, will be stored in SRAM

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
    TRISCbits.TRISC6 = 0; // TX output
    TRISCbits.TRISC7 = 1; // RX input

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

    //Temporary value, will be stored in SRAM later
    dataToSend = 0;

    
    for(w=0;w<20;w++)
    I2C_Recv[w]=0;

    while(1)
    {
        //commands:
        //setpoint  - s
        //increment - i
        //decrement - d

        if(Rx1buffer != 'a'){
            temp = temp | 0x01;
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
                
                //**** Setup Communication to Write****
                //dataBuf = SSP1BUF;
                /*
                while(I2Cstatus!=0)
                {
                 */
                    I2Cstatus = WriteI2C1( 0xA2 | 0x00);
                    /*if(I2Cstatus == -1)
                    {
                        dataBuf = SSP1BUF;
                        SSP1CON1bits.WCOL=0;	// clear the bus collision status bit
                    }
                    */
               // }
                IdleI2C1();
                /*
                //**** Write data to Slave ****
                while(*/putcI2C1('U');/*!=0)
                */IdleI2C1();
                /*
                //**** RESTART I2C COMMUNICATION ****
                RestartI2C1();
                IdleI2C1();

                //**** Setup Communication to Read back ****
                dataBuf = SSP1BUF;
                do
                {
                    I2Cstatus = WriteI2C1( 0xA2 | 0x01);
                    if(I2Cstatus == -1)
                    {
                        dataBuf = SSP1BUF;
                        SSP1CON1bits.WCOL=0;	// clear the bus collision status bit
                    }
                }while(I2Cstatus!=0);

                //**** Recieve data from slave ****

                while( getsI2C1(I2C_Recv,20) );		//recieve data string of lenght 20 from slave
                I2C_Recv[20] = '\0' ;

		NotAckI2C1();					//send the end of transmission signal through nack
		while( SSP1CON2bits.ACKEN!=0);		//wait till ack sequence is complete
                */

                // **** Close I2C ****
                StopI2C1();
                
            }
        }
        PORTB = temp;

         
    }
    CloseI2C1();
}

void delay(long delayTime)
{
     volatile long k, j;
     for(k = 0; k < delayTime; k++)
         for(j = 0; j < delayTime; j++);
}
