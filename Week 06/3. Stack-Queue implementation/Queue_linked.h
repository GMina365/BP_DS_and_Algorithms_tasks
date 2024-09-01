#ifndef QUEUE_LINKED_H_INCLUDED
#define QUEUE_LINKED_H_INCLUDED
#include "../Global_lib/Global.h"


typedef struct Queue_node
{
    Queue_Entry data;
    struct Queue_node* next;
} Node;

typedef struct queue
{
    Node* front;
    Node* rear;
    int size;
} Queue;

void CreatQueue(Queue *pq);

int QueueFull(Queue *pq);

void Append(Queue_Entry *pn, Queue *pq);

int QueueEmpty(Queue *pq);

void Serve(Queue_Entry *pn, Queue *pq);

int QueueSize(Queue *pq);

void TraverseQueue(Queue *pq, void (*pf)(Queue_Entry));

void ClearQueue(Queue *pq);

#endif // QUEUE_LINKED_H_INCLUDED
