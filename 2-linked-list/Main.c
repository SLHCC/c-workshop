#include <stdio.h>

#include "Node.h"

int main()
{
    Node* head = NULL;
    Node* tail = NULL;

    for ( int i = 100; i <= 1000; i += 100 )
    {
        add_node(&head, &tail, i);
    }

    printf("List Forward:\n");
    display_forward(head);

    printf("List Backward:\n");
    display_backward(tail);

    free_list(head);

    return 0;
}