/*
 * 7SEG_display.c
 *
 *  Created on: Nov 5, 2022
 *      Author: HUY
 */
#include "7SEG_display.h"

void display7SEG(int num){
	switch(num){
		case 0:{
			HAL_GPIO_WritePin (SEG0_GPIO_Port, SEG0_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin (SEG1_GPIO_Port, SEG1_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin (SEG2_GPIO_Port, SEG2_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin (SEG3_GPIO_Port, SEG3_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin (SEG4_GPIO_Port, SEG4_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin (SEG5_GPIO_Port, SEG5_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin (SEG6_GPIO_Port, SEG6_Pin, GPIO_PIN_SET);
			break;
		}
		case 1:{
			HAL_GPIO_WritePin (SEG0_GPIO_Port, SEG0_Pin, GPIO_PIN_SET);
			HAL_GPIO_WritePin (SEG1_GPIO_Port, SEG1_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin (SEG2_GPIO_Port, SEG2_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin (SEG3_GPIO_Port, SEG3_Pin, GPIO_PIN_SET);
			HAL_GPIO_WritePin (SEG4_GPIO_Port, SEG4_Pin, GPIO_PIN_SET);
			HAL_GPIO_WritePin (SEG5_GPIO_Port, SEG5_Pin, GPIO_PIN_SET);
			HAL_GPIO_WritePin (SEG6_GPIO_Port, SEG6_Pin, GPIO_PIN_SET);
			break;
		}
		case 2:{
			HAL_GPIO_WritePin (SEG0_GPIO_Port, SEG0_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin (SEG1_GPIO_Port, SEG1_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin (SEG2_GPIO_Port, SEG2_Pin, GPIO_PIN_SET);
			HAL_GPIO_WritePin (SEG3_GPIO_Port, SEG3_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin (SEG4_GPIO_Port, SEG4_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin (SEG5_GPIO_Port, SEG5_Pin, GPIO_PIN_SET);
			HAL_GPIO_WritePin (SEG6_GPIO_Port, SEG6_Pin, GPIO_PIN_RESET);
			break;
		}
		case 3:{
			HAL_GPIO_WritePin (SEG0_GPIO_Port, SEG0_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin (SEG1_GPIO_Port, SEG1_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin (SEG2_GPIO_Port, SEG2_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin (SEG3_GPIO_Port, SEG3_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin (SEG4_GPIO_Port, SEG4_Pin, GPIO_PIN_SET);
			HAL_GPIO_WritePin (SEG5_GPIO_Port, SEG5_Pin, GPIO_PIN_SET);
			HAL_GPIO_WritePin (SEG6_GPIO_Port, SEG6_Pin, GPIO_PIN_RESET);
			break;
		}
		case 4:{
			HAL_GPIO_WritePin (SEG0_GPIO_Port, SEG0_Pin, GPIO_PIN_SET);
			HAL_GPIO_WritePin (SEG1_GPIO_Port, SEG1_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin (SEG2_GPIO_Port, SEG2_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin (SEG3_GPIO_Port, SEG3_Pin, GPIO_PIN_SET);
			HAL_GPIO_WritePin (SEG4_GPIO_Port, SEG4_Pin, GPIO_PIN_SET);
			HAL_GPIO_WritePin (SEG5_GPIO_Port, SEG5_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin (SEG6_GPIO_Port, SEG6_Pin, GPIO_PIN_RESET);
			break;
		}
		case 5:{
			HAL_GPIO_WritePin (SEG0_GPIO_Port, SEG0_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin (SEG1_GPIO_Port, SEG1_Pin, GPIO_PIN_SET);
			HAL_GPIO_WritePin (SEG2_GPIO_Port, SEG2_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin (SEG3_GPIO_Port, SEG3_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin (SEG4_GPIO_Port, SEG4_Pin, GPIO_PIN_SET);
			HAL_GPIO_WritePin (SEG5_GPIO_Port, SEG5_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin (SEG6_GPIO_Port, SEG6_Pin, GPIO_PIN_RESET);
			break;
		}
		case 6:{
			HAL_GPIO_WritePin (SEG0_GPIO_Port, SEG0_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin (SEG1_GPIO_Port, SEG1_Pin, GPIO_PIN_SET);
			HAL_GPIO_WritePin (SEG2_GPIO_Port, SEG2_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin (SEG3_GPIO_Port, SEG3_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin (SEG4_GPIO_Port, SEG4_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin (SEG5_GPIO_Port, SEG5_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin (SEG6_GPIO_Port, SEG6_Pin, GPIO_PIN_RESET);
			break;
		}
		case 7:{
			HAL_GPIO_WritePin (SEG0_GPIO_Port, SEG0_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin (SEG1_GPIO_Port, SEG1_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin (SEG2_GPIO_Port, SEG2_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin (SEG3_GPIO_Port, SEG3_Pin, GPIO_PIN_SET);
			HAL_GPIO_WritePin (SEG4_GPIO_Port, SEG4_Pin, GPIO_PIN_SET);
			HAL_GPIO_WritePin (SEG5_GPIO_Port, SEG5_Pin, GPIO_PIN_SET);
			HAL_GPIO_WritePin (SEG6_GPIO_Port, SEG6_Pin, GPIO_PIN_SET);
			break;
		}
		case 8:{
			HAL_GPIO_WritePin (SEG0_GPIO_Port, SEG0_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin (SEG1_GPIO_Port, SEG1_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin (SEG2_GPIO_Port, SEG2_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin (SEG3_GPIO_Port, SEG3_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin (SEG4_GPIO_Port, SEG4_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin (SEG5_GPIO_Port, SEG5_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin (SEG6_GPIO_Port, SEG6_Pin, GPIO_PIN_RESET);
			break;
		}
		case 9:{
			HAL_GPIO_WritePin (SEG0_GPIO_Port, SEG0_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin (SEG1_GPIO_Port, SEG1_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin (SEG2_GPIO_Port, SEG2_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin (SEG3_GPIO_Port, SEG3_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin (SEG4_GPIO_Port, SEG4_Pin, GPIO_PIN_SET);
			HAL_GPIO_WritePin (SEG5_GPIO_Port, SEG5_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin (SEG6_GPIO_Port, SEG6_Pin, GPIO_PIN_RESET);
			break;
		}
		default:
			break;
	}
}
