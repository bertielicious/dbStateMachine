#include "config.h"
void configOsc(void)
{
    OPTION = 0x86;
                    // GPWU = 1 wake up on pin change disabled
                    // GPPU = 0 weak pullups enabled
                    // TOCS = 0
                    // TOSE = 0
                    // PSA = 0;
                    // PS2= 1   // 32.64ms                    
                    // PS1 = 1
                    // PS0 = 0
}
