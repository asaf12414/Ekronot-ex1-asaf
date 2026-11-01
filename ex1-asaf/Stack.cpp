#include "Stack.h"
#include <iostream>

/*
this function initializes the stack
input: stack pointer
output: none
*/
void initStack(Stack* s) 
{
    // check if the stack is null
    if (s != nullptr) 
    {
        s->head = nullptr;
    }
}

/*
this function adds a new element to the top of the stack
input: stack pointer, new element
output: none
*/
void push(Stack* s, unsigned int element) {
    // check if the stack is null
    if (s != nullptr) 
    {
        addToList(&s->head, element);
    }
}

/*
this function removes and returns the top element of the stack
input: stack pointer
output: the removed element or -1 if the stack is null or empty
*/
int pop(Stack* s) {
    // check if the stack is null
    if (s != nullptr) 
    {
        return removeFromList(&s->head);
    }
    return -1;
}

/*
this function frees all elements in the stack
input: stack pointer
output: none
*/
void cleanStack(Stack* s) {
    // check if the stack is null
    if (s != nullptr) {
        freeList(s->head);
        s->head = nullptr;
    }
}
/*
this function checks if the stack is empty
input: stack pointer
output: true if empty or null, false otherwise
*/
bool isEmpty(Stack* s)
{
    // check if the stack is null or has no nodes
	return (s == nullptr || s->head == nullptr);
}