/* 
 * File:   sram.h
 * Author: Ahmed Jafri, Anna Horstmann, Jake Yang
 *
 * Created on April 21, 2014, 5:50 PM
 */

#ifndef __SRAM_H
#define	__SRAM_H

/*
 * Using the CY7C128A SRAM. Organized as 2K x 8 bits: 2K addresses (2^11) accessing 8 bits of data
 * 
 */

// Address is 8 bits -> 256 total addresses.
// Data is 8 bits.
// will overwrite the address written to 256 times ago.
unsigned char storeData(unsigned char inData);

// get the data at the address given.
void getData(unsigned char inAddress);

// Clear all data. Set all addresses from 0-255 to 0x0.
void clearSRAM();

#endif	/* __SRAM_H */

