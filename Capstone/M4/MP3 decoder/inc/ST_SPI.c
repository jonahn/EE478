#include <stm32f4xx.h>
#include <stm32f4xx_spi.h>

uint8_t mySPI_GetData(uint8_t);
void mySPI_Init(void);

void mySPI_Init(void){
  
    //ENABLE GPIO PERIPHERAL CLOCKS
    RCC_AHB1PeriphClockCmd(RCC_AHB1Periph_GPIOA | RCC_AHB1Periph_GPIOE , ENABLE);
     
    //ENABLE THE SERIAL PERIPHERAL INTERFACE PERIPHERAL CLOCKS
    RCC_APB2PeriphClockCmd(RCC_APB2Periph_SPI1, ENABLE);

    //GPIO SPI PINS CONFIG
    GPIO_InitTypeDef GPIO_InitTypeDefStruct;
     
    GPIO_InitTypeDefStruct.GPIO_Pin = GPIO_Pin_5 | GPIO_Pin_7 | GPIO_Pin_6;
    GPIO_InitTypeDefStruct.GPIO_Mode = GPIO_Mode_AF;
    GPIO_InitTypeDefStruct.GPIO_Speed = GPIO_Speed_50MHz;
    GPIO_InitTypeDefStruct.GPIO_OType = GPIO_OType_PP;
    GPIO_InitTypeDefStruct.GPIO_PuPd = GPIO_PuPd_NOPULL;
    GPIO_Init(GPIOA, &GPIO_InitTypeDefStruct);
     
    GPIO_InitTypeDefStruct.GPIO_Pin = GPIO_Pin_3;
    GPIO_InitTypeDefStruct.GPIO_Mode = GPIO_Mode_OUT;
    GPIO_InitTypeDefStruct.GPIO_Speed = GPIO_Speed_50MHz;
    GPIO_InitTypeDefStruct.GPIO_PuPd = GPIO_PuPd_UP;
    GPIO_InitTypeDefStruct.GPIO_OType = GPIO_OType_PP;
    GPIO_Init(GPIOE, &GPIO_InitTypeDefStruct);
     
    GPIO_PinAFConfig(GPIOA, GPIO_PinSource5, GPIO_AF_SPI1);
    GPIO_PinAFConfig(GPIOA, GPIO_PinSource6, GPIO_AF_SPI1);
    GPIO_PinAFConfig(GPIOA, GPIO_PinSource7, GPIO_AF_SPI1);
     
    GPIO_SetBits(GPIOE, GPIO_Pin_3);


    //INITIALIZE THE SPI MODULE
    SPI_InitTypeDef SPI_InitTypeDefStruct;
     
    SPI_InitTypeDefStruct.SPI_Direction = SPI_Direction_2Lines_FullDuplex;
    SPI_InitTypeDefStruct.SPI_Mode = SPI_Mode_Slave;
    SPI_InitTypeDefStruct.SPI_DataSize = SPI_DataSize_8b;
    SPI_InitTypeDefStruct.SPI_CPOL = SPI_CPOL_Low;
    SPI_InitTypeDefStruct.SPI_CPHA = SPI_CPHA_1Edge;
    SPI_InitTypeDefStruct.SPI_NSS = SPI_NSS_Soft;
    SPI_InitTypeDefStruct.SPI_BaudRatePrescaler = SPI_BaudRatePrescaler_2;
    SPI_InitTypeDefStruct.SPI_FirstBit = SPI_FirstBit_MSB;
    SPI_InitTypeDefStruct.SPI_CRCPolynomial = 7;
     
    SPI_Init(SPI1, &SPI_InitTypeDefStruct);
    
    SPI_Cmd(SPI1, ENABLE);
}
