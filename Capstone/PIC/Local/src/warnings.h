/* 
 * File:   warnings.h
 * Author: ajafri19
 *
 * Created on May 1, 2014, 9:29 PM
 */

#ifndef WARNINGS_H
#define	WARNINGS_H

#define CLEAR_SCREEN            0x01
#define DONT_CLEAR_SCREEN       0x02

#define ALREADY_UPDATED         0x01
#define NOT_UPDATED             0x02

#ifdef	__cplusplus
extern "C" {
#endif

void displayWarnings();

#ifdef	__cplusplus
}
#endif

#endif	/* WARNINGS_H */

