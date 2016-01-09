/* 
* @Author: reinierh
* @Date:   2016-01-09 17:41:23
* @Last Modified by:   reinierh
* @Last Modified time: 2016-01-09 19:30:39
*/

#include "pelcod.h"

static Funcptr_t send_data;

unsigned char calc_checksum(unsigned char* data, int size) {
	short i;
	unsigned char total;
	for(i = 0; i < size; i++)
		total += data[i];

	return (total % 256);
}

void pelcod_init(Funcptr_t ptr) {
	send_data = ptr;
}

int pelcod_send(unsigned char address, short command, short payload) {
	unsigned char buffer[PELCOD_MSG_SIZE];	

	buffer[0] = 0xFF;						// preamble
	buffer[1] = address;					// device address
	buffer[2] = (command & 0xFF);			// command 1
	buffer[3] = (command & 0xFF00) >> 8;	// command 2
	buffer[4] = (payload & 0xFF);			// data 1 
	buffer[5] = (payload & 0xFF00) >> 8;	// data 2
	buffer[6] = calc_checksum(buffer+1, PELCOD_MSG_SIZE - 2);

	send_data(buffer, PELCOD_MSG_SIZE);
}

int pelcod_move_right(unsigned char address, int speed) {
	
}



