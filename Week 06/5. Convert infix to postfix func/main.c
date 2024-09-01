#include <stdio.h>
#include <stdlib.h>
#include "stack_linked.h"

int preced(char c)
{
    switch(c)
    {
    case '+':
        return 1;
        break;
    case '-':
        return 1;
        break;
    case '*':
        return 2;
        break;
    case '/':
        return 2;
        break;
    case '(':
        return 3;
        break;
    default:
        return 0;
    }
}

Stack postfix(char *inf)
{
    Stack oprtr, posf;
    char ct = -1, ct2 = -1;
    CreatStack(&oprtr);
    CreatStack(&posf);
    for(int i = 0; inf[i] != '\0'; i++)
    {
        if(preced(inf[i]))
        {
            while(ct2 != '(' && (preced(inf[i]) < preced(ct2) || preced(inf[i]) == preced(ct2)))
            {
                Pop(&ct2, &oprtr);
                Push(&ct2, &posf);
                if(!StackEmpty(&oprtr)) StackTop(&ct2, &oprtr);
                else ct2 = -1;
            }
            Push(&inf[i], &oprtr);
            StackTop(&ct2, &oprtr);
        }
        else
        {
            if(inf[i] == ')')
            {
                StackTop(&ct, &oprtr);
                while(ct != '(')
                {
                    Pop(&ct, &oprtr);
                    if(ct != '(') Push(&ct, &posf);
                }
                if(!StackEmpty(&oprtr)) StackTop(&ct2, &oprtr);
                else ct2 = -1;
            }
            else Push(&inf[i], &posf);
        }
    }
    while(!StackEmpty(&oprtr))
    {
        Pop(&ct2, &oprtr);
        Push(&ct2, &posf);
    }
    ReverseStack(&posf);
    return posf;
}

void ReverseStack(Stack *ps)
{
    Stack rs;
    char c;
    CreatStack(&rs);
    while(!StackEmpty(ps))
    {
        Pop(&c, ps);
        Push(&c, &rs);
    }
    *ps = rs;
}

void display(char c)
{
    printf("%c", c);
}

int main()
{
    Stack s;
    CreatStack(&s);
    char c[16] = "(a+b)*(c+d)+p*h";
    s = postfix(c);
    printf("\ninfix : %s\n\n", c);
    printf("postfix : ");
    TraverseStack(&s, &display);
    printf("\n");
    return 0;
}
