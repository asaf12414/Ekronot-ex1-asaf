#ifndef QUEUE_H
#define QUEUE_H


/* a queue contains positive integer values. */
typedef struct Queue
{
    int* arr;        // dynamic array
    unsigned int maxCapacity; // maximum number of elements in the queue
    int front;       // first index of the queue
    int rear;        // last index of the queue
    unsigned int count;       // number of elements in the queue
} Queue;

void initQueue(Queue* q, unsigned int size);
void cleanQueue(Queue* q);

void enqueue(Queue* q, unsigned int newValue);
int dequeue(Queue* q); // return element in top of queue, or -1 if empty

bool isEmpty(Queue* s);
bool isFull(Queue* s);

#endif /* QUEUE_H */