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
#include "../src/utils.h"

unsigned char tempSRAMData;

extern unsigned char SRAMDataBus, address;

void enableWrite();
void disableWrite();

void enableOutput();
void disableOutput();

void setDataBusToOutput();
void setDataBusToInput();

// to satisfy compiler
extern void setDataBusToOutput();
extern void setDataBusToInput();
extern void enableWrite();
extern void disableWrite();
extern void enableOutput();
extern void disableOutput();

void setAddress();
// to satisfy compiler
extern void setAddress();

void storeData()
{
    setDataBusToOutput();

    setAddress();

    enableWrite();
    
    //always set A7 and A6 to high
    tempSRAMData = SRAMDataBus | 0xC0;
    // set A0...A5 to lower 6 bits of data
    LATA = tempSRAMData;
    tempSRAMData = PORTC | SRAMDataBus >> 6;
    LATC = tempSRAMData;

    delay(50);

    disableWrite();
}

// get the data at the address given.
void getData()
{
    setDataBusToInput();

    disableWrite();

    delay(10);

    setAddress();

    // delay after the address is pushed on the SRAM
    delay(50);

    tempSRAMData = PORTA & ~0xC0;
    tempSRAMData = tempSRAMData | PORTC << 6;

    SRAMDataBus = tempSRAMData;
    
    disableOutput();
}

// Clear all data. Set all addresses from 0-255 to 0x0.
void clearSRAM()
{
    unsigned int k;
    
    for(k = 0; k < NUMBER_OF_ADDRESSES; k++)
    {
        SRAMDataBus = 0x0;
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
    disableOutput();

    TRISBbits.TRISB4 = 0;
    //B4 is ~WE so enable it (0)
    LATBbits.LATB4 = 0;
}

void disableWrite()
{
    enableOutput();

    TRISBbits.TRISB4 = 0;
    //B4 is ~WE so disable it (1)
    LATBbits.LATB4 = 1;
}

void enableOutput()
{
    //B5 is ~OE so enable it (0)
    TRISBbits.TRISB5 = 0;
    LATBbits.LATB5 = 0;
}
void disableOutput()
{
    //B5 is ~OE so disable it (1)
    TRISBbits.TRISB5 = 0;
    LATBbits.LATB5 = 1;
}

void setAddress()
{
    LATB = PORTB & ~0x7;
    LATB = PORTB | address << 1;
}