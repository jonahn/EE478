#include "ADC_Remote.h"
#include <p18f25k22.h>
#include <adc.h>

#pragma code low_vector = 0x18
void low_vector(void)
{
    _asm goto ADCISR _endasm
}
#pragma code

unsigned char voltage = 0;
extern volatile int i;
unsigned int ADCResult;
// The actual low priority ISR
#pragma interrupt ADCISR
void ADCISR() {
    // Check for ADC interrupt, reading address
    //check if the interrupt is caused by ADC
    if(PIR1bits.ADIF == 1)
    {
//        for(i=0;i<16;i++)
//	{
//	ConvertADC();
//        while(BusyADC());
//	ADCResult += (unsigned int) ReadADC();
//	}
   /*
        ConvertADC();
        ADCResult = (unsigned int) ReadADC();   //for testing
        voltage = ADCResult;
	//ADCResult /= 16;
	//voltage = (ADCResult*5.0)/1024; // convert ADC count into voltage
        ADCON0bits.GO_DONE = 1;
        PIR1bits.ADIF = 0;
        //ConvertADC();

     */
        //voltage = ADRESH << 2;
        //voltage |= ADRESL >> 6;
        //voltage = ADRESL >> 2;
        voltage = ADRESH;
        voltage = (unsigned char)(((int)voltage * 200) / ((int)253));
        //ADCON0bits.GO_DONE = 1;
        PIR1bits.ADIF = 0;

    }
    return;
}

void setupADCInterrupts(void)
{
  PIE1bits.ADIE = 1;      // Enable AD Interrupt
  IPR1bits.ADIP = 0;      // Set AD interrupt to high

}