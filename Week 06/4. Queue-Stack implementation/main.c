#include <stdio.h>
#include <stdlib.h>
#include "stack_linked.h"


void CreatQueue(Stack *pq)
{
    CreatStack(pq);
}

int QueueFull(Stack *pq)
{
    return StackFull(pq);
}

void Append(Stack_Entry *pn, Stack *pq)
{
    Stack pqt;
    Stack_Entry pnt;
    CreatStack(&pqt);
    while(!StackEmpty(pq))
    {
        Pop(&pnt, pq);
        Push(&pnt, &pqt);
    }
    Push(pn, &pqt);
    while(!StackEmpty(&pqt))
    {
        Pop(pn, &pqt);
        Push(pn, pq);
    }
}

int QueueEmpty(Stack *pq)
{
    return StackEmpty(pq);
}

void Serve(Stack_Entry *pn, Stack *pq)
{
    Pop(pn, pq);
}

int QueueSize(Stack *pq)
{
    return StackSize(pq);
}

void TraverseQueue(Stack *pq, void (*pf)(Stack_Entry))
{
    TraverseStack(pq, pf);
}

void ClearQueue(Stack *pq)
{
    ClearStack(pq);
}

void display(char t)
{
    printf("Num = %d\n", t);
}
int main()
{
    Stack s;
    char t[4] = {5, 3, 1, 9};
    char td;
    CreatQueue(&s);
    Append(t, &s);
    Append(t+1, &s);
    Append(t+2, &s);
    Append(t+3, &s);
    Pop(&td, &s);
    TraverseStack(&s, &display);
    printf("\nsize before clear = %d, td = %d\n", StackSize(&s), td);
    ClearStack(&s);
    printf("size after clear = %d\n", StackSize(&s));
    return 0;
}
