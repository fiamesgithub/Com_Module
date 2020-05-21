/*
 * amr_serial.c
 *
 *  Created on: May 9, 2020
 *      Author: serbay.ozkan
 */

/**
 * Standart Library Includes
 */
#include <string.h>

/**
 * User Defined Includes
 */
#include "amr_serial.h"
#include "app_assert.h"

/**
 * Typedef Structure and Enums
 */
amr_serial_t amr_serial;

static amr_serial_t *amr_serial_get_structure(void)
{
	return &amr_serial;
}

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

/**
 * @brief Triggers callback function when the data is ready to process data
 * @param amr_serial
 */
void amr_serial_is_rx_data_ready(amr_serial_t *amr_serial)
{
	if (amr_serial_is_receive_comp(amr_serial->is_rec_started, amr_serial->is_rec_timeout))
	{
		APP_ASSERT(amr_serial->rx_data_ready != NULL);
		amr_serial->rx_data_ready();
	}
}

/**
 * @brief Data Consumer should be pointed as function pointer
 * @param rx_data_ready_cb
 */
void amr_serial_rx_init(vptr rx_data_ready_cb)
{
	amr_serial_get_structure()->rx_data_ready = rx_data_ready_cb;
}
