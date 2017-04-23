#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <stdarg.h>
#include <string.h>
#include "list.h"
#include "cast.c"

#define INT 0
#define FLOAT 1
#define BOOL 2
#define STRING 3


struct List *create_list(int32_t type) {
    struct List *newList = (struct List *) malloc(sizeof(struct List));

    // Init value of newly created list
    newList->type = type;
    newList->size = 1;
    newList->currPos = 0;
    newList->value = (void *) malloc(newList->size * sizeof(void *));
    return newList;
}


struct List *plus_list_helper(struct List *list, void *value) {
    if (list->currPos >= list->size) {
        // Double list size
        list->size = list->size * 2;
        list->value = (void **) realloc(list->value, list->size * sizeof(void *));
    }

    // Add element and reset size
    *(list->value + list->currPos) = value;
    list->currPos++;
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

    void *data;
    switch (list->type) {
        case INT:
            data = intTovoid(va_arg(arg_ptr, int));
            break;

        case FLOAT:
            data = floatTovoid(va_arg(arg_ptr, double));
            break;

        case BOOL:
            data = boolTovoid(va_arg(arg_ptr, bool));
            break;

        case STRING:
            data = stringTovoid(va_arg(arg_ptr, char*));
            break;

        default:
            break;
    }

    va_end(arg_ptr);

    return plus_list_helper(list, data);
}


void *get_list_element(struct List *list, int index) {
    // Corner case
    if (list == NULL) {
        printf("Error! get_list_element() : List does not exist. \n");
        exit(1);
    } else if (list->size == 0 || list->size <= index || list->size <= -index) {
        printf("Error! get_list_element() : Index out of range. \n");
        exit(1);
    } else if (index < 0) {
        index += list->size;
    }

    return *(list->value + index);
}


int get_list_size(struct List *list) {
    // Corner case
    if (list == NULL) {
        printf("Error! get_list_size() : List does not exist. \n");
        exit(1);
    }

    return list->currPos;
}


void *pop_list_element(struct List *list) {
    if (list == NULL) {
        printf("Error! pop_list_element() : List does not exist.\n");
        exit(1);
    } else if (list->currPos < 1) {
        printf("Error! pop_list_element() : No element to pop.\n");
        exit(1);
    }

    void *value = *(list->value + list->currPos - 1);
    list->currPos--;

    return value;
}


void *remove_list_element(struct List *list, int index) {
    if (list == NULL) {
        printf("Error! remove_list_element() : List does not exist.\n");
        exit(1);
    } else if (list->size <= index || list->size == 0) {
        printf("Error! remove_list_element() : Index out of range.\n");
        exit(1);
    }

    void *elementToRemove = *(list->value + index);

    for (int i = index; i < list->currPos; i++) {
        *(list->value + i) = *(list->value + i + 1);
    }

    // decrease size
    list->currPos--;

    return elementToRemove;
}


int main() {
//    // Test function: create_list
//    struct List *intList = create_list(0);
//    printf("%d\n", intList->type);
//
//    struct List *doubleList = create_list(1);
//    printf("%d\n", doubleList->type);
//
    // Test function: plus_list
    struct List* intListTest = create_list(INT);
    struct List* doubleListTest = create_list(FLOAT);
    struct List* stringListTest = create_list(STRING);
    intListTest = plus_list(intListTest, 10);
    doubleListTest = plus_list(doubleListTest, 10.123);
    char str1[12] = "Hello";
    char str2[12] = "World";
    stringListTest = plus_list(stringListTest, str1);
    stringListTest = plus_list(stringListTest, str2);
    printf("%s\n", voidTostring(pop_list_element(stringListTest)));
    printf("%s\n", voidTostring(pop_list_element(stringListTest)));



//    // Test function: get_list_element, get_list_size
//    struct List *intListTest;
//    intListTest = create_list(INT);
//    intListTest = plus_list(intListTest, 10);
//    printf("%d\n", get_list_size(intListTest));
//
//    intListTest = plus_list(intListTest, 20);
//    printf("%d\n", get_list_size(intListTest));
//
//    intListTest = plus_list(intListTest, 30);
//    printf("%d\n", get_list_size(intListTest));
//
//    printf("%d\n", intListTest->type);
//    printf("%d\n", intListTest->size);
//    void *intVoidPointerTest = get_list_element(intListTest, 3);
//    int intTest = voidToint(intVoidPointerTest);
//    printf("%d\n", intTest);


//    // Test function: pop_list_element
//    struct List *intListTest;
//    intListTest = create_list(INT);
//    intListTest = plus_list(intListTest, 10);
//    intListTest = plus_list(intListTest, 20);
//    intListTest = plus_list(intListTest, 30);
//    printf("%d\n", voidToint(pop_list_element(intListTest)));
//    printf("%d\n", voidToint(pop_list_element(intListTest)));
//    printf("%d\n", voidToint(pop_list_element(intListTest)));


//    // Test function: remove_list_element
//    struct List *intListTest;
//    intListTest = create_list(INT);
//    intListTest = plus_list(intListTest, 10);
//    intListTest = plus_list(intListTest, 20);
//    intListTest = plus_list(intListTest, 30);
//    printf("%d\n", get_list_size(intListTest));
//    printf("%d\n", voidToint(remove_list_element(intListTest, 0)));
//    printf("%d\n", get_list_size(intListTest));
//    printf("%d\n", voidToint(remove_list_element(intListTest, 0)));
//    printf("%d\n", get_list_size(intListTest));
//    printf("%d\n", voidToint(remove_list_element(intListTest, 0)));
//    printf("%d\n", get_list_size(intListTest));

    return 0;
}
