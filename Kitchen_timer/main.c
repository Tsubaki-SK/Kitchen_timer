/*
 * Kitchen_timer.c
 *
 * Created: 2021/02/20 20:41:41
 * Author : Kazu-SK
 */ 


#include "SetTimer.h"
#include "Display.h"
#include "Count.h"


int main(void)
{
	/* Replace with your application code */
	uint8_t display_num[4] = {0,0,0,0};
		

	DDRB = 0b00000001;	
	DDRC = 0b00101111;	
	DDRD = 0b11111111;
	

	TCCR1A = 0b00000000;
	TCCR1B = CTC_OPERATION;
	
	TIMSK1 = A_INTERRUPT_ENABLE;
	
	OCR1A = A_INTERRUPT_TIME;
	OCR1B = B_INTERRUPT_TIME;
	
	cli();

	for(;;)
	{
		if(PINB & (1 << PINB2)){
			TCCR1B = STANDARD_OPERATION;
			SetMinutes(display_num);
			TCCR1B = CTC_OPERATION;
		}
		
		if(PINB & (1 << PINB3)){
			SetSeconds(display_num);
		}
		
		if(PINB & (1 << PINB4)){
			CountDown(display_num);
		}
		
		DynamicDrive(display_num);
	}
}
