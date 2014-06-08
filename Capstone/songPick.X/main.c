/* 
 * File:   main.c
 * Author: tsunghan
 *
 * Created on June 2, 2014, 9:26 PM
 */

#include <p18f452.h>
#include <delays.h>
/*
 * 
 */

char songNumber;
char sendIndex;

void setupInterrupts(void);
void highPriorityISR(void);

int i;
int j;

// This is the code for at the high priority vector
#pragma code high_vector = 0x08
void high_vector(void)
{
    _asm goto highPriorityISR _endasm
}
#pragma code

char needToSendPlaylistNumber = 0;

// Delay1KCTYx()
// The actual high priority ISR
#pragma interrupt highPriorityISR
void highPriorityISR() {

    if (INTCONbits.INT0IF == 1)
    {
        needToSendPlaylistNumber = 1;
    }

    INTCONbits.INT0IF = 0; // Clear the interrupt flag
    return;
}

int main(int argc, char** argv)
{
    TRISBbits.RB0 = 1; //input frp, Rpi
    TRISBbits.RB1 = 0; //output clk to Rpi
    TRISBbits.RB2 = 0; //output data to Rpi
    TRISBbits.RB3 = 0; //output clk to mux

    setupInterrupts();
    TRISD = 0xFF; // Set all Port D to input


    //Reset counter at the beginning of the program

    /*
    //Reset LFSR at the beginning of the program
    PORTCbits.RC2 = 0; //set all 0
    PORTBbits.RB4 = 0;

    PORTBbits.RB4 = 1; //output reset to LFSR
    Delay1KTCYx(1);
    PORTBbits.RB4 = 1; //clk the LFSR

    PORTCbits.RC2 = 0; //clk the LFSR
    PORTBbits.RB4 = 0; //output reset to LFSR
    Delay1KTCYx(1);
    PORTCbits.RC2 = 1; //clk the LFSR
    
    PORTCbits.RC2 = 0; //clk the LFSR*/

    while (1)
    {
        if(needToSendPlaylistNumber == 1)
        {
            needToSendPlaylistNumber = 0;

            PORTBbits.RB3 = 0;
            PORTBbits.RB3 = 1;
            PORTBbits.RB3 = 0;

            songNumber = 0;

            songNumber |= PORTDbits.RD7;
            songNumber = songNumber << 1;

            songNumber |= PORTDbits.RD6;
            songNumber = songNumber << 1;

            songNumber |= PORTDbits.RD5;
            songNumber = songNumber << 1;

            songNumber |= PORTDbits.RD4;
            songNumber = songNumber << 1;

            songNumber |= PORTDbits.RD3;
            songNumber = songNumber << 1;

            songNumber |= PORTDbits.RD2;
            songNumber = songNumber << 1;

            songNumber |= PORTDbits.RD1;
            songNumber = songNumber << 1;

            songNumber |= PORTDbits.RD0;

            Delay1KTCYx(10);

            for (i=0; i<8; i++)
            {
                PORTBbits.RB2 = (songNumber & 1);
                songNumber = songNumber >> 1;

                Delay1KTCYx(10);

                PORTBbits.RB1 = 1;
                Delay1KTCYx(10);
                PORTBbits.RB1 = 0;
                Delay1KTCYx(10);
            }

        }
    }
    return (0);
}

void setupInterrupts(void)
{

   RCONbits.IPEN = 1;       // Enable priority interrupts
   INTCONbits.GIEL = 1;     // Enable global interrupts
   INTCONbits.GIEH = 1;     // Enable global interrupts
   INTCONbits.PEIE = 1;     // peripheral interrupts

   INTCONbits.INT0IE = 1;   // Enable Int0/RB0 interrupts
}

