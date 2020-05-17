/*
 * amr_timer.h
 *
 *  Created on: May 9, 2020
 *      Author: serbay.ozkan
 */

#ifndef AMR_INC_AMR_TIMER_H_
#define AMR_INC_AMR_TIMER_H_

#include <stdint.h>
#include <stdbool.h>

typedef void (*amr_vptr_to_func) (void);

void amr_is_timer_elapsed(uint32_t* tick, uint32_t period);
void amr_timer_init(amr_vptr_to_func amr_timer_cb);

extern amr_vptr_to_func amr_timer_callback;

#endif /* AMR_INC_AMR_TIMER_H_ */
