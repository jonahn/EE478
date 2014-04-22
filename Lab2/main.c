// 
// Remote Surgery System 
// main.c
// 
// Ahmed Jafri, Anna Horstmann, Jake Yang
//

#pragma config FOSC = ECHPIO6	// Select external oscillator (EC) - high power
#pragma config PLLCFG = OFF		// Using oscillator directly.
#pragma config PRICLKEN = ON	// Primary Clock Enable
#pragma config FCMEN = OFF 		// Fail Safe Clock Monitor Enable
#pragma config IESO = OFF		// External/Internal Oscillator Switchover

//interrupt setup
#pragma code
#pragma interruptlow InterruptHandlerLow

char buffer;

void main()
{

}

#pragma code InterruptVectorLow = 0x08
void
InterruptVectorLow()
{
  _asm
    goto InterruptHandlerLow  //jump to interrupt routine
  _endasm
}



void
InterruptHandlerLow()
{
	if(PIR1bits.RCIF == 1) 
    {
     	buffer = Read1USART();
    }

    PIR1bits.RCIF = 0;
}