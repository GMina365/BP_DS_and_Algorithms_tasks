#ifndef STACK_LINKED_H_INCLUDED
#define STACK_LINKED_H_INCLUDED
#include "../Global_lib/Global.h"

typedef struct StackNode
{
    Stack_Entry data;
    struct StackNode* next;
} Node;

typedef struct stack
{
    struct StackNode *top;
    int size;
} Stack;

void CreatStack(Stack *ps);

int StackFull(Stack *ps);

void Push(Stack_Entry *pn, Stack *ps);

int StackEmpty(Stack *ps);

void Pop(Stack_Entry *pn, Stack *ps);

void StackTop(Stack_Entry *pn, Stack *ps);

int StackSize(Stack *ps);

void ClearStack(Stack *ps);

void TraverseStack(Stack *ps, void (*pf)(Stack_Entry));

#endif // STACK_LINKED_H_INCLUDED
