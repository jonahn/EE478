#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <stm32f4xx_spi.h>
#include <math.h>
#include "stm32f4xx_conf.h"
#include "utils.h"
#include "Audio.h"
#include "mp3dec.h"
#include "ST_SPI.h"
#include "settings.h"
#include "main.h"

// Some macros
//#define MP3_SIZE	10000//31346//687348
#define BUTTON		(GPIOA->IDR & GPIO_Pin_0)

// Private variables
volatile uint32_t time_var1, time_var2;
MP3FrameInfo mp3FrameInfo;
HMP3Decoder hMP3Decoder;

// External variables
/*extern*/char mp3_data[MP3_SIZE];
char mp3_data2[MP3_SIZE];

char *currentReadBuffer;
char *currentWriteBuffer;

int rxIndex = 0;
char dataRxComplete = 0;

uint8_t isItData = 0;
uint8_t resetPtr = 0;

int countFlips = 0;
int err;

char *read_ptr;

void flipBuffers()
{
        char *tempBuffer = currentReadBuffer;
        currentReadBuffer = currentWriteBuffer;
        currentWriteBuffer = tempBuffer;
        read_ptr = currentReadBuffer;
        
        rxIndex = 0;
        countFlips += 1;
        
        GPIO_ToggleBits(GPIOD,  GPIO_Pin_11);
        GPIO_ToggleBits(GPIOD,  GPIO_Pin_11);
        
}

int main(void) {
	init();

        currentWriteBuffer = mp3_data;
        currentReadBuffer = mp3_data2;
        
        mySPI_Init();                           //Init SPI for comm with Pi
        
        //initialize SPI rx buffer counter
        rxIndex = 0;
        
        
        /* Enable the Rx buffer not empty interrupt */
        SPI_I2S_ITConfig(SPI1, SPI_I2S_IT_RXNE, ENABLE);
        
        /* send initial pulse for RPi to send data*/
        GPIO_ToggleBits(GPIOD,  GPIO_Pin_11);
        //sending end of pulse
        if (SPI_I2S_GetITStatus(SPI1, SPI_I2S_IT_RXNE) != SET)
        {
          GPIO_ToggleBits(GPIOD,  GPIO_Pin_11);
        }
        
        //wait until data buffer loaded first time (change?)
        while (!dataRxComplete) 
        {
            dataRxComplete = dataRxComplete;
        }
        
        //rxIndex = 0;                    //reset rxIndex (do in interrupt?)
        dataRxComplete = 0;
        
        flipBuffers();
        
	hMP3Decoder = MP3InitDecoder();
                
        //Send need more data GPIO signal
        
	InitializeAudio(Audio44100HzSettings);
	SetAudioVolume(0xCF);
        PlayAudioWithCallback(AudioCallback, 0);
        
        
	while(1) { 
          
//                while(!dataRxComplete) 
//                {
//                     dataRxComplete = dataRxComplete;        
//                }
//                dataRxComplete = 0;
//                
//                //flip buffers
//                char *tempBuffer = currentReadBuffer;
//                currentReadBuffer = currentWriteBuffer;
//                currentWriteBuffer = tempBuffer;
//                
//                
//                GPIO_ToggleBits(GPIOD,  GPIO_Pin_11);
//                GPIO_ToggleBits(GPIOD,  GPIO_Pin_11);
              
	}
}

/*
 * Called by the audio driver when it is time to provide data to
 * one of the audio buffers (while the other buffer is sent to the
 * CODEC using DMA). One mp3 frame is decoded at a time and
 * provided to the audio driver.
 */

