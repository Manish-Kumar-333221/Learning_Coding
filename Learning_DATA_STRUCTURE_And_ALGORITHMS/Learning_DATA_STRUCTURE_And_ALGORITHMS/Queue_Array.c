#include<stdio.h>
#include<stdlib.h>

struct Queue
{
    int size;
    int *arr;
    int f;
    int r;
};

void queueStackTraversal(struct Queue *ptr)
{
    int i = ptr->f;
    while (i != ptr->r)
        {
            printf("Element %d\n", ptr->arr[i]);
            i++;
        }
}

int isEmpty(struct Queue *ptr)
{
    if (ptr->f != ptr->r)
        {
            return 0;
        }
    else
        return 1;
}

int isFull(struct Queue *ptr)
{
    if (ptr->r != ptr->size)
        return 0;
    else
        return 1;
}

void enqueue(struct Queue *ptr, int data)
{
    if (isFull(ptr))
        {
            printf("Queue Overflow Cannot enqueue element %d in the Queue\n", data);
        }
    else
        {
            ptr->arr[ptr->r++] = data;
            printf("Element %d enqueued in the Queue.\n", data);
        }

}

int dequeue(struct Queue *ptr)
{
    if (!isEmpty(ptr))
        {
            return ptr->arr[ptr->f++];
        }
    printf("Queue Underflow Cannot dequeue element from the Queue\n");
    return -1;
}

void result(struct Queue *ptr)
{
    int data = dequeue(ptr);
    if (data != -1)
        {
            printf("Element %d is dequeued from the Queue.\n", data);
        }
}

int main()
{
    struct Queue *st = (struct Queue*) malloc(sizeof(struct Queue));
    st->size = 10;
    st->arr = (int*) malloc(st->size * sizeof(int));
    st->f = st->r = 0;

    enqueue(st, 56);
    enqueue(st, 74);
    enqueue(st, 42);
    enqueue(st, 91);
    enqueue(st, 82);
    enqueue(st, 83);
    enqueue(st, 76);
    enqueue(st, 98);
    enqueue(st, 25);
    enqueue(st, 86);
    enqueue(st, 80);
    enqueue(st, 46);
    enqueue(st, 73);

    printf("\n\nQueue Traversal:\n");

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