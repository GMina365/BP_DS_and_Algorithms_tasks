#include <stdio.h>
#include <stdlib.h>
#include "List.h"

void CreatList(List *pl)
{
    pl->head = NULL;
    pl->size = 0;
}

int ListEmpty(List *pl)
{
    return !pl->head;
}

void InsertList(int pos, List_Entry *pn, List *pl)
{
    if(pos <= pl->size)
    {
        Node *l, *lp;
        int i = 0;
        l = (Node*)malloc(sizeof(Node));
        lp = pl->head;
        l->data = *pn;
        l->next = pl->head;
        while(i < pos - 1)
        {
            lp = lp->next;
            i++;
        }
        if(pos)
        {
            l->next = lp->next;
            lp->next = l;
        }
        else pl->head = l;
        pl->size++;

        //Another approach.

        /*Node *l, *lp;
        int i = 0;
        l = (Node*)malloc(sizeof(Node));
        l->data = *pn;
        l->next = pl->head;
        lp = l;
        while(i < pos)
        {
            lp = lp->next;
            i++;
        }
        l->next = lp->next;
        if(pos)lp->next = l;
        else pl->head = lp;
        pl->size++;*/

        //Another approach.

        /*int i = 0;
        Node *l, *lp, *lpt;
        l = (Node*)malloc(sizeof(Node));
        lp = (Node*)malloc(sizeof(Node));
        lpt = lp;
        lp->next = pl->head;
        l->data = *pn;
        while(i < pos)
        {
            lp = lp->next;
            i++;
        }
        l->next = lp->next;
        lp->next = l;
        if(!pos) pl->head = lp->next;
        pl->size++;
        free(lpt);*/
    }
    else printf("POSITION OVERFLOW!!\n");
}

int ListFull(List *pl)
{
    return 0;
}

void DeleteList(int pos, List_Entry *pn, List *pl)
{
    if(pos <= pl->size)
    {
        Node *l = pl->head, *lp;
        int i = 0;
        do
        {
            lp = l;
            if(pos)
            {
                l = l->next;
                i++;
            }
        }while(i < pos);
        *pn = l->data;
        if(pos) lp->next = l->next;
        else pl->head = l->next;
        free(l);
        pl->size--;
    }
    else printf("POSITION OVERFLOW!!\n");
}

void RetrieveList(int pos, List_Entry *pn, List *pl)
{
    if(pos <= pl->size)
    {
        Node *l = pl->head;
        int i = 0;
        while(i < pos)
        {
            l = l->next;
            i++;
        }
        *pn = l->data;
    }
    else printf("POSITION OVERFLOW!!\n");
}

void ReplaceList(int pos, List_Entry *pn, List *pl)
{
    if(pos <= pl->size)
    {
        Node *l = pl->head;
        int i = 0;
        while(i < pos)
        {
            l = l->next;
            i++;
        }
        l->data = *pn;
    }
    else printf("POSITION OVERFLOW!!\n");
}

void DestroyList(List *pl)
{
    Node *l;
    while(pl->head)
    {
        l = pl->head;
        pl->head = pl->head->next;
        free(l);
    }
    pl->size = 0;
}

int ListSize(List *pl)
{
    return pl->size;
}

void TraverseList(List *pl, void (*pf)(List_Entry))
{
    Node *l = pl->head;
    while(l)
    {
        (*pf) (l->data);
        l = l->next;
    }
}
