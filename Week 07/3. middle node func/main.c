#include <stdio.h>
#include <stdlib.h>
#include "List.h"

void display(char c)
{
    printf("%c, ", c);
}

char ListMid(List *pl)
{
    char cmid;
    int mid = ListSize(pl)/2;
    RetrieveList(mid, &cmid, pl);
    return cmid;
}

int main()
{
    List l;
    CreatList(&l);
    char n[] = "abc", c;
    InsertList(0, &n[0], &l);
    InsertList(1, &n[1], &l);
    InsertList(2, &n[2], &l);
    c = ListMid(&l);
    printf("middle char : %c", c);
    return 0;
}
