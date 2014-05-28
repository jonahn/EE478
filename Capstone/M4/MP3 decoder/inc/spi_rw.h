#ifndef SPI_RW_H_
#define SPI_RW_H_

#include "stm32f4xx_conf.h"
#include <stm32f4xx_spi.h>

//SPI comm with Pi Function
uint8_t mySPI_GetData(uint8_t response);
void writeBackToRPI(uint8_t data);

#endif