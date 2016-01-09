#ifndef PELCOD_H
#define PELCOD_H

#define PELCOD_MSG_SIZE		7

typedef int (*Funcptr_t)(unsigned char*, int);

void pelcod_init(Funcptr_t ptr);



#endif // PELCOD_H
