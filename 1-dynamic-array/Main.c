#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "DynamicArray.h"

int main()
{
    DynamicArray dynamic_array;

    dynamic_array.num_of_items = 0;
    dynamic_array.size = 10;
    dynamic_array.values = malloc( dynamic_array.size * sizeof( char* ) );

    if ( !dynamic_array.values )
    {
        printf("Memory allocation error for values array!\n");
        return 1;
    }

    // Names to test with
    
    const char* names[] =
    {
        "Dylan",
        "Dani",
        "Tilly",
        "Henry",
        "Bob",
        "Chris",
        "Joy",
        "Markus",
        "Ed",
        "Francois",
        "Cam",
        "Simon",
        "Jonah",
        "Adam",
        "Sadman",
        "Hamish",
        "Luke",
        "Patrick",
        "Irene",
        "Grace"
    };

    int name_count = sizeof( names ) / sizeof( names[0] );

    printf("Name Count: %d\n", name_count);

    for ( int i = 0; i < name_count; i++ )
    {
        if ( dynamic_array.num_of_items == dynamic_array.size )
        {
            dynamic_array.size += 10;
            dynamic_array.values = realloc( dynamic_array.values, dynamic_array.size * sizeof( char* ) );
        }

        dynamic_array.values[i] = malloc(strlen(names[i]) + 1);

        if ( !dynamic_array.values[i] ) 
        {
            printf("Memory allocation error for string!\n");
            return 1;
        }

        strcpy( dynamic_array.values[i], names[i] );

        printf("Successfully added item #%d to dynamic array with a value of %s\n", i, names[i]);

        dynamic_array.num_of_items++;
    }

    // Test methods

    char* first = get_first(&dynamic_array);
    printf("First item: %s\n", first);

    char* last = get_last(&dynamic_array);
    printf("Last item: %s\n", last);

    char* seven = get_by_id(&dynamic_array, 7);
    printf("Item at index 7: %s\n", seven);

    for (int i = 0; i < dynamic_array.num_of_items; i++) 
    {
        free(dynamic_array.values[i]);
    }

    free(dynamic_array.values);

    return 0;
}