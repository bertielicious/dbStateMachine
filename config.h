/* 
 * File:   config.h
 * Author: User
 *
 * Created on 12 July 2022, 12:51
 */

#ifndef CONFIG_H
#define	CONFIG_H

// PIC10F200 Configuration Bit Settings

// 'C' source line config statements

// CONFIG
#pragma config WDTE = OFF       // Watchdog Timer (WDT disabled)
#pragma config CP = OFF         // Code Protect (Code protection off)
#pragma config MCLRE = OFF      // Master Clear Enable (GP3/MCLR pin fuction is digital I/O, MCLR internally tied to VDD)

// #pragma config statements should precede project file includes.
// Use project enums instead of #define for ON and OFF.

#include <xc.h>
#include <stdint.h>
#include <stdbool.h>
enum {PRESSED = 0, RELEASED};
enum {LO = 0, HI};
#define _XTAL_FREQ 4000000
#define YELLOW_LED GP0
#define BUTTON GP3

#endif	/* CONFIG_H */

