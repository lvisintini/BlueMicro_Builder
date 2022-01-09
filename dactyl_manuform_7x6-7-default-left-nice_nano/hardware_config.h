/*
Copyright 2020-2021 <Pierre Constantineau>

3-Clause BSD License

Redistribution and use in source and binary forms, with or without modification, are permitted provided that the following conditions are met:

1. Redistributions of source code must retain the above copyright notice, this list of conditions and the following disclaimer.

2. Redistributions in binary form must reproduce the above copyright notice, this list of conditions and the following disclaimer in the documentation and/or other materials provided with the distribution.

3. Neither the name of the copyright holder nor the names of its contributors may be used to endorse or promote products derived from this software without specific prior written permission.

THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR 
A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT 
LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT 
(INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.

*/
#ifndef HARDWARE_CONFIG_H
#define HARDWARE_CONFIG_H
#include "hardware_variants.h"

/* HARDWARE DEFINITION*/
/* key matrix size */
#define MATRIX_ROWS 7
#define MATRIX_COLS 7


/* Pin labels */
#define P0_31      31
#define P0_29      29
#define P0_02      2
#define P1_15      47 //1.15  = 32+15
#define P1_13      45 //1.13  = 32+13
#define P1_11      43 //1.11  = 32+11
#define P0_10      10
#define P0_09      9

#define P0_06      6
#define P0_08      8
#define P0_17      17
#define P0_20      20
#define P0_22      22
#define P0_24      24
#define P1_00      32 //1.00  = 32+0
#define P0_11      11
#define P1_04      36 //1.04  = 32+4
#define P1_06      38 //1.06  = 32+6
 


#define MATRIX_ROW_PINS {P1_06, P1_04, P0_11, P1_00, P0_24, P0_22, P0_20}
#define MATRIX_COL_PINS {P0_09, P0_10, P1_11, P1_13, P1_15, P0_02, P0_29}
#define UNUSED_PINS {}

/* COL2ROW or ROW2COL */
#define DIODE_DIRECTION COL2ROW

#define BACKLIGHT_PWM_ON 0
#define WS2812B_LED_PIN P0_17

#define WS2812B_LED_ON 0 // LEDs are disabled by default
 
#define ARDUINO_NICE_NANO 1 // used in debug_cli.cpp to bypass 0.14 and 0.16 that are directly connected to 0.18 (reset)
 
#define BATTERY_TYPE BATT_LIPO
#define VBAT_PIN  4
#define VCC_PIN 13
#define VCC_POLARITY_ON 0
#define  STATUS_BLE_LED_PIN  15  //blue = 0.15
//#define  STATUS_KB_LED_PIN 0  //no RED LED
 
    
#endif /* HARDWARE_CONFIG_H */