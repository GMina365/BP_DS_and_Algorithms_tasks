#include <stdio.h>
#include <stdlib.h>
#include "../Libraries/List_lib/List.h"

void display(char c)
{
    printf("%c, ", c);
}

int ListSum(List *pl)
{
    int i = ListSize(pl), num, sum = 0;
    while(i)
    {
        RetrieveList(--i, &num, pl);
        sum = sum + num;
    }
    return sum;
}

int main()
{
    List l;
    CreatList(&l);
    int sum;
    char n[] = {5, 10, 12};
    InsertList(0, &n[0], &l);
    InsertList(1, &n[1], &l);
    InsertList(2, &n[2], &l);
    sum = ListSum(&l);
    printf("nodes sum = %d", sum);
    return 0;
}
