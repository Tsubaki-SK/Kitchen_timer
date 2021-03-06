/*
 * Display.h
 *
 * Created: 2021/02/25 6:24:18
 *  Author: Kazu-SK
 */ 


#ifndef DISPLAY_H_
#define DISPLAY_H_


#include "Define.h"


#define F_CPU 8000000UL



#include <avr/io.h>
#include <util/delay.h>
#include <avr/interrupt.h>


void DynamicDrive(uint8_t disp[]);
void DisplaySegment(uint8_t num);
void DisplayFlick();

#endif /* DISPLAY_H_ */