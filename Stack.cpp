#include <iostream>
#include "Stack.h"

void initStack(Stack* s) 
{
    if (s != nullptr) 
    {
        s->head = nullptr;
    }
}

void push(Stack* s, unsignnt element) {
    if (s != nullptr) 
    {
        add(s->head, element);
    }
}

int pop(Stack* s) {
    if (s != nullptr) 
    {
        return remove(s->head);
    }
    return -1;
}

void cleanStack(Stack* s) {
    if (s != nullptr) {
        freeList(s->head);
        s->head = nullptr;
    }
}