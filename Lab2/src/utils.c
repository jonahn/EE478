#include "utils.h"
#include <delays.h>

#pragma config FOSC = ECHP      // Select external oscillator (EC) - high power
#pragma config PLLCFG = OFF     // Using oscillator directly.
#pragma config PRICLKEN = ON    // Primary Clock Enable
#pragma config FCMEN = OFF      // Fail Safe Clock Monitor Enable
#pragma config IESO = ON        // External/Internal Oscillator Switchover

#pragma config WDTEN = OFF

void delay(unsigned char delayTime)
{
    Delay1KTCYx(delayTime);
}