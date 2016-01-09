#ifndef PELCOD_H
#define PELCOD_H

#define PELCOD_MSG_SIZE		7

typedef int (*Funcptr_t)(unsigned char*, int);

/*globally used functions */
void pelcod_init(Funcptr_t ptr);

/* Pelcod standard protocol */
int pelcod_move_right(unsigned char address, int speed);

/* Pelcod extended protocol */



#endif // PELCOD_H
