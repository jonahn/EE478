#include "i2c.h"
#include "p18f25k22.h"

unsigned char tempAddr, tempData=0;

// This is the code for at the high priority vector
#pragma code high_vector=0x08
void interrupt_at_high_vector(void) { _asm GOTO highPriorityISR _endasm }
#pragma code

// The actual high priority ISR
#pragma interrupt highPriorityISR
void highPriorityISR() {
    if (PIR1bits.SSPIF == 1) {        // Check for SSP interrupt
        
        // It is an SSP interrupt, call the SSP ISR
        
        CloseI2C1();
        
        OpenI2C1(SLAVE_7, SLEW_OFF);
        SSP1ADD = 0xA2; // Match and initialze slave addr
        
        //***** READ THE ADDRESS FROM MASTER ******
        
        while (DataRdyI2C1()==0);
        tempAddr = READI2C1();
        
        //***** READ DATA FROM MASTER ******
        
        while (DataRdyI2C1()==0);
        tempData = READI2C1();
        
        //***** wait untill STOP CONDITION *****
        
        while(SSPSTATbits.S!=1);
        
        //***** READ THE ADDRESS FROM MASTER *****
        
        while (DataRdyI2C1()==0);
        tempAddr = READI2C1();
        
        //***** SLAVE WRITE BACK *****
        
        if (SSP1STAT & 0x04) {
            while (putsI2C1("Got the message!"));
        }
        
        CloseI2C1();
        
        PIR1bits.SSPIF = 0;  // Clear the interrupt flag
    }
    return;
}