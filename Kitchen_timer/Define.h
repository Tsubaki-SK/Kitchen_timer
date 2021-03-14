/*
 * Define.h
 *
 * Created: 2021/03/11 7:08:43
 *  Author: Kazu-SK
 */ 


#ifndef DEFINE_H_
#define DEFINE_H_



/* Display */

//DIGIT
enum DIGIT{
	SECONDS_DIG1,
	SECONDS_DIG2,
	MINUTE_DIG1,
	MINUTE_DIG2
};


//7segmentLED DIG
#define DISPLAY_DIG4 0b00001110
#define DISPLAY_DIG3 0b00001101
#define DISPLAY_DIG2 0b00001011
#define DISPLAY_DIG1 0b00000111

//7segmentLED Display number ( 0 ~ 9 )
enum DISPLAY_NUM{
	DISPLAY_NUM0,
	DISPLAY_NUM1,
	DISPLAY_NUM2,
	DISPLAY_NUM3,
	DISPLAY_NUM4,
	DISPLAY_NUM5,
	DISPLAY_NUM6,
	DISPLAY_NUM7,
	DISPLAY_NUM8,
	DISPLAY_NUM9
};

#define SEGMENT_NUM0 0xC0
#define SEGMENT_NUM1 0xF9
#define SEGMENT_NUM2 0xA4
#define SEGMENT_NUM3 0xB0
#define SEGMENT_NUM4 0x99
#define SEGMENT_NUM5 0x92
#define SEGMENT_NUM6 0x82
#define SEGMENT_NUM7 0xD8
#define SEGMENT_NUM8 0x80
#define SEGMENT_NUM9 0x90

//7segmentLED Display Other processing 
#define SEGMENT_ERROR 0x06

#define ALL_LIGHT 0x00
#define OFF	0xFF

//7segmentLED Lighting time for each DIG
#define LIGHT_TIME 1


/* switch */
#define SECONDS_SWITCH 0x08
#define MINUTE_SWITCH 0x04 
#define START_SWITCH 0x10

/* LONG_PLESS */
#define F 8000000
#define M_CYCLE 256
#define LONG_PLESS_TIME 1
#define LONG_PLESS_COUNTER 0.1

/* reset */
enum RESET{
	RESET_OFF,
	RESET_ON	
};








#endif /* DEFINE_H_ */