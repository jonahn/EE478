#include <p18f25k22.h>
#include <usart.h>
#include "uart_interrupts.h"

//Interrupt

char commandBuffer, charReceived;      // create a buffer for Rx1
char data;

 #pragma code low_vector = 0x08  // jump to the address for the low priority ISR interrupt
 void low_vector(void)
 {
   _asm goto low_isr _endasm
 }

#pragma interrupt low_isr
 void low_isr(void)
 {
   if (PIR1bits.RCIF == 1 )//&& DataRdy1USART() == 1)   // see if there is data in the read buffer for USART1
   {
      commandBuffer = Read1USART();
      charReceived = 1;
      Write1USART(commandBuffer);
      PIR1bits.RCIF = 0;
   }
 }

void setupInterrupts(void)
{
   
   RCONbits.IPEN = 1;      // Enable priority interrupts
   INTCONbits.GIEL = 1;     // Enable global interrupts
   INTCONbits.GIEH = 1;     // Enable global interrupts
   INTCONbits.PEIE = 1;    // peripheral interrupts
}