#include <iostream>
#include "Queue.h"


/*
this function initializes the queue with a given size
input: queue pointer
output: none
*/
void initQueue(Queue* q, unsigned int size)
{ 
	// check if the queue is null or size is 0
	if (q == nullptr || size == 0)
	{
		return;
	}
	// initialize the queue
	q->arr = new int[size];
	q->maxCapacity = size;
	q->front = 0;
	q->rear = -1;
	q->count = 0;
}
/*
this function frees the array and resets the queue 
input: queue pointer
output: none
*/
void cleanQueue(Queue* q)
{
	// check if the queue is null
	if (q == nullptr)
	{
		return;
	}
	// free the dynamic array and resert the queue
	delete[] q->arr;
	q->arr = nullptr;
	q->maxCapacity = 0;
	q->front = 0;
	q->rear = -1;
	q->count = 0;
}
/*
this function adds a new value to the queue at the end
input: queue pointer
output: none
*/
void enqueue(Queue* q, unsigned int newValue)
{
	if (q == nullptr || isFull(q))
	{
		return;
	}
	// add the new value to the rear by moving the rear forward
	q->rear = (q->rear + 1) % q->maxCapacity;
	q->arr[q->rear] = newValue; // add the new value in place
	q->count++; // update the count
}
/*
this function removes the first value of the queue and returns it
input: queue pointer
output: the first value of the queue or -1 if empty or null
*/
int dequeue(Queue* q)
{
	// check if the queue is empty or null
	if (q == nullptr || isEmpty(q))
	{
		return -1;
	}
	int value = q->arr[q->front];

	// skip the first value by moving the front forward
	q->front = (q->front + 1) % q->maxCapacity;

	q->count--; // update the count
	return value;
}
/*
this function checks if the queue is empty or null
input: queue pointer
output: true if empty, false otherwise
*/
bool isEmpty(Queue* s)
{
	// check if the queue is empty or null
	if (s == nullptr || s->count == 0)
	{
		return true;
	}
	return false;
}
/*
this function checks if the queue is full or null
input: queue pointer
output: true if full, false otherwise
*/
bool isFull(Queue* s)
{
	// check if the queue is full or null
	if (s == nullptr || s->count == s->maxCapacity)
	{
		return true;
	}
	return false;
}
