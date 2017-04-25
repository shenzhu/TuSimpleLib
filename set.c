#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <stdarg.h>
#include "set.h"


struct Set *create_set(int32_t type) {
    // Apply for memory
    struct Set *newSet = (struct Set *) malloc(sizeof(struct Set));

    // Set property
    newSet->type = type;
    newSet->size = 0;
    newSet->data = create_list(type);

    return newSet;
}

bool check_set_element(struct Set *set, ...) {
    // Corner case
    if (set == NULL) {
        printf("%s\n", "Error! check_set_element : Set does not exist.\n");
        exit(1);
    }

    bool exist = 0;

    va_list args_ptr;
    va_start(args_ptr, set);

    switch (set->type) {
        case INT:
            exist = check_list_element(set->data, va_arg(args_ptr, int));
            break;

        case FLOAT:
            exist = check_list_element(set->data, va_arg(args_ptr, double));
            break;

        case BOOL:
            exist = check_list_element(set->data, va_arg(args_ptr, bool));
            break;

        case STRING:
            exist = check_list_element(set->data, va_arg(args_ptr, char*));
            break;

        default:
            break;
    }

    va_end(args_ptr);

    return exist;
}

struct Set *put_set(struct Set *set, ...) {
    // Corner case
    if (set == NULL) {
        printf("%s\n", "Error! put_set : Set does not exist.\n");
        exit(1);
    }

    void *addData;

    va_list args_ptr;
    va_start(args_ptr, set);
    switch (set->type) {
        case INT:
            addData = intTovoid(va_arg(args_ptr, int));
            if (!check_set_element(set, voidToint(addData))) {
                set->data = plus_list(set->data, voidToint(addData));
                set->size++;
            } else {
                printf("Error! put_set : Element Already exist.\n");
                exit(1);
            }
            break;

        case FLOAT:
            addData = floatTovoid(va_arg(args_ptr, double));
            if (!check_set_element(set, voidTofloat(addData))) {
                set->data = plus_list(set->data, voidTofloat(addData));
                set->size++;
            } else {
                printf("Error! put_set : Element Already exist.\n");
                exit(1);
            }
            break;

        case BOOL:
            addData = boolTovoid(va_arg(args_ptr, bool));
            if (!check_set_element(set, voidTobool(addData))) {
                set->data = plus_list(set->data, voidTobool(addData));
                set->size++;
            } else {
                printf("Error! put_set : Element Already exist.\n");
                exit(1);
            }
            break;

        case STRING:
            addData = stringTovoid(va_arg(args_ptr, char*));
            if (!check_set_element(set, voidTostring(addData))) {
                set->data = plus_list(set->data, voidTostring(addData));
                set->size++;
            } else {
                printf("Error! put_set : Element Already exist.\n");
                exit(1);
            }
            break;

        default:
            break;
    }

    va_end(args_ptr);

    return set;
}

struct List* get_set_elements(struct Set* set) {
    // Corner case
    if (set == NULL) {
        printf("%s\n", "Error! get-set_elements : Set does not exist.\n");
        exit(1);
    }

    struct List* list;
    int i;

    switch (set->type) {
        case INT:
            list = create_list(INT);
            list->type = INT;
            list->size = set->size;
            for (i = 0; i < set->size; i++) {
                list = plus_list(list, voidToint(get_list_element(set->data, i)));
            }
            return list;

        case FLOAT:
            list = create_list(FLOAT);
            list->type = FLOAT;
            list->size = set->size;
            for (i = 0; i < set->size; i++) {
                list = plus_list(list, voidTofloat(get_list_element(set->data, i)));
            }
            return list;

        case BOOL:
            list = create_list(BOOL);
            list->type = BOOL;
            list->size = set->size;
            for (i = 0 ; i < set->size; i++) {
                list = plus_list(list, voidTobool(get_list_element(set->data, i)));
            }
            return list;

        case STRING:
            list = create_list(STRING);
            list->type = STRING;
            list->size = set->size;
            for (i = 0; i < set->size; i++) {
                list = plus_list(list, voidTostring(get_list_element(set->data, i)));
            }
            return list;

        default:
            break;
    }

    return list;
}

int32_t get_set_type(struct Set *set) {
    if (set == NULL) {
        printf("%s\n", "Error! get_set_type : Set does not exist.\n");
        exit(1);
    }

    return set->type;
}

int32_t get_set_size(struct Set *set) {
    if (set == NULL) {
        printf("%s\n", "Error! get_set_type : Set does not exist.\n");
        exit(1);
    }

    return set->size;
}


int main() {

    // Test function: create_set, get_set_type
    printf("%s\n", "TEST: create_set");
    struct Set *intSet = create_set(INT);
    printf("%d\n", intSet->type);
    printf("%d\n", intSet->data->type);
    printf("%d\n", intSet->size);
    printf("%d\n", get_set_type(intSet));

    struct Set *stringSet = create_set(STRING);
    printf("%d\n", stringSet->type);
    printf("%d\n", stringSet->data->type);
    printf("%d\n", stringSet->size);
    printf("%d\n", get_set_type(stringSet));


    // Test function: put_set, get_set_size
    printf("%s\n", "TEST: put_set, get_set_size");
    struct Set* intSet2 = create_set(INT);
    intSet2 = put_set(intSet2, 1);
    printf("%d\n", get_set_size(intSet2));
    assert(get_set_size(intSet2) == 1);
    intSet2 = put_set(intSet2, 2);
    printf("%d\n", get_set_size(intSet2));
    assert(get_set_size(intSet2) == 2);
    intSet2 = put_set(intSet2, 3);
    printf("%d\n", get_set_size(intSet2));
    assert(get_set_size(intSet2) == 3);

    struct Set* stringSet2 = create_set(STRING);
    stringSet2 = put_set(stringSet2, "hello");
    printf("%d\n", get_set_size(stringSet2));
    assert(get_set_size(stringSet2) == 1);
    stringSet2 = put_set(stringSet2, "world");
    printf("%d\n", get_set_size(stringSet2));
    assert(get_set_size(stringSet2) == 2);
    printf("%d\n", check_set_element(stringSet2, "hello"));
    printf("%d\n", check_set_element(stringSet2, "world"));
    printf("%d\n", check_set_element(stringSet2, "columbia"));


    // Test function: get_set_elements
    printf("%s\n", "TEST: get_set_elements");
    struct List* intList1 = get_set_elements(intSet2);
    printf("%d\n", get_list_size(intList1));
    struct List* stringList1 = get_set_elements(stringSet2);
    printf("%d\n", get_list_size(stringList1));
}