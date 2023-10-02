#include<stdio.h>
#include<stdlib.h>

struct Queue
{
    int size;
    int *arr;
    int f;
    int b;
};

void queueStackTraversal(struct Queue *ptr)
{
    printf("Queue Traversal:\n");
    int i = ptr->f;
    while (i != ptr->b)
        {
            i = (i + 1) % ptr->size;
            printf("Element[%d]: %d\n", i, ptr->arr[i]);
        }
}

int isEmpty(struct Queue *ptr)
{
    if (ptr->b == ptr->f)
        {
            return 1;
        }
    else
        {
            return 0;
        }
}

int isFull(struct Queue *ptr)
{
    if ((ptr->b + 1) % ptr->size == ptr->f)
        {
            return 1;
        }
    else
        {
            return 0;
        }
}

void enqueue(struct Queue *ptr, int data)
{
    if (isFull(ptr))
        {
            printf("Queue Overflow Cannot enqueue element %d in the Queue.\n", data);
        }
    else
        {
            struct Queue *p = ptr;
            p->b = (p->b + 1) % p->size;
            p->arr[p->b] = data;
            printf("Element[%d]: %d enqueued in the Queue.\n", ptr->b, data);
        }

}

int dequeue(struct Queue *ptr)
{
    if (!isEmpty(ptr))
        {
            ptr->f = (ptr->f + 1) % ptr->size;
            return ptr->arr[ptr->f];
        }
    printf("Queue Underflow Cannot dequeue elements from the Queue.\n");
    return -1;
}

void result(struct Queue *ptr)
{
    int data = dequeue(ptr);
    if (data != -1)
        {
            printf("Element[%d]: %d is dequeued from the Queue.\n", ptr->f, data);
        }
}

int main()
{
    struct Queue *st = (struct Queue*) malloc(sizeof(struct Queue));
    st->size = 10;
    st->arr = (int*) malloc(st->size * sizeof(int));
    st->f = st->b = -1;

    enqueue(st, 56);
    enqueue(st, 74);
    enqueue(st, 42);
    enqueue(st, 91);
    enqueue(st, 82);
    enqueue(st, 83);
    enqueue(st, 76);
    result(st);
    result(st);
    result(st);
    enqueue(st, 98);
    enqueue(st, 25);
    enqueue(st, 86);
    enqueue(st, 80);
    enqueue(st, 46);
    enqueue(st, 73);

    printf("\n\n");

    queueStackTraversal(st);

    printf("\n\n");

    result(st);
    result(st);
    result(st);
    result(st);
    result(st);
    result(st);
    result(st);
    result(st);
    result(st);
    result(st);
    result(st);
    result(st);
    result(st);

    free(st->arr);
    free(st);
    return 0;
}