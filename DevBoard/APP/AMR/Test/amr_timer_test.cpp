/*
 * amr_timer_test.cpp
 *
 *  Created on: May 9, 2020
 *      Author: serbay.ozkan
 */

#include "CppUTest/TestHarness.h"

extern "C"
{
#include "amr_timer.h"
}

#include <cstdio>

static void timer_cb(void)
{
	printf("Timer is expired!\n");
}

TEST_GROUP(amr_timer)
{
	void setup()
	{
		amr_timer_init(timer_cb);
	}

	void teardown()
	{

	}
};

TEST(amr_timer, isTimerExpired)
{
	uint32_t tick = 1001;

	const uint32_t PERIOD = 1000;

	amr_is_timer_elapsed(&tick, PERIOD);

	POINTERS_EQUAL(amr_timer_callback, timer_cb);

	LONGS_EQUAL(tick, 0);
}
