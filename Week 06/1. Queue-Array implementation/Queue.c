#include <stdio.h>
#include <stdlib.h>
#include "Queue.h"

void CreatQueue(Queue *pq){
    pq->front = 0;
    pq->rear = -1;
    pq->size = 0;
}

int QueueFull(Queue *pq){
    return (pq->size == MAXQUEUE);
}

void Append(Queue_Entry *pn, Queue *pq){
    pq->rear = (pq->rear + 1) % MAXQUEUE;
    pq->entry[pq->rear] = *pn;
    pq->size++;
}

int QueueEmpty(Queue *pq){
    return !(pq->size);
}

void Serve(Queue_Entry *pn, Queue *pq){
    *pn = pq->entry[pq->front];
    pq->front = (pq->front + 1) % MAXQUEUE;
    pq->size--;
}

int QueueSize(Queue *pq){
    return pq->size;
}

void TraverseQueue(Queue *pq, void (*pf)(Queue_Entry)){
    for(int i = pq->front, s = 0; s < pq->size; s++){
        (*pf) (pq->entry[i]);
        i = (i + 1) % MAXQUEUE;
    }
}

void ClearQueue(Queue *pq){
    pq->front = 0;
    pq->rear = -1;
    pq->size = 0;
}
