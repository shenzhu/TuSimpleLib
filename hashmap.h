#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <stdarg.h>


#define MAP_MISSING -3  /* No such element */
#define MAP_FULL -2    /* Hashmap is full */
#define MAP_OMEM -1    /* Out of Memory */
#define MAP_OK 0    /* OK */


#ifndef TUSIMPLELIB_HASHMAP_H
#define TUSIMPLELIB_HASHMAP_H


// Define data structure
struct hashmap_element {
    char *key;
    int used;
    void *data[2];
};

struct hashmap {
    int tableSize;
    int size;
    int32_t keyType;
    int32_t valueType;
    struct hashmap_element *data;
};


// Define functions
struct hashmap *create_hashmap(int32_t keyType, int32_t valueType);

struct hashmap *hashmap_put(struct hashmap *map, ...);

#endif //TUSIMPLELIB_HASHMAP_H
