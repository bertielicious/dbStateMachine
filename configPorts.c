#include "config.h"
void configPorts(void)
{
    TRISGPIO = 0b00001110;  // GP3 switch input
                            // GP2 input
                            // GP1 input
                            // GP0 LED output
}
