#include "stm32f4xx_it.h"
#include "main.h"

extern int rxIndex;
extern char dataRxComplete;
extern char *currentWriteBuffer;

/**
  * @brief   This function handles NMI exception.
  * @param  None
  * @retval None
  */
void NMI_Handler(void)
{
}

/**
  * @brief  This function handles Hard Fault exception.
  * @param  None
  * @retval None
  */
void HardFault_Handler(void)
{
  /* Go to infinite loop when Hard Fault exception occurs */
  while (1)
  {
  }
}

/**
  * @brief  This function handles Memory Manage exception.
  * @param  None
  * @retval None
  */
void MemManage_Handler(void)
{
  /* Go to infinite loop when Memory Manage exception occurs */
  while (1)
  {
  }
}

/**
  * @brief  This function handles Bus Fault exception.
  * @param  None
  * @retval None
  */
void BusFault_Handler(void)
{
  /* Go to infinite loop when Bus Fault exception occurs */
  while (1)
  {
  }
}

/**
  * @brief  This function handles Usage Fault exception.
  * @param  None
  * @retval None
  */
void UsageFault_Handler(void)
{
  /* Go to infinite loop when Usage Fault exception occurs */
  while (1)
  {
  }
}

/**
  * @brief  This function handles SVCall exception.
  * @param  None
  * @retval None
  */
void SVC_Handler(void)
{
}

/**
  * @brief  This function handles Debug Monitor exception.
  * @param  None
  * @retval None
  */
void DebugMon_Handler(void)
{
}

/**
  * @brief  This function handles PendSVC exception.
  * @param  None
  * @retval None
  */
void PendSV_Handler(void)
{
}

/**
  * @brief  This function handles SysTick Handler.
  * @param  None
  * @retval None
  */
void SysTick_Handler(void)
{
	timing_handler();
}

/******************************************************************************/
/*                 STM32F4xx Peripherals Interrupt Handlers                   */
/*  Add here the Interrupt Handler for the used peripheral(s) (PPP), for the  */
/*  available peripheral interrupt handler's name please refer to the startup */
/*  file (startup_stm32f4xx.s).                                               */
/******************************************************************************/

/**
* @brief This function handles SPI interrupt request.
* @param None
* @retval None
*/
void SPI1_IRQHandler(void)
{
  /* SPI in Receiver mode */
  if (SPI_I2S_GetITStatus(SPI1, SPI_I2S_IT_RXNE) == SET)
  {
    if (rxIndex < MP3_SIZE)
    {
      /* Receive Transaction data */
      currentWriteBuffer[rxIndex] = SPI_I2S_ReceiveData(SPI1);
      rxIndex++;
      if (rxIndex == MP3_SIZE)
      {
          dataRxComplete = 1;
          rxIndex = 0; 
      }
      else
          dataRxComplete = 0;
    }

    else
    {
      /* Disable the Rx buffer not empty interrupt */
      SPI_I2S_ITConfig(SPI1, SPI_I2S_IT_RXNE, DISABLE);
    }
  }
  
//  /* SPI in Tramitter mode */
//  if (SPI_I2S_GetITStatus(SPIx, SPI_I2S_IT_TXE) == SET)
//  {
//    if (ubTxIndex < BUFFERSIZE)
//    {
//      /* Send Transaction data */
//      SPI_I2S_SendData(SPIx, aTxBuffer[ubTxIndex++]);
//    }
//    else
//    {
//      /* Disable the Tx buffer empty interrupt */
//      SPI_I2S_ITConfig(SPIx, SPI_I2S_IT_TXE, DISABLE);
//    }
//  }
}
