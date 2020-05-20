/*
 * amr_timer.c
 *
 *  Created on: May 9, 2020
 *      Author: serbay.ozkan
 */

/**
 * Standart Library Includes
 */
#include <stddef.h>

/**
 * User Defined Includes
 */
#include "amr_timer.h"
#include "app_assert.h"

/**
 * Typedef Structure and Enums
 */
amr_vptr_to_func amr_timer_callback;

/**
 * @note  Should be called in 1ms timer
 * @param tick
 * @param period
 */
void amr_is_timer_elapsed(uint32_t* tick, uint32_t period)
{
	if (*tick >= period)
	{
		APP_ASSERT_TRUE(amr_timer_callback == NULL);
		amr_timer_callback();
		*tick = 0;
	}
}

void amr_timer_init(amr_vptr_to_func amr_timer_cb)
{
	amr_timer_callback = amr_timer_cb;
}
