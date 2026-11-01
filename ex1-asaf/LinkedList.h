#ifndef LINKED_LIST_H
#define LINKED_LIST_H

typedef struct IntNode
{
    unsigned int val;
    struct IntNode* next;
} IntNode;


void addToList(IntNode** head, unsigned int newValue);

unsigned int removeFromList(IntNode** head);

void freeList(IntNode* head);
#endif