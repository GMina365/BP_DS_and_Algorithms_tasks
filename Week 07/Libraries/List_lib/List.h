#ifndef LIST_H_INCLUDED
#define LIST_H_INCLUDED
#include "../Global_lib/Global.h"

typedef struct ListNode
{
    List_Entry data;
    struct ListNode* next;
} Node;

typedef struct list
{
    Node *head;
    int size;
} List;

void CreatList(List *pl);

int ListEmpty(List *pl);

void InsertList(int pos, List_Entry *pn, List *pl);

int ListFull(List *pl);

void DeleteList(int pos, List_Entry *pn, List *pl);

void RetrieveList(int pos, List_Entry *pn, List *pl);

void ReplaceList(int pos, List_Entry *pn, List *pl);

void DestroyList(List *pl);

int ListSize(List *pl);

void TraverseList(List *pl, void (*pf)(List_Entry));

#endif // LIST_H_INCLUDED
