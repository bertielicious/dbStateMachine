#include "config.h"
uint8_t debounceSM(uint8_t state)
{
    
    switch (state)
    {
        case 1:
            if(BUTTON == RELEASED)
            {
                state = 1;
                YELLOW_LED = LO;
            }
            else if (BUTTON == PRESSED)
            {
                state = 2;
            }
            break;
            
        case 2:
            if(BUTTON == PRESSED)
            {
                state = 3;
            }
            else if (BUTTON == RELEASED)
            {
                state = 1;
            }
            break;
            
        case 3:
            if(BUTTON == PRESSED)
            {
                state = 3;
                YELLOW_LED = HI;
            }
            else if (BUTTON == RELEASED)
            {
                state = 4;
            }
            break;
            
        case 4:
            if(BUTTON == PRESSED)
            {
                state = 3;
            }
            else if (BUTTON == RELEASED)
            {
                state = 1;
                
            }
            break;
    }
    return state;
}
