//
//  Lab2_Slave.h
//  
//
//  Created by Jake Yang on 4/23/14.
//
//

#ifndef _i2c_slave_h
#define _i2c_slave_h

#define NOT_RECIEVED 0
#define RECIEVED 1


// Function prototypes for the high priority ISRs
void highPriorityISR(void);
void setupInterrupts(void);


#endif
