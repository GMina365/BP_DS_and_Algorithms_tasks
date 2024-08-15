#ifndef QUEUE_H_INCLUDED
#define QUEUE_H_INCLUDED
#define MAXQUEUE 10

typedef int Queue_Entry;

typedef struct queue{
    int front;
    int rear;
    int size;
    Queue_Entry entry[MAXQUEUE];
}Queue;

void CreatQueue(Queue *pq);

int QueueFull(Queue *pq);

void Append(Queue_Entry *pn, Queue *pq);

int QueueEmpty(Queue *pq);

void Serve(Queue_Entry *pn, Queue *pq);

int QueueSize(Queue *pq);

void TraverseQueue(Queue *pq, void (*pf)(Queue_Entry));

void ClearQueue(Queue *pq);

#endif // QUEUE_H_INCLUDED
