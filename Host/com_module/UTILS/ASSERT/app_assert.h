/*
 * app_assert.h
 *
 *  Created on: 20 May 2020
 *      Author: serbay
 */

#ifndef UTILS_ASSERT_APP_ASSERT_H_
#define UTILS_ASSERT_APP_ASSERT_H_

#include <stdio.h>

void app_assert_failed(const char *file, int line);

#define APP_ASSERT_TRUE(expr) \
    if ((expr)) \
        app_assert_failed(__FILE__, __LINE__)

#define APP_ASSERT_FALSE(expr) \
    if (!(expr)) \
        app_assert_failed(__FILE__, __LINE__)

#endif /* UTILS_ASSERT_APP_ASSERT_H_ */
