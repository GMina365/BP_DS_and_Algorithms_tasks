#include <stdio.h>
#include <stdlib.h>
#include "../Libraries/List_lib/List.h"

void display(char c)
{
    printf("%c, ", c);
}

void ReverseList(List *pl)
{
    char n;
    List lt;
    CreatList(&lt);
    while(!ListEmpty(pl))
    {
        DeleteList(0, &n, pl);
        InsertList(0, &n, &lt);
    }
    *pl = lt;
}

int main()
{
    List l;
    CreatList(&l);
    char n[] = "abcd";
    InsertList(0, &n[0], &l);
    InsertList(1, &n[1], &l);
    InsertList(2, &n[2], &l);
    InsertList(3, &n[3], &l);
    printf("\nbefore reverse : ");
    TraverseList(&l, &display);
    ReverseList(&l);
    printf("\nafter reverse :  ");
    TraverseList(&l, &display);
    printf("\n");
    return 0;
}
