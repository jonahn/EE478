#ifndef UTILS_H
#define UTILS_H

#pragma config FOSC = ECHPIO6   // Select external oscillator (EC) - high power
#pragma config PLLCFG = OFF     // Using oscillator directly.
#pragma config PRICLKEN = ON    // Primary Clock Enable
#pragma config FCMEN = OFF      // Fail Safe Clock Monitor Enable
#pragma config IESO = OFF       // External/Internal Oscillator Switchover

#pragma config WDTEN = OFF

void delay(long delayTime);

#endif