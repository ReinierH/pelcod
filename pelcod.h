#ifndef PELCOD_H
#define PELCOD_H

#define PELCOD_MSG_SIZE		7

typedef int (*Funcptr_t)(unsigned char*, int);

/*globally used functions */
void pelcod_init(Funcptr_t ptr);

/* Pelcod standard protocol */
int pelcod_move_right(unsigned char address, unsigned short speed);
int pelcod_move_left(unsigned char address, unsigned short speed);
int pelcod_move_up(unsigned char address, unsigned short speed);
int pelcod_move_down(unsigned char address, unsigned short speed);

int pelcod_move_stop(unsigned char address);

/* Pelcod extended protocol */
int pelcod_goto_preset(unsigned char address, unsigned short preset);
#endif // PELCOD_H
