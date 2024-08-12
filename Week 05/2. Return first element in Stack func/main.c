#include <stdio.h>
#include <stdlib.h>
#include "stack.h"


int main()
{
    Stack s;
    int tst[5] = {11,6,3,9,7};
    int tt;
    CreatStack(&s);
    for(int i = 0; i < 5; i++)
    {
        Push((tst+i), &s);
    }
    printf("size_before = %d\n", StackSize(&s));
    StackTop(&tt, &s);
    printf("element = %d, size_after = %d", tt, StackSize(&s));
    return 0;
}
