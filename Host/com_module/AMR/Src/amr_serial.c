/*
 * amr_serial.c
 *
 *  Created on: May 9, 2020
 *      Author: serbay.ozkan
 */

/**
 * Platform Specific Includes
 */
#include <string.h>

/**
 * User Defined Header Files
 */
#include "amr_serial.h"
#include "app_assert.h"

/**
 * Typedef Structure and Enums
 */
amr_serial_t amr_serial;

char rx_data[16 * 1024];

/**
 * @brief Checks the serial receive operation is completed
 * @param is_rec_started
 * @param is_rec_timeout
 * @return
 */
bool amr_serial_is_receive_comp(bool is_rec_started, bool is_rec_timeout)
{
	bool is_receive_comp = false;

	if (is_rec_started && is_rec_timeout)
	{
		is_receive_comp = true;
	}

	return is_receive_comp;
}

/**
 * @brief Buffers serial receive data
 * @param ready_byte
 * @param buffer
 * @param idx
 */
void amr_serial_rec_data_byte_ready(const char ready_byte, char* buffer, uint32_t* idx)
{
	buffer[(*idx)++] = ready_byte;
}

/**
 * @brief Trace serial receive timeout
 * @note  This function should be called in 1ms timer
 * @param tick
 * @return
 */
bool amr_serial_is_timeout(uint32_t *tick)
{
	bool is_timeout = false;

	if ((*tick)++ >= AMR_SERIAL_REC_TIMEOUT)
	{
		is_timeout = true;
		*tick = 0;
	}

	return is_timeout;
}

void amr_serial_is_rx_data_ready(amr_serial_t *amr_serial)
{
	if (amr_serial_is_receive_comp(amr_serial->is_rec_started, amr_serial->is_rec_timeout))
	{
		APP_ASSERT_TRUE(amr_serial->rx_data_ready == NULL);
		amr_serial->rx_data_ready();
	}
}
