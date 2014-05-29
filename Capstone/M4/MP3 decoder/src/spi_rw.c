#include "spi_rw.h"

extern uint8_t isItData;

uint8_t mySPI_GetData(uint8_t response)
{

//    while(!SPI_I2S_GetFlagStatus(SPI1, SPI_I2S_FLAG_RXNE));
//    isItData = SPI_I2S_ReceiveData(SPI1);
//    
//    while(!SPI_I2S_GetFlagStatus(SPI1, SPI_I2S_FLAG_RXNE));
//    uint8_t data = SPI_I2S_ReceiveData(SPI1);
//    
//    writeBackToRPI(response);
//    
//    return data;
 }

void writeBackToRPI(uint8_t data)
{
      while(!SPI_I2S_GetFlagStatus(SPI1, SPI_I2S_FLAG_RXNE));
      SPI_I2S_ReceiveData(SPI1);
      
      while(!SPI_I2S_GetFlagStatus(SPI1, SPI_I2S_FLAG_TXE)); 
      SPI_I2S_SendData(SPI1, data);  // Write an indicator back
}