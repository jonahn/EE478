/*
 * main.h
 *
 *  Created on: 10 jul 2012
 *      Author: BenjaminVe
 */

#ifndef MAIN_H_
#define MAIN_H_

// Private function prototypes
static void AudioCallback(void *context,int buffer);
void Delay(volatile uint32_t nCount);
void init();

// Function prototypes
void timing_handler();

#endif /* MAIN_H_ */

#define MP3_SIZE	31346//687348
