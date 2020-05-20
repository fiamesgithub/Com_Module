/*
 * main.cpp
 *
 *  Created on: May 9, 2020
 *      Author: serbay.ozkan
 */

#include "CppUTest/CommandLineTestRunner.h"

extern "C"
{
#include "app_assert.h"
#include "amr_serial.h"
}

int main(void)
{
	const char * av_override[] = { "exe", "-v" };

	CommandLineTestRunner::RunAllTests(2, av_override);

	return 0;
}
