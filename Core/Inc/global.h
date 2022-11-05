/*
 * global.h
 *
 *  Created on: Nov 5, 2022
 *      Author: HUY
 */

#ifndef INC_GLOBAL_H_
#define INC_GLOBAL_H_

#include "main.h"
#include "software_timer.h"
#include "button.h"
#include "7SEG_display.h"

#define INIT		0
#define INC 		1
#define LONG_INC	2
#define DEC			3
#define LONG_DEC	4
#define AUTO_DEC	5

extern int status;

#endif /* INC_GLOBAL_H_ */
