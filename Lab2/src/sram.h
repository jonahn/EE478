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
 * REQUIRED GLOBAL VARIABLES: SRAMDataBus, commandBuffer, address.
 */

// stores the data in variable: SRAMDataBus to variable address.
unsigned char storeData();

// get the data at the variable:address.
void getData();

// Clear all data. Set all addresses from 0-255 to 0x0.
void clearSRAM();

#endif	/* __SRAM_H */

