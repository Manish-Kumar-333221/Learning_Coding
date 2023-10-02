#include<stdio.h>

struct Node
{
    char exp;
    struct Node *next;
};

int isEmpty(struct Node *ptr)
{
    if (ptr == NULL)
        {
            return 1;
        }
    else
        {
            return 0;
        }
}

struct Node* push(struct Node *ptr)
{
    struct Node *p = (struct Node*) malloc(sizeof(struct Node));
    p->exp = '(';
    p->next = ptr;
    return p;
}

int pop(struct Node **ptr)
{
    if (!isEmpty(*ptr))
        {
            struct Node *p = *ptr;
            *ptr = p->next;
            free(p);
            return 1;
        }
    else
        {
            printf("Invalid Expression, Parenthesis are not matching!\n\n");
            return 0;
        }
}

void check(char exp[])
{
    puts(exp);
    struct Node *head = NULL;

    for (int i = 0; exp[i] != '\0'; i++)
        {
            if (exp[i] == '(')
                {
                    head = push(head);
                }
            else if (exp[i] == ')' && !pop(&head))
                {
                    return;
                }
        }

    if (isEmpty(head))
        {
            printf("Parenthesis are matching.\n\n");
        }
    else
        {
            printf("Invalid Expression, Parenthesis are not matching!\n\n");
        }

}

int main()
{
    char exp[] = {"3 * 2 - (8 + 1)"};
    check(exp);

    check("((3 * 2) - 1 (8 - 2))");

    check("(8)((*--$$9))");

    check("1 - 3)4 * 8(");

    check("(1 * (8 - 3(7)");

    check("(7 * 8) - 3(7))");

    check("7 - (8 (3 * 4) + 11 + 12)) - 8)");

    return 0;
}