#include<stdio.h>

struct Stack
{
    int size;
    int top;
    int *arr;
};

int isEmpty(struct Stack *ptr)
{
    if (ptr->top != -1)
        {
            return 1;
        }
    return 0;
}

int isFull(struct Stack *ptr)
{
    if (ptr->top != ptr->size - 1)
        {
            return 1;
        }
    return 0;
}

int main()
{
    struct Stack *s = (struct Node*) malloc(sizeof(struct Stack));
    s->size = 6;
    s->top = -1;
    s->arr = (int *) malloc(s->size * sizeof(int));

    isEmpty(s) ? printf("Stack is not Empty\n") : printf("Stack is Empty\n");

    isFull(s) ? printf("Stack is not Full\n") : printf("Stack is Full\n");

    printf("\n");

	s->top++;
    s->arr[s->top] = 63;

	s->top++;
    s->arr[s->top] = 56;

	s->top++;
    s->arr[s->top] = 23;

    isEmpty(s) ? printf("Stack is not Empty\n") : printf("Stack is Empty\n");

    isFull(s) ? printf("Stack is not Full\n") : printf("Stack is Full\n");

    printf("\n");

	// s->top++;
    s->arr[++(s->top)] = 89;

	// s->top++;
    s->arr[++(s->top)] = 92;

	// s->top++;
    s->arr[++(s->top)] = 34;

    isEmpty(s) ? printf("Stack is not Empty\n") : printf("Stack is Empty\n");

    isFull(s) ? printf("Stack is not Full\n") : printf("Stack is Full\n");

    printf("\n");

    printf("Elememt[%d]: %d\n", s->top, s->arr[s->top--]);
    printf("Elememt[%d]: %d\n", s->top, s->arr[s->top--]);
    printf("Elememt[%d]: %d\n", s->top, s->arr[s->top--]);
    printf("Elememt[%d]: %d\n", s->top, s->arr[s->top--]);
    printf("Elememt[%d]: %d\n", s->top, s->arr[s->top--]);
    printf("Elememt[%d]: %d\n", s->top, s->arr[s->top--]);

    free(s->arr);
    free(s);

    return 0;
}