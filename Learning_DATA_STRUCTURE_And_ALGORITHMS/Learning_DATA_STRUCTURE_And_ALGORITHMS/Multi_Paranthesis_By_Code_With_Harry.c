#include <stdio.h>
#include <stdlib.h>

struct stack
{
    int size;
    int top;
    char *arr;
};

int isEmpty(struct stack *ptr)
{
    if (ptr->top == -1)
        {
            return 1;
        }
    else
        {
            return 0;
        }
}

int isFull(struct stack *ptr)
{
    if (ptr->top == ptr->size - 1)
        {
            return 1;
        }
    else
        {
            return 0;
        }
}

void push(struct stack* ptr, char val)
{
    if(isFull(ptr))
        {
            printf("Stack Overflow! Cannot push %d to the stack\n", val);
        }
    else
        {
            ptr->top++;
            ptr->arr[ptr->top] = val;
        }
}

char pop(struct stack* ptr)
{
    if(isEmpty(ptr))
        {
            printf("Stack Underflow! Cannot pop from the stack\n");
            return -1;
        }
    else
        {
            char val = ptr->arr[ptr->top];
            ptr->top--;
            return val;
        }
}

char stackTop(struct stack* sp)
{
    return sp->arr[sp->top];
}

int match(char a, char b)
{
    if(a=='{' && b=='}' || a=='(' && b==')' || a=='[' && b==']')
        {
            return 1;
        }
    return 0;
}

int parenthesisMatch(char exp[])
{
    // Create and initialize the stack
    struct stack* sp = (struct stack*) malloc(sizeof(struct stack));
    sp->size = 100;
    sp->top = -1;
    sp->arr = (char *)malloc(sp->size * sizeof(char));
    char popped_ch;

    for (int i = 0; exp[i]!='\0'; i++)
        {
            if(exp[i]=='(' || exp[i]=='{' || exp[i]=='[')
                {
                    push(sp, exp[i]);
                }
            else if(exp[i]==')'|| exp[i]=='}' || exp[i]==']')
                {
                    if(isEmpty(sp))
                        {
                            return 0;
                        }
                    popped_ch = pop(sp);
                    if(!match(popped_ch, exp[i]))
                        {
                            return 0;
                        }
                }
        }

    if(isEmpty(sp))
        {
            return 1;
        }
    else
        {
            return 0;
        }

}

void result(char exp[])
{
    puts(exp);
    parenthesisMatch(exp) ? printf("The parenthesis are balanced") : printf("The parenthesis are not balanced");

    printf("\n\n");
}

int main()
{
    char exp[] = {"{7 - (3 - 2) + [8 + (99 - 11)]}"};
    result(exp);

    strcpy(exp, "([a * a - (3 + 2])");
    result(exp);

    strcpy(exp, "([7 - 9} - 7)");
    result(exp);

    strcpy(exp, "(11 + {23 - 8 * 2} - [33 + 1])");
    result(exp);

    strcpy(exp, "(8){((9 - 8))}");
    result(exp);

    strcpy(exp, "(8){((9 - ]8)})");
    result(exp);

    strcpy(exp, "[(8)]{((9 - 8)})");
    result(exp);

    strcpy(exp, "[4 - 6](8){((9 - 8))}");
    result(exp);

    strcpy(exp, "[4-6]((8){(9-8)})");
    result(exp);

    strcpy(exp, "[(8)]{((9 - 8))}");
    result(exp);

    strcpy(exp, ")[(8)]{((9 - 8))}");
    result(exp);

    strcpy(exp, "([(8)]{((9 - 8))}");
    result(exp);

    strcpy(exp, "[(8)]{((9 - 8))}(");
    result(exp);

    strcpy(exp, "[(8)]{((9 - 8))})");
    result(exp);

    return 0;
}