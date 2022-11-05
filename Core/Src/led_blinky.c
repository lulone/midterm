/*
 * led_blinky.c
 *
 *  Created on: Nov 5, 2022
 *      Author: HUY
 */
#include "led_blinky.h"

void led_blinky(){
	if (timer2_flag == 1){
		HAL_GPIO_TogglePin(LED_RED_GPIO_Port, LED_RED_Pin);
		setTimer2(100);
	}
}

