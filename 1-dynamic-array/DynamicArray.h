#pragma once

typedef struct
{
    int size;
    int num_of_items;
    char** values;
} DynamicArray;

// Getter methods

char* get_first(DynamicArray* dynamic_array);
char* get_last(DynamicArray* dynamic_array);
char* get_by_id(DynamicArray* dynamic_array, int index);