#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <stdarg.h>
#include "list.h"
#include "cast.c"

#define INT 0
#define FLOAT 1
#define BOOL 2


struct List *create_list(int32_t type) {
    struct List *newList = (struct List *) malloc(sizeof(struct List));

    // Init value of newly created list
    newList->type = type;
    newList->size = 1;
    newList->currPos = 0;
    newList->value = (void *) malloc(newList->size * sizeof(void *));
    return newList;
}


struct List* plus_list_helper(struct List* list, void* value) {
    if (list->currPos >= list->size) {
        // Double list size
        list->size = list->size * 2;
        list->value = (void**) realloc(list->value, list->size * sizeof(void*));
    }
    *(list->value + list->currPos) = value;
    return list;
}


struct List *plus_list(struct List *list, ...) {
    if (list == NULL) {
        printf("Error! plus_list() : List does not exist. \n");
        exit(1);
    }

    // Extract data using variable-argument
    va_list arg_ptr;
    va_start(arg_ptr, list);

    void* data;
    switch (list->type) {
        case INT:
            printf("INT\n");
            data = intTovoid(va_arg(arg_ptr, int));
            break;

        case FLOAT:
            printf("FLOAT\n");
            data = floatTovoid(va_arg(arg_ptr, double));
            break;

        case BOOL:
            printf("BOOL\n");
            data = boolTovoid(va_arg(arg_ptr, bool));
            break;

        default:
            break;
    }

    va_end(arg_ptr);

    return list;
}

int main() {
    // Test function: create_list
    struct List *int_list = create_list(0);
    printf("%d\n", int_list->type);

    struct List *double_list = create_list(1);
    printf("%d\n", double_list->type);

    // Test function: plus_list
    struct List *int_list_test = plus_list(int_list, 10);
    struct List *double_list_test = plus_list(double_list, 10.123);


    return 0;
}
