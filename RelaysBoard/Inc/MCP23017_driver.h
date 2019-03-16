/*
 * MCP23017_driver.h
 *
 *  Created on: Mar 16, 2019
 *      Author: ScorpionIPX
 */

#ifndef MCP23017_DRIVER_H_
#define MCP23017_DRIVER_H_

#include "stm32f4xx_hal.h"


void mcp23017_write_register(uint8_t mcp_register, uint8_t value);

#endif /* MCP23017_DRIVER_H_ */
