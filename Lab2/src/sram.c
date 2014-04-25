/* 
 * File:   sram.c
 * Author: Ahmed Jafri, Anna Horstmann, Jake Yang
 *
 * Created on April 21, 2014, 5:50 PM
 */

#define NUMBER_OF_ADDRESSES 256

#include <stdio.h>
#include <p18f25k22.h>
#include "sram.h"

unsigned char currentAddress = 0x0;
unsigned char tempData;

extern unsigned char dataToSRAM, commandBuffer, readAddress;

extern void setDataBusToOutput();
extern void setDataBusToInput();

extern void enableWrite();
extern void disableWrite();

extern void enableOutput();
extern void disableOutput();

unsigned char storeData()
{
    setDataBusToOutput();

    // always write to address 0x02
    currentAddress = 0x02;
    
    if(currentAddress > 0x7)
    {
        currentAddress = 0x0;
    }

    readAddress = currentAddress;

    enableWrite();
    
    //always set A7 and A6 to high
    tempData = dataToSRAM | 0xC0;
    // set A0...A5 to lower 6 bits of data
    LATA = tempData;
    tempData = PORTC | dataToSRAM >> 6;
    LATC = tempData;

    LATB = PORTB | currentAddress << 1;

}

// get the data at the address given.
void getData()
{
    setDataBusToInput();

    disableWrite();

    LATB = PORTB | readAddress << 1;

    tempData = PORTA & ~0xC0;
    tempData = tempData | PORTC << 6;

    dataToSRAM = tempData;
    tempData=tempData;
}

// Clear all data. Set all addresses from 0-255 to 0x0.
void clearSRAM()
{
    unsigned int k;
    
    for(k = 0; k < NUMBER_OF_ADDRESSES; k++)
    {
        dataToSRAM = 0x0;
        storeData();
    }
}

void setDataBusToOutput()
{
    // set pins as output
    TRISAbits.TRISA0 = 0;
    TRISAbits.TRISA1 = 0;
    TRISAbits.TRISA2 = 0;
    TRISAbits.TRISA3 = 0;
    TRISAbits.TRISA4 = 0;
    TRISAbits.TRISA5 = 0;
    TRISCbits.TRISC0 = 0;
    TRISCbits.TRISC1 = 0;
}
void setDataBusToInput()
{
    // set pins as input
    TRISAbits.TRISA0 = 1;
    TRISAbits.TRISA1 = 1;
    TRISAbits.TRISA2 = 1;
    TRISAbits.TRISA3 = 1;
    TRISAbits.TRISA4 = 1;
    TRISAbits.TRISA5 = 1;
    TRISCbits.TRISC0 = 1; 
    TRISCbits.TRISC1 = 1; 
}

void enableWrite()
{
    //B4 is ~WE so enable it (0)
    LATB = PORTB & ~0x10;

    disableOutput();
}

void disableWrite()
{
    //B4 is ~WE so disable it (1)
    LATB = PORTB | 0x10;

    enableOutput();
}

void enableOutput()
{
    //B5 is ~OE so enable it (0)
    LATB = PORTB & ~0x20;
}
void disableOutput()
{
    //B5 is ~OE so disable it (1)
    LATB = PORTB | 0x20;
}