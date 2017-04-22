#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <stdbool.h>

#ifndef TUSIMPLELIB_CAST_H
#define TUSIMPLELIB_CAST_H


// Methods that convert void to other types
int32_t voidToint(void* pointer);
double voidTofloat(void* pointer);
bool voidTobool(void* pointer);


// Methods that convert other types to void
void* intTovoid(int32_t value);
void* floatTovoid(double value);
void* boolTovoid(bool value);

#endif //TUSIMPLELIB_CAST_H
