#ifndef STACK_H_INCLUDED
#define STACK_H_INCLUDED
#define MAX_STACK 100

typedef int Stack_Entry;

typedef struct stack
{
    int top;
    Stack_Entry entry[MAX_STACK];
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

void FindMin(Stack_Entry *pn, Stack *ps);

#endif // STACK_H_INCLUDED
