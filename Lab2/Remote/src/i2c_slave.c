#include <i2c.h>
#include "p18f25k22.h"
#include "i2c_slave.h"

#pragma code
#pragma interrupthigh high_vector

unsigned char tempAddr, tempData;

// This is the code for at the high priority vector
#pragma code high_vector = 0x08
void high_vector(void)
{ 
    _asm goto highPriorityISR _endasm
}

unsigned char toggleLED;

// The actual high priority ISR
#pragma interrupt highPriorityISR
void highPriorityISR() {
    if (PIR1bits.SSP1IF == 1) {        // Check for SSP interrupt
        toggleLED = 1;

        tempData = ReadI2C1();
        /*
        // It is an SSP interrupt, call the SSP ISR
        
       
       
        
        //***** READ DATA FROM MASTER ******
        
        while (DataRdyI2C1()==0);
        tempData = ReadI2C1();
        
        //***** wait untill STOP CONDITION *****
        
        while(SSPSTATbits.S!=1);
        
        //***** READ THE ADDRESS FROM MASTER *****
        
        while (DataRdyI2C1()==0);
        tempAddr = ReadI2C1();
        
        //***** SLAVE WRITE BACK *****
        
        if (SSP1STAT & 0x04) {
            while (putsI2C1("Got the message!"));
        }
        
        CloseI2C1();
        */
        
        PIR1bits.SSP1IF = 0;  // Clear the interrupt flag
    }
    return;
}

void setupInterrupts(void)
{

   RCONbits.IPEN = 1;       // Enable priority interrupts
   INTCONbits.GIEL = 1;     // Enable global interrupts
   INTCONbits.GIEH = 1;     // Enable global interrupts
   INTCONbits.PEIE = 1;     // peripheral interrupts

   //INTCON &= 0x3f;
   PIE1bits.SSP1IE = 1;      // Enable SSP Interrupt
   IPR1bits.SSP1IP = 1;      // Set SSP interrupt to high


}