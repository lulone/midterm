/*
 * fsm_process.c
 *
 *  Created on: Nov 5, 2022
 *      Author: HUY
 */

#include "fsm_process.h"

int value = 0;
int autoDEC = 1000;

void fsm_simple_button_run(){
	switch(status){
		case INIT:
			value = 0;
			display7SEG(value);

			if (isButtonPressed(1)){
				value++;
				if (value > 9)
					value = 0;
				display7SEG(value);
				status = INC;
				setTimer1(autoDEC);
			}
			else if (isButtonPressed(2)){
				value--;
				if (value < 0)
					value = 9;
				display7SEG(value);
				status = DEC;
				setTimer1(autoDEC);
			}
			break;
		case INC:
			if (isButtonPressed(1)){
				value++;
				if (value > 9)
					value = 0;
				display7SEG(value);
				setTimer1(autoDEC);
			}
			else if(isButtonPressed(2)){
				value--;
				if (value < 0)
					value = 9;
				display7SEG(value);
				status = DEC;
				setTimer1(autoDEC);
			}
			else if(isButtonPressed(0)){
				value = 0;
				display7SEG(value);
				status = INIT;
				clearTimer1();
			}

			if(timer1_flag == 1){
				value--;
				if (value == 0){
					status = INIT;
					display7SEG(value);
					clearTimer1();
				}
				else{
					display7SEG(value);
					status = AUTO_DEC;
					setTimer1(100);
				}
			}
			break;
		case DEC:
			if (isButtonPressed(2)){
				value--;
				if (value < 0)
					value = 9;
				display7SEG(value);
				setTimer1(autoDEC);
			}
			else if (isButtonPressed(1)){
				value++;
				if (value > 9)
					value = 0;
				display7SEG(value);
				status = INC;
				setTimer1(autoDEC);
			}
			else if(isButtonPressed(0)){
				value = 0;
				display7SEG(value);
				status = INIT;
				clearTimer1();
			}

			if(timer1_flag == 1){
				value--;
				if (value == 0){
					status = INIT;
					display7SEG(value);
					clearTimer1();
				}
				else{
					display7SEG(value);
					status = AUTO_DEC;
					setTimer1(100);
				}
			}
			break;
		case AUTO_DEC:
			if (timer1_flag == 1){
				value--;
				display7SEG(value);
				setTimer1(100);
			}
			if (value == 0){
				status = INIT;
			}
			if (isButtonPressed(0)){
				value = 0;
				display7SEG(value);
				status = INIT;
				clearTimer1();
			}
			else if (isButtonPressed(1)){
				value++;
				if (value > 9)
					value = 0;
				display7SEG(value);
				status = INC;
				setTimer1(autoDEC);
			}
			else if (isButtonPressed(2)){
				value--;
				if (value < 0)
					value = 9;
				display7SEG(value);
				status = DEC;
				setTimer1(autoDEC);
			}
			break;
		default:
			break;
	}
}
