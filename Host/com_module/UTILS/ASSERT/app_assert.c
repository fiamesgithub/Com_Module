/*
 * app_assert.c
 *
 *  Created on: 20 May 2020
 *      Author: serbay
 */

#include <stdio.h>

#include "app_assert.h"

void app_assert_failed(const char *file, int line)
{
	printf("Assert failed at %s on line number: %d",
			file,
			line);
}
