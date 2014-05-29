#include "ST_SPI.h"

void mySPI_Init(void){
  
    //ENABLE GPIO PERIPHERAL CLOCKS
    RCC_AHB1PeriphClockCmd(RCC_AHB1Periph_GPIOA | RCC_AHB1Periph_GPIOE | RCC_AHB1Periph_GPIOD, ENABLE);
     
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
    
    /*Additional SPI pin for feedback to RPi */
    GPIO_InitTypeDef GPIO_InitOutputStruct;
    GPIO_InitOutputStruct.GPIO_Pin = GPIO_Pin_11;
    GPIO_InitOutputStruct.GPIO_Mode = GPIO_Mode_OUT;
    GPIO_InitOutputStruct.GPIO_OType = GPIO_OType_PP;
    GPIO_InitOutputStruct.GPIO_Speed = GPIO_Speed_50MHz;
    GPIO_InitOutputStruct.GPIO_PuPd = GPIO_PuPd_UP;
    GPIO_Init(GPIOD, & GPIO_InitOutputStruct);
    
    
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
    
    //
    NVIC_InitTypeDef NVIC_InitStructure;
    NVIC_PriorityGroupConfig(NVIC_PriorityGroup_2);
    
    /* Configure the SPI interrupt priority */
    NVIC_InitStructure.NVIC_IRQChannel = SPI1_IRQn;
    NVIC_InitStructure.NVIC_IRQChannelPreemptionPriority = 1;
    NVIC_InitStructure.NVIC_IRQChannelSubPriority = 0;
    NVIC_InitStructure.NVIC_IRQChannelCmd = ENABLE;
    NVIC_Init(&NVIC_InitStructure);
  
  //init spi
    SPI_Init(SPI1, &SPI_InitTypeDefStruct);
    
    SPI_Cmd(SPI1, ENABLE);
}
