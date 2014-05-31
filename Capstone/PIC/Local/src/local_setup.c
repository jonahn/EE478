/* 
 * File:   Main.c
 * Author: Ahmed Jafri, Jake Yang, Anna Horstmann
 *
 * Created on April 20, 2014, 6:28 PM
 */

#include "local_setup.h"
#include <p18f25k22.h>
#include <usart.h>
#include <i2c.h>

unsigned char temp, dataToSend;

void setup()
{
    TRISA = 0x00;

    ADCON1 = 0x0F;     //Disable all analog inputs

    // make all port B outputs
    TRISB = 0x00;

    ANSELA = 0xC0;
    ANSELB = 0x00;
    ANSELC = 0x00;

    temp = 0x01;

}

void setupUSARTAndI2C()
{
    RCSTAbits.SPEN = 1;     //set up asynchronous communication
    RCSTAbits.CREN = 1;     //Enable receive

    TRISCbits.TRISC0 = 0; //
    TRISCbits.TRISC1 = 0; //

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

    //open, se4t device as MASTER, slew on for sharper transitions
    OpenI2C1(MASTER, SLEW_OFF);
    SSP1ADD = 0x31;

    //Temporary value, will be stored in SRAM later
    dataToSend = 0;
}