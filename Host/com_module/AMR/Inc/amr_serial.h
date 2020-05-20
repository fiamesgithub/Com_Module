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

/* Preprocessor Definitions */
#define AMR_SERIAL_REC_TIMEOUT      ( 200 ) /* ms */

/* Function Pointer Declerations */
typedef void (*vptr) (void);
typedef bool (*amr_serial_tx_func_ptr) (const char*, uint32_t);
typedef void (*amr_serial_rx_func_ptr) (char *data);
typedef bool (*amr_serial_uart_func_ptr) (uint32_t);

/* Typedef */
typedef struct
{
	bool is_rec_started;
	bool is_rec_timeout;
	uint32_t rx_idx;
	amr_serial_tx_func_ptr transmit;
	amr_serial_rx_func_ptr receive;
	amr_serial_uart_func_ptr init;
	vptr rx_data_ready;
}amr_serial_t;

/* Extern typedef declerations */
extern amr_serial_t amr_serial;

/* Function Prototypes */
bool amr_serial_is_receive_comp(bool is_rec_started, bool is_rec_timeout);
void amr_serial_rec_data_byte_ready(const char ready_byte, char* buffer, uint32_t* idx);
bool amr_serial_is_timeout(uint32_t *tick);
void amr_serial_is_rx_data_ready(amr_serial_t *amr_serial);
void amr_serial_rx_init(vptr rx_data_ready_cb);

#endif /* INC_AMR_SERIAL_H_ */
