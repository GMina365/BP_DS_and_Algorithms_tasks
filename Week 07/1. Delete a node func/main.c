#include <stdio.h>
#include <stdlib.h>
#include "List.h"

void display(char c){
    printf("char = %c\n", c);
}

int main()
{
    List l;
    CreatList(&l);
    char n[] = "abcd", c;
    InsertList(0, &n[0], &l);
    InsertList(1, &n[1], &l);
    InsertList(2, &n[2], &l);
    InsertList(3, &n[3], &l);
    DeleteList(2, &c, &l);
    TraverseList(&l, &display);
    printf("Deleted node = %c\n", c);
    printf("size = %d", ListSize(&l));
    return 0;
}
