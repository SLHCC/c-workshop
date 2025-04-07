#include <stdio.h>
#include <stdlib.h>

#include "Node.h"

void add_node(Node** head, Node** tail, int value)
{
    Node* new_node = malloc( sizeof( Node ) );

    new_node->value = value;
    new_node->prev = NULL;
    new_node->next = NULL;

    if ( *head == NULL ) 
    {
        *head = new_node;
        *tail = new_node;
        return;
    }

    ( *tail )->next = new_node;
    new_node->prev = *tail;
    *tail = new_node;
}

void display_forward(Node* head)
{
    Node* temp = head;

    while ( temp != NULL )
    {
        printf("%d -> \n", temp->value);
        temp = temp->next;
    }

    printf("NULL\n");
}

void display_backward(Node* tail)
{
    Node* temp = tail;

    while ( temp != NULL )
    {
        printf("%d -> \n", temp->value);
        temp = temp->prev;
    }

    printf("NULL\n");
}

void free_list(Node* head)
{
    Node* temp;
    while ( head != NULL )
    {
        temp = head;
        head = head->next;
        free( temp );
    }
}