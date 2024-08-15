#include <stdio.h>
#include <stdlib.h>
#include "stack.h"

void CreatStack(Stack *ps)
{
    ps->top = 0;
}

int StackFull(Stack *ps)
{
    return ps->top == 10;
}

void Push(Stack_Entry *pn, Stack *ps)
{
    ps->entry[ps->top++] = *pn;
}

int StackEmpty(Stack *ps)
{
    return !(ps->top);
}

void Pop(Stack_Entry *pn, Stack *ps)
{
    *pn = ps->entry[--ps->top];
}

void StackTop(Stack_Entry *pn, Stack *ps)
{
    *pn = ps->entry[ps->top-1];
}

int StackSize(Stack *ps)
{
    return ps->top;
}

void ClearStack(Stack *ps)
{
    ps->top = 0;
}

void TraverseStack(Stack *ps, void (*pf)(Stack_Entry))
{
    for(int i = ps->top; i > 0; i--)
    {
        (*pf) (ps->entry[i-1]);
    }
}

void FindMin(Stack_Entry *pn, Stack *ps)
{
    *pn = ps->entry[ps->top - 1];
    for(int i = ps->top - 1; i > 0; i--)
    {
        if(ps->entry[i-1] < *pn) *pn = ps->entry[i-1];
    }
}

void CopyStack(Stack *ps_copy, Stack *ps)
{
    *ps_copy = *ps;
}
