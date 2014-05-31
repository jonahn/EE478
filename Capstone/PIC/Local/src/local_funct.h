/* 
 * File:   local_funct.h
 * Author: annahors
 *
 * Created on May 1, 2014, 2:09 PM
 */

#ifndef LOCAL_FUNCT_H
#define	LOCAL_FUNCT_H

#ifdef	__cplusplus
extern "C" {
#endif




#ifdef	__cplusplus
}
#endif

#endif	/* LOCAL_FUNCT_H */

void sendErrorMessageActualVoltage();
void sendErrorMessageMax();
void sendErrorMessageMin();
void correctedIncrement();
void correctedDecrement();
void increment();
void decrement();
void sendDataI2C();

//void UARTSend(char *str, unsigned long strLength)