static void AudioCallback(void *context, int buffer) 
{
        static int16_t audio_buffer0[4096];
	static int16_t audio_buffer1[4096];
        
        int offset;
	int outOfData = 0;
	static int bytes_left = MP3_SIZE;
        
	int16_t *samples;

	if (buffer) 
        {
		samples = audio_buffer0;
		GPIO_SetBits(GPIOD, GPIO_Pin_13);
		GPIO_ResetBits(GPIOD, GPIO_Pin_14);
	} 
        else 
        {
		samples = audio_buffer1;
		GPIO_SetBits(GPIOD, GPIO_Pin_14);
		GPIO_ResetBits(GPIOD, GPIO_Pin_13);
	}

	offset = MP3FindSyncWord((unsigned char*)read_ptr, bytes_left);
        
        if (offset != -1)
        {
          bytes_left -= offset;
        }
        /*
        else
        {
            bytes_left = 0;       //end of buffer, toggle buffers
        }*/
        
        //Played the entire buffer, loop back to play from the front of the buffer
        if (bytes_left <= 1000) {
                  flipBuffers();
                  bytes_left = MP3_SIZE;
                  offset = MP3FindSyncWord((unsigned char*)read_ptr, bytes_left);
	}

        if(offset < MP3_SIZE && offset >= 0)
        {
             read_ptr += offset;
        }
        
        //if (*read_ptr == 0xFF)
        //{
          err = MP3Decode(hMP3Decoder, (unsigned char**)&read_ptr, &bytes_left, samples, 0);
        //}
        
	if (err && (err != -9)) 
        {
		// error occurred
		switch (err) 
                {
		case ERR_MP3_INDATA_UNDERFLOW:
			outOfData = 1;
			break;
		case ERR_MP3_MAINDATA_UNDERFLOW:
                        MP3GetLastFrameInfo(hMP3Decoder, &mp3FrameInfo);
			//do nothing - next call to decode will provide more mainData 
			break;
                        
                case (-6):
                        bytes_left -= 5;
                        read_ptr += 5;
                        //MP3GetLastFrameInfo(hMP3Decoder, &mp3FrameInfo);
                        break;
                
                case (-8):
                        break;
                
		case ERR_MP3_FREE_BITRATE_SYNC:
                        break;
                 
		default:
			outOfData = 1;
                        bytes_left -= 5;
                        read_ptr += 5;
			break;
                }
          /*
          StopAudio();
          
          rxIndex = 0;                   
          dataRxComplete = 0;
          bytes_left = MP3_SIZE;
          
          flipBuffers();
        
          PlayAudioWithCallback(AudioCallback, 0);*/
	} 
        else 
        {
		// no error 
		MP3GetLastFrameInfo(hMP3Decoder, &mp3FrameInfo);
	}
        //MP3GetLastFrameInfo(hMP3Decoder, &mp3FrameInfo);

	if (mp3FrameInfo.outputSamps > 0) 
        {
        ProvideAudioBuffer(samples, mp3FrameInfo.outputSamps);
	}
        else
        {
          ProvideAudioBuffer(samples, 4096);
        }
}

void init() {
	GPIO_InitTypeDef  GPIO_InitStructure;
	USART_InitTypeDef USART_InitStructure;
	// ---------- SysTick timer -------- //
	if (SysTick_Config(SystemCoreClock / 1000)) {
		// Capture error
		while (1){};
	}
        
        /* Configure the SysTick handler priority */
        NVIC_SetPriority(SysTick_IRQn, 0x0);            //NEW

	// Enable full access to FPU (Should be done automatically in system_stm32f4xx.c):
	//SCB->CPACR |= ((3UL << 10*2)|(3UL << 11*2));  // set CP10 and CP11 Full Access

	// GPIOD Periph clock enable
	RCC_AHB1PeriphClockCmd(RCC_AHB1Periph_GPIOD, ENABLE);

	// Configure PD12, PD13, PD14 and PD15 in output pushpull mode
	GPIO_InitStructure.GPIO_Pin = GPIO_Pin_12 | GPIO_Pin_13| GPIO_Pin_14| GPIO_Pin_15;
	GPIO_InitStructure.GPIO_Mode = GPIO_Mode_OUT;
	GPIO_InitStructure.GPIO_OType = GPIO_OType_PP;
	GPIO_InitStructure.GPIO_Speed = GPIO_Speed_100MHz;
	GPIO_InitStructure.GPIO_PuPd = GPIO_PuPd_NOPULL;
	GPIO_Init(GPIOD, &GPIO_InitStructure);


	// ------ UART ------ //

	// Clock
	RCC_APB1PeriphClockCmd(RCC_APB1Periph_USART2, ENABLE);
	RCC_AHB1PeriphClockCmd(RCC_AHB1Periph_GPIOA, ENABLE);

	// IO
	GPIO_InitStructure.GPIO_Pin = GPIO_Pin_5 | GPIO_Pin_6;
	GPIO_InitStructure.GPIO_Speed = GPIO_Speed_100MHz;
	GPIO_InitStructure.GPIO_Mode = GPIO_Mode_AF;
	GPIO_InitStructure.GPIO_OType = GPIO_OType_PP;
	GPIO_InitStructure.GPIO_PuPd = GPIO_PuPd_UP;
	GPIO_Init(GPIOD, &GPIO_InitStructure);

	GPIO_PinAFConfig(GPIOD, GPIO_PinSource5, GPIO_AF_USART1);
	GPIO_PinAFConfig(GPIOD, GPIO_PinSource6, GPIO_AF_USART1);

	// Conf
	USART_InitStructure.USART_BaudRate = 115200;
	USART_InitStructure.USART_WordLength = USART_WordLength_8b;
	USART_InitStructure.USART_StopBits = USART_StopBits_1;
	USART_InitStructure.USART_Parity = USART_Parity_No;
	USART_InitStructure.USART_HardwareFlowControl = USART_HardwareFlowControl_None;
	USART_InitStructure.USART_Mode = USART_Mode_Tx | USART_Mode_Rx;
	USART_Init(USART2, &USART_InitStructure);

	// Enable
	USART_Cmd(USART2, ENABLE);
}

/*
 * Called from systick handler
 */
void timing_handler() {
	if (time_var1) {
		time_var1--;
	}

	time_var2++;
}

/*
 * Delay a number of systick cycles
 */
void Delay(volatile uint32_t nCount) {
	time_var1 = nCount;

	while(time_var1){};
}

/*
 * Dummy function to avoid compiler error
 */
void _init() {

}
