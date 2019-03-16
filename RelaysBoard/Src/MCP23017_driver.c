/*
 * MCP23017_driver.c
 *
 *  Created on: Mar 16, 2019
 *      Author: ScorpionIPX
 */

#include "MCP23017_driver.h"

SPI_HandleTypeDef hspi2;

void mcp23017_write_register(uint8_t mcp_register, uint8_t value)
{
	uint8_t reg = mcp_register;
	uint8_t val = value;

	HAL_SPI_Transmit(&hspi2, &reg, 1, 10);
	HAL_SPI_Transmit(&hspi2, &val, 1, 10);
}
