#include <stdio.h>
#include <stdlib.h>
#include "stack.h"


int main()
{
    Stack s;
    int tst[7] = {11,6,3,9,7,22,4};
    int size, ele;
    CreatStack(&s);
    for(int i = 0; i < 7; i++)
    {
        Push((tst+i), &s);
    }
    size = StackSize(&s); //stack size
    printf("size_of_stack = %d\n\n", size);
    Pop(&ele, &s);
    size = StackSize(&s);
    printf("size_of_stack_after_pop = %d\n",size);
    return 0;
}
