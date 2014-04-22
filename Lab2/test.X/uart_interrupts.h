/* 
 * File:   uart_interrupts.h
 * Author: ajafri19
 *
 * Created on April 21, 2014, 5:50 PM
 */

#ifndef UART_INTERRUPTS_H
#define	UART_INTERRUPTS_H

#ifdef	__cplusplus
extern "C" {
#endif

void setupInterrupts(void);

void low_isr(void);

#ifdef	__cplusplus
}
#endif

#endif	/* UART_INTERRUPTS_H */

