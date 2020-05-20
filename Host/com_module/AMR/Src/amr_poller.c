/*
 * amr_poller.c
 *
 *  Created on: May 9, 2020
 *      Author: serbay.ozkan
 */

#include <stddef.h>
#include <stdio.h>
#include <string.h>
#include <assert.h>

#include "amr_poller.h"
#include "amr_serial.h"
#include "amr_timer.h"

amr_poller_t amr_poller;
amr_poller_state_t amr_poller_state;

/**
 *
 * @return
 */
static amr_poller_t* amr_get_poller_struct(void)
{
	return &amr_poller;
}

/**
 *
 * @param serial_number
 * @param start_message
 * @param meter_type
 */
void amr_create_start_message(uint32_t serial_number, char* start_message, char meter_type)
{
	const uint8_t MAX_LEN = 20;

	if (start_message != NULL)
	{
		if (meter_type == 'M')
		{
			snprintf(start_message, MAX_LEN, "/?MSY%d!\r\n", serial_number);
		}

		else
		{
			snprintf(start_message, MAX_LEN, "/?%d!\r\n", serial_number);
		}
	}
}

/**
 *
 * @param readout_message
 */
void amr_create_readout_message(char* readout_message)
{
	char readout_message_actual[4] = {0x06, 0x30, 0x35, 0x30};

	if (readout_message != NULL)
	{
		for (int idx = 0; idx < sizeof(readout_message_actual); idx++)
		{
			readout_message[idx] = readout_message_actual[idx];
		}
	}
}

/**
 *
 * @param meter_id
 */
void amr_update_selected_meter(uint8_t meter_id)
{
	amr_get_poller_struct()->selected_meter = meter_id;
}

amr_poller_state_t amr_get_poller_state(void)
{
	return amr_poller_state;
}

/**
 * Periodic Poller Task
 */
void amr_poller_task(void)
{
	static uint8_t meter_id = 0;
	static const uint8_t READ_OUT_LEN = 4;

	char data[20] = {};

	switch (amr_poller_state) {
		case START:
			assert(amr_serial.init(300));
			amr_update_selected_meter(meter_id);
			amr_create_start_message(amr_get_poller_struct()->serial_no[meter_id],
									data,
									amr_get_poller_struct()->model[meter_id]);

			amr_serial.transmit(data, strlen(data));
			break;

		case READOUT:
			amr_create_readout_message(data);
			amr_serial.transmit(data, READ_OUT_LEN);
			assert(amr_serial.init(9600));
			break;

		default:
			break;
	}
}

void amr_poller_init(void)
{
	amr_timer_init(amr_poller_task);
}
