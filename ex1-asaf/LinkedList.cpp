#include <iostream>
#include "LinkedList.h"


/*
this function adds a new node to the beginning of the linked list
input: pointer to the head pointer, new value
output: none
*/
void addToList(IntNode** head, unsigned int newValue)
{
	// create and initialize the new node
	IntNode* newNode = new IntNode;
	newNode->val = newValue;
	newNode->next = *head;
	*head = newNode;
}

/*
this function removes the first node from the linked list and returns its value
input: pointer to the head pointer
output: the value of the removed node or 0 if the list is empty
*/
unsigned int removeFromList(IntNode** head)
{
	// check if the list is empty
	if (*head == nullptr)
	{
		return 0;
	}
	IntNode* temp = *head;
	*head = (*head)->next;
	unsigned int value = temp->val;
	delete temp;
	return value;
}
/*
this function frees all nodes in the linked list
input: pointer to the first node
output: none
*/
void freeList(IntNode* head)
{
	// delete nodes one at a time until the list is empty
	while (head != nullptr) 
	{
		IntNode* temp = head;
		head = head->next;
		delete temp;
	}
}
