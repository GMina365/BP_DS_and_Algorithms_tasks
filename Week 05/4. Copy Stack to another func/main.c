#include <stdio.h>
#include <stdlib.h>
#include "stack.h"


int main()
{
    Stack s, sc;
    int tst[5] = {11,6,3,9,7};
    int element, c_element;
    CreatStack(&s);
    CreatStack(&sc);
    for(int i = 0; i < 5; i++)
    {
        Push((tst+i), &s);
    }
    CopyStack(&sc, &s); //copy stack
    printf("size_of_stack = %d, size_of_stack_copy = %d\n\n",StackSize(&s), StackSize(&sc));
    for(int i = 0; i < 5; i++)
    {
        Pop(&element, &s);
        Pop(&c_element, &sc);
        printf("stack_element %d = %.2d, copied_stack_element %d = %.2d\n", i, element, i, c_element);
    }

    return 0;
}
