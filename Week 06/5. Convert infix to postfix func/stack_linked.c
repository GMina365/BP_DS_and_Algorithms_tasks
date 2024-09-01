#include <stdio.h>
#include <stdlib.h>
#include "stack_linked.h"

void CreatStack(Stack *ps)
{
    ps->top = NULL;
    ps->size = 0;
}

int StackFull(Stack *ps)
{
    return 0;
}

void Push(Stack_Entry *pn, Stack *ps)
{
    Node *psn = (Node*)malloc(sizeof(Node));
    psn->data = *pn;
    psn->next = ps->top;
    ps->top = psn;
    ps->size++;
}

int StackEmpty(Stack *ps)
{
    return ps->top == NULL;
}

void Pop(Stack_Entry *pn, Stack *ps)
{
    Node *psn = ps->top;
    *pn = psn->data;
    ps->top = ps->top->next;
    free(psn);
    ps->size--;
}

void StackTop(Stack_Entry *pn, Stack *ps)
{
    *pn = ps->top->data;
}

int StackSize(Stack *ps)
{
    return ps->size;
}

void ClearStack(Stack *ps)
{
    Node *psn = ps->top;
    while(psn){
        ps->top = ps->top->next;
        free(psn);
        psn = ps->top;
    }
    ps->size = 0;
}

void TraverseStack(Stack *ps, void (*pf)(Stack_Entry))
{
    Node *psn = ps->top;
    while(psn){
        (*pf)(psn->data);
        psn = psn->next;
    }
}
