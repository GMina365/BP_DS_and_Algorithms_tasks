#include <stdio.h>
#include <stdlib.h>
#include "Queue_linked.h"

void CreatQueue(Queue *pq)
{
    pq->front = NULL;
    pq->rear = NULL;
    pq->size = 0;
}

int QueueFull(Queue *pq)
{
    return 0;
}

void Append(Queue_Entry *pn, Queue *pq)
{
    Node *pqn = (Node*)malloc(sizeof(Node));
    pqn->next = NULL;
    pqn->data = *pn;
    if(!pq->rear) pq->front = pqn;
    else pq->rear->next = pqn;
    pq->rear = pqn;
    pq->size++;
}

int QueueEmpty(Queue *pq)
{
    return !pq->rear;
}

void Serve(Queue_Entry *pn, Queue *pq)
{
    Node *pqn = pq->front;
    *pn = pqn->data;
    if(!pqn->next) pq->rear = NULL;
    pq->front = pq->front->next;
    free(pqn);
    pq->size--;
}

int QueueSize(Queue *pq)
{
    return pq->size;
}

void TraverseQueue(Queue *pq, void (*pf)(Queue_Entry))
{
    //Node *pqn = pq->front;
    //while(pqn){
    //   (*pf)(pqn->data);
    //    pqn = pqn->next;
    //}
    for(Node *pqn = pq->front; pqn; pqn = pqn->next)
    {
        (*pf)(pqn->data);
    }
}

void ClearQueue(Queue *pq)
{
    while(pq->front)
    {
        pq->rear = pq->front->next;
        free(pq->front);
        pq->front = pq->rear;
    }
    pq->size = 0;
}
