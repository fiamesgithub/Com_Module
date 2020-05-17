/*
 * amr_serial_port.h
 *
 *  Created on: 17 May 2020
 *      Author: serbay
 */

#ifndef INC_AMR_SERIAL_PORT_H_
#define INC_AMR_SERIAL_PORT_H_

#include "stm32f4xx.h"
#include "usart.h"

// UART/USART Port Number
#define HUART_AMR_PORT USART1

UART_HandleTypeDef huart_amr;

void amr_serial_init(void);

#endif /* INC_AMR_SERIAL_PORT_H_ */
