#include "setupSDIO.h"

void setupSDIO()
{
  /*
  1. configure SDIO clock = 48MHz from PLL48CLK
  
    PCLK2 is APB2 bus clock such that Frequenc(PCLK2) >= (3 / 8 x Frequency(SDIO_CK))
 
  2. Enable peripheral clock:  
  RCC_APB2PeriphClockCmd(RCC_APB2Periph_SDIO, ENABLE);
  
  3. enable GPIO clocks using RCC_AHB1PeriphClockCmd()
    //8-bit data length: SDIO_CMD, SDIO_CK and D[7:0]. 
  
  4. Alternate function??
  
  5. 
  */
}