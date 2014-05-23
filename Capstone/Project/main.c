
#include "stm32f4xx.h"
#include "stm32f4_discovery.h"
#include <stm32f4xx_spi.h>


extern void setupSDIO();
extern uint8_t mySPI_GetData(uint8_t);
extern void mySPI_Init(void);
unsigned char data;
unsigned char iteration;




/*void main (void) {
  //for testing LED
  STM_EVAL_LEDInit(LED6);
  iteration = 0;
  
  //SDIO setup
  setupSDIO();
  
  
  STM_EVAL_LEDOff(LED6);
  while(1) {
    
    //test board LED
    iteration++;
    if (iteration%10000000 == 0)
    {
      STM_EVAL_LEDToggle(LED6);
    }
    
    //SD
    
    
  }
}*/

int main(void)
{
        //Configure the SPI 
	mySPI_Init();
      
    while(1)
    {
        //Receive and Write back to Rpi, ignore 0x29
    	mySPI_GetData(0x29);   
    }

}




uint8_t mySPI_GetData(uint8_t adress){
 
while(!SPI_I2S_GetFlagStatus(SPI1, SPI_I2S_FLAG_RXNE));
data = SPI_I2S_ReceiveData(SPI1); //Receive and store to Data
 
while(!SPI_I2S_GetFlagStatus(SPI1, SPI_I2S_FLAG_TXE)); 
SPI_I2S_SendData(SPI1, 0x08);  // Write an indicator back
 
return  0;
}
