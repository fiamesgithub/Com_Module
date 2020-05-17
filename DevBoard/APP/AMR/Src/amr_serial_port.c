/*
 * amr_serial_port.c
 *
 *  Created on: 17 May 2020
 *      Author: serbay
 */

#include "usart.h"
#include "amr_serial.h"
#include "amr_serial_port.h"

/**
 *
 * @param data
 * @param size
 * @return
 */
bool amr_serial_transmit_data(const char* data, uint32_t size)
{
	bool op_success = true;

	if (HAL_UART_Transmit(&huart_amr, (uint8_t*)data, size, 100) != HAL_OK)
	{
		op_success = false;
	}

	return op_success;
}

/**
 *
 * @param data
 */
void amr_serial_receive_data(char *data)
{

}

static void amr_serial_uart_init(uint32_t baudrate)
{
	huart_amr.Instance = HUART_AMR_PORT;
	huart_amr.Init.BaudRate = baudrate;
	huart_amr.Init.WordLength = UART_WORDLENGTH_8B;
	huart_amr.Init.StopBits = UART_STOPBITS_1;
	huart_amr.Init.Parity = UART_PARITY_EVEN;
	huart_amr.Init.Mode = UART_MODE_TX_RX;
	huart_amr.Init.HwFlowCtl = UART_HWCONTROL_NONE;
	huart_amr.Init.OverSampling = UART_OVERSAMPLING_16;

	if (HAL_UART_Init(&huart_amr) != HAL_OK)
	{
		Error_Handler();
	}
}

/**
 *
 */
void amr_serial_init(void)
{
	amr_transmit_data = amr_serial_transmit_data;
	amr_receive_data = amr_serial_receive_data;
}

