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

    TRISAbits.RA0 = 0; //LED Output
    TRISAbits.RA1 = 0; //LED Output
    TRISAbits.RA2 = 0; //LED Output
    TRISAbits.RA3 = 0; //LED Output
    TRISBbits.RB0 = 0; //LED Output
    TRISBbits.RB1 = 0; //LED Output
    TRISBbits.RB2 = 0; //LED Output
    TRISBbits.RB3 = 0; //LED Output
    TRISBbits.RB4 = 0; //LED Output
    TRISBbits.RB5 = 0; //LED Output

    ANSELAbits.ANSA0 = 0;
    ANSELAbits.ANSA1 = 0;
    ANSELAbits.ANSA2 = 0;
    ANSELAbits.ANSA3 = 0;
    ANSELBbits.ANSB0 = 0;
    ANSELBbits.ANSB1 = 0;
    ANSELBbits.ANSB2 = 0;
    ANSELBbits.ANSB3 = 0;
    ANSELBbits.ANSB4 = 0;
    ANSELBbits.ANSB5 = 0;

    SPBRG = 129;
    SPBRGH = 129;

    Open1USART(USART_TX_INT_OFF & USART_RX_INT_ON & USART_ASYNCH_MODE &
        USART_EIGHT_BIT & USART_BRGH_HIGH, 129);

    //open, se4t device as MASTER, slew on for sharper transitions
    //CloseI2C1();
    
}

void setupLED_Pins()
{

}