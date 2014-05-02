#include "warnings.h"
#include <usart.h>
#include "../../src/utils.h"

extern char minCycle,majorCycle;
extern unsigned char clearScreen, actualVal, numOut;

extern char str[];
unsigned char screenUpdated;

void writeActualValue();
extern void writeActualValue();
void writeDesiredValue();
extern void writeDesiredValue();

void errorHandling();
extern void errorHandling();

void displayWarnings()
{
    char stat[] = "             --STATS--";
    char desired[] = "Desired motor voltage: ";
    char actual[] = "Actual motor voltage:  ";
    char newLine[] = "\r\n";

    if(clearScreen == CLEAR_SCREEN)
    {
        if(screenUpdated == ALREADY_UPDATED)
        {
            return;
        }
        
        screenUpdated = ALREADY_UPDATED;
        Write1USART(0x0c);   // clear hyperterminal
        delay(50);
        puts1USART(stat);
        puts1USART(newLine);

        //output desired
        puts1USART(desired);
        delay(10);
        writeDesiredValue();
        Write1USART('%');
        delay(10);
        puts1USART(newLine);

        //output actual
        puts1USART(actual);
        delay(10);
        writeActualValue();
        Write1USART('%');
        delay(10);
        puts1USART(newLine);
        puts1USART(newLine);

        puts1USART(str);

        errorHandling();
    }
}

void errorHandling()
{
    char level[] = "Level ";
    char colon[] = ": ";
    char errVolt1[] = "Voltage +/- 1.0% out of range. \r\n\0";
    char errVolt2[] = "Voltage +/- 2.0% out of range. \r\n\0";
    char errVolt5[] = "Voltage +/- 5.0% out of range. \r\n\0";

    unsigned char outOffRange = 0x0;

    if(actualVal > (numOut + 2) || actualVal < (numOut - 2))
    {
        if(numOut >= 2)
        {
            outOffRange = 1;
        }
    }

    if(actualVal > (numOut + 4) || actualVal < (numOut - 4))
    {
        if(numOut >= 4)
        {
            outOffRange = 2;
        }
    }

    if(actualVal > (numOut + 10) || actualVal < (numOut - 10))
    {
        if(numOut >= 10)
        {
            outOffRange = 5;
        }
    }

    switch(outOffRange)
    {
        case 5:
            puts1USART(level);
            Write1USART('0');
            puts1USART(colon);
            puts1USART(errVolt5);
            majorCycle = 0;
            break;
        case 2:
            puts1USART(level);
            Write1USART('1');
            puts1USART(colon);
            puts1USART(errVolt2);
            majorCycle = 0;
            break;
        case 1:
            puts1USART(level);
            Write1USART('2');
            puts1USART(colon);
            puts1USART(errVolt1);
            majorCycle = 0;
            break;
        default:
            break;
    }

}

//dont change any math in this method
//even though it looks retarted the purpose is to
//calculate each digit properly to output a decimal number
void writeActualValue()
{
    unsigned char temp1, temp2;
    temp1 = (unsigned char) (actualVal/200);
    Write1USART(temp1 + '0');
    delay(50);
    temp2 = (unsigned char) ((actualVal/20) - temp1*20);
    Write1USART(temp2 + '0');
    delay(50);
    temp1 = (unsigned char) (actualVal - temp1*200 - temp2*20);
    Write1USART(temp1/2 + '0');
    temp1 = (unsigned char) (temp1*10)/2;
    temp2 = (unsigned char) temp1 - (temp1/10)*10;
    delay(50);
    Write1USART('.');
    delay(50);
    Write1USART(temp2 + '0');
    delay(50);
}

//dont change any math in this method
//even though it looks retarted the purpose is to
//calculate each digit properly to output a decimal number
void writeDesiredValue()
{
    unsigned char temp1, temp2;
    temp1 = (unsigned char) numOut/200;
    Write1USART(temp1 + '0');
    delay(50);
    temp2 = (unsigned char) (numOut - temp1*200) / 20;
    Write1USART(temp2 + '0');
    delay(50);
    temp1 = numOut - temp1*200 - temp2*20;
    Write1USART(temp1/2 + '0');
    temp1 = (unsigned char) (temp1*10)/2;
    temp2 = (unsigned char) temp1 - (temp1/10)*10;
    delay(50);
    Write1USART('.');
    delay(50);
    Write1USART(temp2 + '0');
    delay(50);
}