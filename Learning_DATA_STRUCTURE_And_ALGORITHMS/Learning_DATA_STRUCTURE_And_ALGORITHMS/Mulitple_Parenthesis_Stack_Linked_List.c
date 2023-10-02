#include<stdio.h>
#include<stdlib.h>

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

struct Node* push(struct Node *ptr, char exp)
{
    struct Node *p = (struct Node*) malloc(sizeof(struct Node));
    p->exp = exp;
    p->next = ptr;
    return p;
}

int pop(struct Node **ptr, char exp)
{
    if (!isEmpty(*ptr) && ((*ptr)->exp == '(' && exp == ')' || (*ptr)->exp == '{' && exp == '}' || (*ptr)->exp == '[' && exp == ']'))
        {
            struct Node *p = *ptr;
            (*ptr) = (*ptr)->next;
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
            if (exp[i] == '('|| exp[i] == '{' || exp[i] == '[')
                {
                    head = push(head, exp[i]);
                }
            else if ((exp[i] == ')'|| exp[i] == '}' || exp[i] == ']') && !pop(&head, exp[i]))
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
    char exp[] = {"{7 - (3 - 2) + [8 + (99 - 11)]}"};
    check(exp);

    strcpy(exp, "([a * a - (3 + 2])");
    check(exp);

    strcpy(exp, "([7 - 9} - 7)");
    check(exp);

    strcpy(exp, "(11 + {23 - 8 * 2} - [33 + 1])");
    check(exp);

    strcpy(exp, "(8){((9 - 8))}");
    check(exp);

    strcpy(exp, "(8){((9 - ]8)})");
    check(exp);

    strcpy(exp, "[(8)]{((9 - 8)})");
    check(exp);

    strcpy(exp, "[4 - 6](8){((9 - 8))}");
    check(exp);

    strcpy(exp, "[4 - 6]((8){(9 - 8)})");
    check(exp);

    strcpy(exp, "[(8)]{((9 - 8))}");
    check(exp);

    strcpy(exp, ")[(8)]{((9 - 8))}");
    check(exp);

    strcpy(exp, "([(8)]{((9 - 8))}");
    check(exp);

    strcpy(exp, "[(8)]{((9 - 8))}(");
    check(exp);

    strcpy(exp, "[(8)]{((9 - 8))})");
    check(exp);

    return 0;
}