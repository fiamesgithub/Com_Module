/*
 * amr_serial.h
 *
 *  Created on: May 9, 2020
 *      Author: serbay.ozkan
 */

#ifndef INC_AMR_SERIAL_H_
#define INC_AMR_SERIAL_H_

#include <stdint.h>
#include <stdbool.h>

typedef bool (*amr_serial_tx_func_ptr) (const char*, uint32_t);
typedef void (*amr_serial_rx_func_ptr) (char *data);

extern amr_serial_tx_func_ptr amr_transmit_data;
extern amr_serial_rx_func_ptr amr_receive_data;

#endif /* INC_AMR_SERIAL_H_ */
