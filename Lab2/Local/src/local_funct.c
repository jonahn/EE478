#include "local_funct.h"
#include "../../src/utils.h"
#include "../../src/sram.h"
#include <i2c.h>
#include <usart.h>

extern char str[];
extern char errMax[];
extern char errMin[];
//extern char errVolt1[];
//extern char errVolt2[];
//extern char errVolt5[];

extern unsigned char strLength;
extern int i;

extern unsigned char numOut;
extern unsigned char sendVal;
extern unsigned char correctedVal;
extern unsigned char actualVal;
extern unsigned char bufferIndex, mode, PORTCtemp, SRAMDataBus, address;

extern void sendErrorMessageActualVoltage();
extern void sendErrorMessageMax();
extern void sendErrorMessageMin();
extern void correctedIncrement();
extern void correctedDecrement();
extern void increment();
extern void decrement();
extern void sendDataI2C();
extern void storeData();
extern void getData();

void sendErrorMessageActualVoltage()
{
/*       strLength = 34;
        i = 0;
        while(strLength > 0)
        {
            strLength--;
            // Write the next character to the UART, then increment
            delay(100);
            Write1USART(errVolt1[i]);
            delay(100);
            i++;
        }
        delay(100);
        */
}


void sendErrorMessageMax()
{
        strLength = 30;
        i = 0;
        while(strLength > 0)
        {
            strLength--;
            // Write the next character to the UART, then increment
            delay(100);
            Write1USART(errMax[i]);
            delay(100);
            i++;
        }
        delay(100);
}

void sendErrorMessageMin()
{
        strLength = 30;
        i = 0;
        while(strLength > 0)
        {
            strLength--;
            // Write the next character to the UART, then increment
            delay(100);
            Write1USART(errMin[i]);
            delay(100);
            i++;
        }
        delay(100);
}

void correctedIncrement()
{
    if(correctedVal < 255) //255?
    {
        correctedVal = correctedVal + 1;
    }

    sendVal = correctedVal;
    sendDataI2C();
}

void correctedDecrement()
{
    if(correctedVal > 0)
    {
        correctedVal = correctedVal - 1;
    }

    sendVal = correctedVal;
    sendDataI2C();
}

void increment()
{
    if(numOut >= 200)
    {
        sendErrorMessageMax();
    }
    else
    {
        numOut = numOut + 1;
        correctedVal = numOut;
    }

    sendVal = correctedVal;
    sendDataI2C();

        //*** end of send ***
    Write1USART('\r');   //send  new line
    Write1USART('\n');   //send  new line
    delay(100);
}

void decrement()
{
    if(numOut == 0)
    {
        sendErrorMessageMin();
        correctedVal = numOut;
    }
    else
    {
        numOut = numOut - 1;
    }

    sendVal = correctedVal;
    sendDataI2C();

        //*** end of send ***
    Write1USART('\r');   //send  new line
    Write1USART('\n');   //send  new line
    delay(100);
}

void sendDataI2C()
{
    //store in SRAM
    SRAMDataBus = sendVal;
    storeData();

    delay(50);

    // retrieve from SRAM
    getData();

    //***Send over I2C
    IdleI2C1();         //wait until bus is idle
    StartI2C1();        //send Start Condition

    IdleI2C1();
    WriteI2C1(0xA2);    //write address

    IdleI2C1();
    WriteI2C1(SRAMDataBus);  //write data

    IdleI2C1();
    StopI2C1();
}
/* NOT USED
void UARTSend(char *str, unsigned long strLength)
{
   // Loop while there are more characters to send
   while(strLength--)
   {
       // Write the next character to the UART, then increment
       Write1USART(*str++);
   }
}
 * */
