#include "ADC_Remote.h"
#include <p18f25k22.h>
#include <adc.h>

#pragma code low_vector = 0x18
void low_vector(void)
{
    _asm goto ADCISR _endasm
}
#pragma code

float voltage = 0;
extern volatile int i;
unsigned int ADCResult;
// The actual low priority ISR
#pragma interrupt ADCISR
void ADCISR() {
    // Check for SSP interrupt, reading address
    //check if the interrupt is caused by ADC
    if(PIR1bits.ADIF == 1)
    {
        for(i=0;i<16;i++)
	{
	ConvertADC();
        while(BusyADC());
	ADCResult += (unsigned int) ReadADC();
	}
	ADCResult /= 16;
	voltage = (ADCResult*5.0)/1024; // convert ADC count into voltage
          ADCON0bits.GO_DONE = 1;
        PIR1bits.ADIF == 0;
        //ConvertADC();
    }
    return;
}

void setupADCInterrupts(void)
{
  PIE1bits.ADIE = 1;      // Enable AD Interrupt
  IPR1bits.ADIP = 1;      // Set AD interrupt to high

}