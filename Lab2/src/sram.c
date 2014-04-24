/* 
 * File:   sram.c
 * Author: Ahmed Jafri, Anna Horstmann, Jake Yang
 *
 * Created on April 21, 2014, 5:50 PM
 */

#define NUMBER_OF_ADDRESSES 256

unsigned char currentAddress = 0x0;

unsigned char storeData(unsigned char inData)
{
    
}

// get the data at the address given.
void getData(unsigned char inAddress)
{
    
}

// Clear all data. Set all addresses from 0-255 to 0x0.
void clearSRAM()
{
    unsigned int k;
    
    for(k = 0; k < NUMBER_OF_ADDRESSES; k++)
    {
        storeData(0x0);
    }
}
