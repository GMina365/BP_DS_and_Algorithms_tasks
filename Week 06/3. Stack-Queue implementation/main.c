#include <stdio.h>
#include <stdlib.h>
#include "Queue_linked.h"


void CreatStack(Queue *ps)
{
    CreatQueue(ps);
}

int StackFull(Queue *ps)
{
    return QueueFull(ps);
}

void Push(Queue_Entry *pn, Queue *ps)
{
    Queue pst;
    CreatQueue(&pst);
    Append(pn, &pst);
    while(!QueueEmpty(ps))
    {
        Serve(pn, ps);
        Append(pn, &pst);
    }
    *ps = pst;
}

int StackEmpty(Queue *ps)
{
    return QueueEmpty(ps);
}

void Pop(Queue_Entry *pn, Queue *ps)
{
    Serve(pn, ps);
}

void StackTop(Queue_Entry *pn, Queue *ps)
{
    Serve(pn, ps);
    Append(pn, ps);
}

int StackSize(Queue *ps)
{
    return QueueSize(ps);
}

void ClearStack(Queue *ps)
{
    ClearQueue(ps);
}

void TraverseStack(Queue *ps, void (*pf)(Queue_Entry))
{
    TraverseQueue(ps, pf);
}

void display(Queue_Entry pn)
{
    printf("char = %c\n", pn);
}

int main()
{
    Queue q;
    char c1 = 'a', c2 = 'b', c3 = 'c';
    CreatStack(&q);
    Push(&c1, &q);
    Push(&c2, &q);
    Push(&c3, &q);
    TraverseStack(&q, &display);
    printf("\nsize = %d", StackSize(&q));
    return 0;
}
