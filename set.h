#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <stdarg.h>
#include "list.c"


#ifndef TUSIMPLELIB_SET_H
#define TUSIMPLELIB_SET_H


struct Set {
    int32_t type;
    int32_t size;
    struct List *data;
};


struct Set *create_set(int type);

bool check_set_element(struct Set *set, ...);

struct Set *put_set(struct Set *set, ...);

int32_t get_set_type(struct Set *set);

int32_t get_set_size(struct Set *set);


#endif //TUSIMPLELIB_SET_H
