#include <p18f25k22.h>
#include <usart.h>
#include "uart_interrupts.h"

char Rx1buffer;      // create a buffer for Rx1

 #pragma code low_vector=0x18  // jump to the address for the low priority ISR interrupt
 void lowpriority_interrupt(void)
 {
   _asm GOTO low_isr _endasm
 }
 #pragma code  // returning to normal code section

 #pragma interruptlow low_isr
 void low_isr(void)
 {
   if (DataRdy1USART() == 1)        // see if there is data in the read buffer for USART1
   {
      // Rx1buffer = Read1USART();
       Rx1buffer = RCREG;
   }

   USART_putc(Rx1buffer);
 }

void setupInterrupts(void)
 {
   RCONbits.IPEN = 1;      // Enable priority interrupts
   INTCONbits.GIEH = 1;     // Enable high priority interrupts
   INTCONbits.GIEL = 1;    // Enable low priority interrupts
   INTCON2bits.TMR0IP = 1; // Setting Timer0's interrupt to high priority
   IPR1bits.RC1IP = 0;     // set Rx1 as a low priority interrupt
   PIE1bits.RC1IE = 1;     // Enable Rx1 interrupt
 }