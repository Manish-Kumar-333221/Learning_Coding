#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct Node
{
    int top1;
    char *operator;
    int top2;
    char *postfix;
};

int stackTop(struct Node* ptr)
{
    return ptr->operator[ptr->top1];
}

int isOperator(char expression)
{
    return (expression == '/' || expression == '*' || expression == '+' || expression == '-') ? 1 : 0;
}

int precedence(char expression)
{
    return (expression == '/' || expression == '*') ? 2 : 1;
}

void push(struct Node *ptr, char expression)
{
    ptr->operator[++ptr->top1] = expression;
}

char pop(struct Node *ptr)
{
    return ptr->operator[ptr->top1--];
}

char* infixToPostfix(char expression[])
{
    struct Node *head = (struct Node*) malloc(sizeof(struct Node));
    head->top1 = -1;
    head->operator = (char*) malloc(strlen(expression) + 1 * sizeof(char));
    head->top2 = -1;
    head->postfix = (char*) malloc(strlen(expression) + 1 * sizeof(char));

    int i = 0;
    while(expression[i] != '\0')
        {
            if (isOperator(expression[i]))
                {
                    if(precedence(expression[i]) > precedence(stackTop(head)) || head->top1 == -1)
                        {
                            push(head, expression[i++]);
                            // head->operator[++head->top1] = expression[i];
                        }
                    else
                        {
                            head->postfix[++head->top2] = pop(head);
                            // head->postfix[++head->top2] = head->operator[head->top1--];
                        }
                }
            else
                {
                    head->postfix[++head->top2] = expression[i++];
                }
        }


    while (head->top1 != -1)
        {
            head->postfix[++head->top2] = pop(head);
        }
    head->postfix[++head->top2] = '\0';
    return head->postfix;
}

int main()
{
    char expression[] = "3 + 5 - 2 / 6 * 5 / 4 + 7";
    printf("(Infix expression) %s to (Postfix Expression) is: %s\n\n", expression, infixToPostfix(expression));

    strcpy(expression, "x-y/z-k*d");
    printf("(Infix expression) %s to (Postfix Expression) is: %s\n\n", expression, infixToPostfix(expression));

    return 0;
}