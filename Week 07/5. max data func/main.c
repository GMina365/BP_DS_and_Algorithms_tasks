#include <stdio.h>
#include <stdlib.h>
#include "../Libraries/List_lib/List.h"

void display(char c)
{
    printf("%c, ", c);
}

int ListMax(List *pl)
{
    int i = 0, max, num;
    while(i < ListSize(pl))
    {
        RetrieveList(i++, &num, pl);
        if(i == 1 || max < num) max = num;
    }
    return max;
}

int main()
{
    List l;
    CreatList(&l);
    int max;
    char n[] = {5, 10, 12, 22, 5, 14};
    InsertList(0, &n[0], &l);
    InsertList(1, &n[1], &l);
    InsertList(2, &n[2], &l);
    InsertList(3, &n[3], &l);
    InsertList(4, &n[4], &l);
    InsertList(5, &n[5], &l);
    max = ListMax(&l);
    printf("maximum node = %d", max);
    return 0;
}
