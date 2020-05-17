/*
 * amr_serial_test.cpp
 *
 *  Created on: May 9, 2020
 *      Author: serbay.ozkan
 */

#include <stdio.h>

#include "CppUTest/TestHarness.h"

extern "C"
{
#include "amr_serial.h"
}

static bool serial_transmit(const char* data, uint32_t size)
{
	return true;
}

static void serial_receive_data(char *data)
{
	const uint32_t MAX_LEN = 512;

	if (data != NULL)
	{
		snprintf(data, MAX_LEN, "%s", "Hello World");
	}
}

TEST_GROUP(amr_serial)
{
	void setup()
	{
		amr_transmit_data = serial_transmit;
		amr_receive_data = serial_receive_data;
	}

	void teardown()
	{

	}
};

TEST(amr_serial, transmitData)
{
	char data[4] = {0x01, 0x02, 0x03, 0x04};

	CHECK_TRUE(amr_transmit_data(data, 4));
}

TEST(amr_serial, receiveData)
{
	char received_data[32];

	amr_receive_data(received_data);

	STRCMP_EQUAL("Hello World", received_data);
}
