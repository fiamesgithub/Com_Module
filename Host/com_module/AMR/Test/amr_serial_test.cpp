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

static bool serial_uart_init(uint32_t baudrate)
{
	return true;
}

TEST_GROUP(amr_serial)
{
	void setup()
	{
		amr_serial.init = serial_uart_init;
		amr_serial.transmit = serial_transmit;
		amr_serial.receive = serial_receive_data;
	}

	void teardown()
	{

	}
};

TEST(amr_serial, transmitData)
{
	char data[4] = {0x01, 0x02, 0x03, 0x04};

	CHECK_TRUE(amr_serial.transmit(data, 4));
}

TEST(amr_serial, receiveData)
{
	char received_data[32];

	amr_serial.receive(received_data);

	STRCMP_EQUAL("Hello World", received_data);
}

TEST(amr_serial, initUartInterface)
{
	CHECK_TRUE(amr_serial.init(9600));
}

TEST(amr_serial, isReceiveCompleted)
{
	static bool rec_started = true;
	static bool rec_to = true;

	CHECK_TRUE(amr_serial_is_receive_comp(rec_started, rec_to));
}

TEST(amr_serial, bufferReceivedData)
{
	static uint32_t idx = 0;
	static char ready_buffer[32] = {0};

	amr_serial_rec_data_byte_ready('S', ready_buffer, &idx);
	amr_serial_rec_data_byte_ready('e', ready_buffer, &idx);
	amr_serial_rec_data_byte_ready('r', ready_buffer, &idx);

	STRCMP_EQUAL("Ser", ready_buffer);

	LONGS_EQUAL(3, idx);
}

TEST(amr_serial, isReceiveTimeoutOccured)
{
	static uint32_t tick = 200;

	CHECK_TRUE(amr_serial_is_timeout(&tick));
	LONGS_EQUAL(0, tick);
}

TEST(amr_serial, clearReceiveProcessFlags)
{
	amr_serial.is_rec_started = true;
	amr_serial.is_rec_timeout = true;
	amr_serial.rx_idx = 1024;

	amr_serial_clear_rx_params(&amr_serial);

	CHECK_FALSE(amr_serial.is_rec_started);
	CHECK_FALSE(amr_serial.is_rec_timeout);
	LONGS_EQUAL(0, amr_serial.rx_idx);
}

TEST(amr_serial, receiveBufferBoundaryConditions)
{

}
