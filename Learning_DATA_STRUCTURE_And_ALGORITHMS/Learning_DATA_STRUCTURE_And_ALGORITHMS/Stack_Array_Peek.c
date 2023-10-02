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

void push(struct Stack *ptr, int data)
{
    if (isFull(ptr))
        {
            printf("Stack Overflow, Cannot push element %d in the stack\n", data);
        }
    else
        {
            ptr->top++;
            ptr->arr[ptr->top] = data;
            printf("Pushed Element[%d]: %d in the stack\n", ptr->top, data);
        }
}

int pop(struct Stack *ptr)
{
    if (isEmpty(ptr))
        {
            printf("Stack Underflow, Cannot pop elements from the stack\n");
            return -1;
        }
    else
        {
            int retrn = ptr->arr[(ptr->top)];
            ptr->top--;
            return retrn;
        }
}

void valueAtPeek(struct Stack *s, int peekPosition)
{
    // if (s->top - peekPosition + 1 >= s->size || s->top - peekPosition + 1 < 0)
    if (peekPosition <= 0 || peekPosition > s->top + 1)
        {
            printf("Peek Position %d is an invalid Position\n", peekPosition);
        }
    else
        {
            printf("Value at peek position %d is: %d\n", peekPosition, s->arr[s->top - peekPosition + 1]);
        }
}

int main()
{
    struct Stack *s = (struct Stack*) malloc(sizeof(struct Stack));
    s->size = 6;
    s->top = -1;
    s->arr = (int *) malloc(s->size * sizeof(int));

    printf("Stack Created Successfully\n");

    printf("\nBefore pushing:\n");
    isEmpty(s) ? printf("Stack is Empty\n") : printf("Stack is not Empty\n");
    isFull(s) ? printf("Stack is Full\n") : printf("Stack is not Full\n");
    printf("\n");

    push(s, 63);
    push(s, 56);
    push(s, 23);
    push(s, 89);
    push(s, 92);
    push(s, 34);
    push(s, 255);
    push(s, 478);
    push(s, 853);

    printf("\nAfter pushing:\n");
    isEmpty(s) ? printf("Stack is Empty\n") : printf("Stack is not Empty\n");
    isFull(s) ? printf("Stack is Full\n") : printf("Stack is not Full\n");

    printf("\n");

    for (int i = -1; i <= (s->top + 1) + 2; i++)
        {
            valueAtPeek(s, i);
        }
    printf("\n");

    int index = s->top;
    int popElement = pop(s);
    popElement != -1 ? printf("Poped Element[%d]: %d from the stack\n", index, s->arr[(index)]) : "" ;

    index = s->top;
    popElement = pop(s);
    popElement != -1 ? printf("Poped Element[%d]: %d from the stack\n", index, s->arr[(index)]) : "" ;

    index = s->top;
    popElement = pop(s);
    popElement != -1 ? printf("Poped Element[%d]: %d from the stack\n", index, s->arr[(index)]) : "" ;

    index = s->top;
    popElement = pop(s);
    popElement != -1 ? printf("Poped Element[%d]: %d from the stack\n", index, s->arr[(index)]) : "" ;

    index = s->top;
    popElement = pop(s);
    popElement != -1 ? printf("Poped Element[%d]: %d from the stack\n", index, s->arr[(index)]) : "" ;

    index = s->top;
    popElement = pop(s);
    popElement != -1 ? printf("Poped Element[%d]: %d from the stack\n", index, s->arr[(index)]) : "" ;

    index = s->top;
    popElement = pop(s);
    popElement != -1 ? printf("Poped Element[%d]: %d from the stack\n", index, s->arr[(index)]) : "" ;

    index = s->top;
    popElement = pop(s);
    popElement != -1 ? printf("Poped Element[%d]: %d from the stack\n", index, s->arr[(index)]) : "" ;

    index = s->top;
    popElement = pop(s);
    popElement != -1 ? printf("Poped Element[%d]: %d from the stack\n", index, s->arr[(index)]) : "" ;

    free(s->arr);
    free(s);

    return 0;
}