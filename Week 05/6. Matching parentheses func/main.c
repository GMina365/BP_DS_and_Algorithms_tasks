#include <stdio.h>
#include <stdlib.h>
#include "stack.h"

int Parentheses_match(char seq[])
{
    char open_Parentheses[3] = {'(', '[', '{'};
    char closed_Parentheses[3] = {')', ']', '}'};
    char temp;
    Stack s;
    int i = 0;
    CreatStack(&s);
    while (seq[i] != '\0')
    {
        for (int j = 0; j < 3; j++)
        {
            if (seq[i] == open_Parentheses[j])
            {
                Push((seq + i), &s);
                break;
            }
            else if (seq[i] == closed_Parentheses[j])
            {
                if (StackEmpty(&s))
                    return 0;
                Pop(&temp, &s);
                if (temp != open_Parentheses[j])
                    return 0;
                break;
            }
        }
        i++;
    }
    if (!StackEmpty(&s))
        return 0;
    return 1;
}

int main()
{
    char seq[50];
    printf("\nEnter a sequence: ");
    scanf("%[^\n]s", seq);
    int check = Parentheses_match(seq);
    if (check)
        printf("\nAll matched.\n\n");
    else
        printf("\nThere is no match!\n\n");
    return 0;
}
