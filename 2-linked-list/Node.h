#pragma once

typedef struct
{
    int value;
    struct Node* prev;
    struct Node* next;  
} Node;

void add_node(Node** head, Node** tail, int value);
void display_forward(Node* head);
void display_backward(Node* tail);
void free_list(Node* head);