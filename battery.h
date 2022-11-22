#ifndef BATTERY_H_
#define BATTERY_H_

//Includes
//=============================================================================================================================
#include "stm32f4xx_hal.h"
//=============================================================================================================================

//@brief							draw battery icon 
//										!!In the function you have to choose the design:

//										1)greenbattery() - The charge display area is a green area 
//										that decreases in length depending on the percent of battery charge.

//										2)gradientbattery() - The charge display area is a gradient area(0-50%-100% : Red-Yellow-Green)
//										that decreases in length depending on the percentage of battery charge.

//										3)fsgrnyllwrdbattery() - The charge display area includes four segments:
//										100% - 75% : 4 green segments
//										75% - 50%  : 3 bright-green segments
//										50% - 25%  : 2 yellow segments
//										25% - 0%   : 1 red segments

//@param x0						coordinate x0 of start point
//@param y0						coordinate y0 of start point
void plot_batt(int16_t x0, int16_t y0);


//@brief 							Print the battery percent. 
//										Default the width and height size of the "pixel" is 1.
//@param color				Ñolor of the symbol
//@param x0						coordinate x 
//@param y0						coordinate y
void print_prcntbatt(int16_t x0, int16_t y0, uint16_t color);

#endif // #ifndef BATTERY