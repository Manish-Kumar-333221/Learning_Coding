#include<stdio.h>
#include<stdlib.h>

struct Stack
{
    int size;
    int top;
    int *arr;
};

int isEmpty(struct Stack *ptr)
{
    if (ptr->top == -1)
        {
            return 1;
        }
    return 0;
}

int isFull(struct Stack *ptr)
{
    if (ptr->top == ptr->size - 1)
        {
            return 1;
        }
    return 0;
}

int push(struct Stack *ptr, int data)
{
    ptr->top++;
    if (isFull(ptr))
        {
            ptr->arr[ptr->top] = data;
            printf("Stack Full\n");
            return 0;
        }
    ptr->arr[ptr->top] = data;
    return 1;
}

int pop(struct Stack *ptr)
{
    if (isEmpty(ptr))
        {
            printf("\nStack Empty\n\n");
            return 0;
        }
    return 1;
}

int main()
{
    struct Stack *s = (struct Stack*) malloc(sizeof(struct Stack));
    s->size = 6;
    s->top = -1;
    s->arr = (int *) malloc(s->size * sizeof(int));
    printf("Stack Created Successfully\n");

    int data;
    int i = 0;
    do
        {
            printf("Enter the element[%d]: ", s->top + 1);
            scanf("%d", &data);
        }
    while (push(s, data));

    while (pop(s))
        {
            printf("\nPoped Elememt[%d]: %d from the stack", s->top, s->arr[(s->top)]);
            s->top--;
        }

    free(s->arr);
    free(s);

    return 0;
}