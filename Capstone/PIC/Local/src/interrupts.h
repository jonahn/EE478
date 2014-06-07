/* 
 * File:   uart_interrupts.h
 * Author: ajafri19
 *
 * Created on April 21, 2014, 5:50 PM
 */

#ifndef INTERRUPTS_H
#define	INTERRUPTS_H

#ifdef	__cplusplus
extern "C" {
#endif

#define NOT_RECIEVED 0
#define RECIEVED 1

#define MAX_CHAR_SENT   40

void setupInterrupts(void);

void low_isr(void);
void highPriorityISR(void);
void low_vector(void);

#ifdef	__cplusplus
}
#endif

#endif	/* UART_INTERRUPTS_H */

