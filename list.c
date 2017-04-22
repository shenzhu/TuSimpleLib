#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include "list.h"

struct List *create_list(int32_t type) {
    struct List *newList = (struct List *) malloc(sizeof(struct List));

    // Init value of newly created list
    newList->type = type;
    newList->size = 1;
    newList->currPos = 0;
    newList->value = (void *) malloc(newList->size * sizeof(void *));

    return newList;
}

void *plus_list(struct List *list, void *value) {

}

int main() {
    // Test function: create_list
    struct List *newList = create_list(1);
    printf("%d\n", newList->type);

    return 0;
}
