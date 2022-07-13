/*
 * File:   main.c
 * Author: Phil Glazzard
 *
 * Created on 12 July 2022, 12:47
 */


#include <xc.h>
#include "config.h"
#include "configOsc.h"
#include "configPorts.h"
#include "main.h"
#include "debounceSM.h"

void main(void) {
    uint8_t state = 1;
    configOsc();
    configPorts();
    TMR0 = 0x00;
 while(1)
 {
     while(TMR0 <=255)
     {
         state = debounceSM(state);
     }
     TMR0 = 0x00;
   
   /* while(TMR0 <=125)
     {
         GP0 = 1;
     }
     while(TMR0 >=125)
     {
         GP0 = 0;   
     }
     TMR0 = 0x00;*/
 }
    
    return;
}
