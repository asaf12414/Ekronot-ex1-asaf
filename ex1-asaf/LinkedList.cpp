#include <iostream>
#include "LinkedList.h"


void addToList(IntNode** head, unsigned int newValue)
{
	IntNode* newNode = new IntNode;
	newNode->val = newValue;
	newNode->next = *head;
	*head = newNode;
}

unsigned int removeFromList(IntNode** head)
{
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
