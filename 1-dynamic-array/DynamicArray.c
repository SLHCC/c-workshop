#include <stdio.h>

#include "DynamicArray.h"

char* get_first(DynamicArray* dynamic_array)
{
    return dynamic_array->values != NULL ? dynamic_array->values[0] : NULL;
}

char* get_last(DynamicArray* dynamic_array)
{
    return dynamic_array->values != NULL ? dynamic_array->values[dynamic_array->num_of_items - 1] : NULL;
}

char* get_by_id(DynamicArray* dynamic_array, int index)
{
    return dynamic_array->values != NULL ? dynamic_array->values[index] : NULL;
}