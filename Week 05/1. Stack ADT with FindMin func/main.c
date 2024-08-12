#include <stdio.h>
#include <stdlib.h>
#include "stack.h"


int main()
{
    Stack s;
    int tst[5] = {11,6,3,9,5};
    int tt;
    CreatStack(&s);
    for(int i = 0; i < 5; i++){
        Push((tst+i), &s);
    }
    FindMin(&tt, &s);
    printf("%d", tt);
    return 0;
}
