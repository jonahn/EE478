#include <p18f25k22.h>
#include <i2c.h>
#include "interrupts.h"

//#include <usart.h>
////Interrupt
//
//char commandBuffer, charReceived;      // create a buffer for Rx1
//char data;
//
// #pragma code low_vector = 0x08  // jump to the address for the low priority ISR interrupt
// void low_vector(void)
// {
//   _asm goto low_isr _endasm
// }
//
//#pragma interrupt low_isr
// void low_isr(void)
// {
//   if (PIR1bits.RCIF == 1 )//&& DataRdy1USART() == 1)   // see if there is data in the read buffer for USART1
//   {
//      commandBuffer = Read1USART();
//      charReceived = 1;
//      Write1USART(commandBuffer);
//      PIR1bits.RCIF = 0;
//   }
// }
unsigned char tempAddr, tempData;

extern unsigned char recievedDataFlag;
extern unsigned char data;

#pragma code high_vector = 0x08
void high_vector(void)
{
    _asm goto highPriorityISR _endasm
}
#pragma code

// The actual high priority ISR
#pragma interrupt highPriorityISR
void highPriorityISR() {
    // Check for SSP interrupt, reading address
    recievedDataFlag = RECIEVED;
    if (PIR1bits.SSP1IF == 1 && SSP1STATbits.BF == 1 && SSP1STATbits.D_A == 0) {

        tempAddr = SSP1BUF;  //read addr from buffer
        SSP1STATbits.BF = 0; //clear buffer
    }

    //Check for SSP interrupt, reading data // this works
    else if (PIR1bits.SSP1IF == 1 && SSP1STATbits.BF == 1 && SSP1STATbits.R_NOT_W == 0 && SSP1STATbits.D_A == 1 )
    {
        tempData = SSP1BUF;
    }

    PIR1bits.SSP1IF = 0; // Clear the interrupt flag
    return;
}



void setupInterrupts(void)
{
   
   RCONbits.IPEN = 1;      // Enable priority interrupts
   INTCONbits.GIEL = 1;     // Enable global interrupts
   INTCONbits.GIEH = 1;     // Enable global interrupts
   INTCONbits.PEIE = 1;    // peripheral interrupts

   PIE1bits.SSP1IE = 1;      // Enable SSP Interrupt
   IPR1bits.SSP1IP = 1;      // Set SSP interrupt to high
}