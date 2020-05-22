/*
 * amr_poller_test.cpp
 *
 *  Created on: May 9, 2020
 *      Author: serbay.ozkan
 */

#include "CppUTest/TestHarness.h"

#include <string.h>

extern "C"
{
#include "amr_poller.h"
}

TEST_GROUP(amr_poller)
{
	void setup()
	{

	}

	void teardown()
	{

	}
};

TEST(amr_poller, createStartMessage)
{
	uint32_t serial_number = 123456789;
	char start_message[20];
	char meter_type = 'M';

	amr_create_start_message(serial_number, start_message, meter_type);

	STRCMP_EQUAL("/?MSY123456789!\r\n", (char*)start_message);
}

TEST(amr_poller, createReadoutMessage)
{
	char readout_message[4];
	memset(readout_message, 0, sizeof(readout_message));

	char readout_message_actual[4] = {0x06, 0x30, 0x35, 0x30};

	amr_create_readout_message(readout_message);

	for (int idx = 0; idx < 4; idx++)
	{
		BYTES_EQUAL(readout_message_actual[0], readout_message[0]);
	}
}

TEST(amr_poller, updateSelectedMeter)
{
	uint8_t meter_id = 1;

	amr_update_selected_meter(meter_id);

	CHECK_EQUAL(meter_id, amr_poller.selected_meter);
}

TEST(amr_poller, updatePollerState)
{
	CHECK_EQUAL(START, amr_get_poller_state());
}
