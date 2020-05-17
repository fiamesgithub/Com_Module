/*
 * amr_poller.h
 *
 *  Created on: May 9, 2020
 *      Author: serbay.ozkan
 */

#ifndef INC_AMR_POLLER_H_
#define INC_AMR_POLLER_H_

#include <stdint.h>

#define AMR_MAX_NO_OF_METER     ( 15 )

typedef struct
{
	uint8_t selected_meter;
	uint32_t serial_no[AMR_MAX_NO_OF_METER];
	char model[AMR_MAX_NO_OF_METER];
}amr_poller_t;

typedef enum
{
	INIT,
	START,
	READOUT
}amr_poller_state_t;

void amr_create_start_message(uint32_t serial_number, char* start_message, char meter_type);
void amr_create_readout_message(char* readout_message);
void amr_update_selected_meter(uint8_t meter_id);
amr_poller_state_t amr_get_poller_state(void);
void amr_poller_init(void);

extern amr_poller_t amr_poller;
extern amr_poller_state_t amr_poller_state;

#endif /* INC_AMR_POLLER_H_ */
