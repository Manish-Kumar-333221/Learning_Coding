#include<stdio.h>
#include<stdlib.h>

struct Queue
{
    int index;
    int data;
    struct Queue *next;
};

void queueStackTraversal(struct Queue *ptr)
{
    printf("Queue Traversal:\n");
    while (ptr != NULL)
        {
            printf("Element[%d]: %d\n", ptr->index, ptr->data);
            ptr = ptr->next;
        }
}

int isEmpty(struct Queue *ptr)
{
    if (ptr == NULL)
        return 1;
    else
        return 0;
}

void enqueue(struct Queue **f, struct Queue **r, int data)
{
    struct Queue *p = (struct Queue*) malloc(sizeof(struct Queue));
    if (!isEmpty(p))
        {
            p->data = data;
            p->next = NULL;
            if (isEmpty(*f))
                {
                    *r = *f = p;
                    p->index = 0;
                }
            else
                {
                    p->index = (*r)->index + 1;
                    (*r)->next = p;
                    *r = p;
                }
            printf("Element[%d]: %d enqueued in the Queue.\n", p->index, data);
        }
    else
        {
            printf("Queue Overflow, Cannot enqueue element %d in the Queue.\n", data);
        }
}

int dequeue(struct Queue **f)
{
    int data = -1;
    struct Queue *q = *f;
    if (!isEmpty(*f))
        {
            data = (*f)->data;
            *f = (*f)->next;
            free(q);
        }
    else
        {
            printf("Queue Underflow, Cannot dequeue elements from the Queue.\n");
        }
    return data;
}

void result(struct Queue **ptr)
{
    int index;
    !isEmpty(*ptr) ? index = (*ptr)->index : "";
    int data = dequeue(&(*ptr));
    if (data != -1)
        {
            printf("Element[%d]: %d is dequeued from the Queue.\n", index, data);
        }
}

int main()
{
    struct Queue *f = NULL, *r = NULL;

    enqueue(&f, &r, 56);
    enqueue(&f, &r, 74);
    enqueue(&f, &r, 42);
    enqueue(&f, &r, 91);
    enqueue(&f, &r, 82);
    enqueue(&f, &r, 83);
    enqueue(&f, &r, 76);
    enqueue(&f, &r, 98);
    enqueue(&f, &r, 25);
    enqueue(&f, &r, 86);
    enqueue(&f, &r, 80);
    enqueue(&f, &r, 46);
    enqueue(&f, &r, 73);
    enqueue(&f, &r, 39);
    enqueue(&f, &r, 55);
    enqueue(&f, &r, 12);
    enqueue(&f, &r, 14);

    printf("\n\n");

    queueStackTraversal(f);

    printf("\n\n");

    result(&f);
    result(&f);
    result(&f);
    result(&f);
    result(&f);
    result(&f);
    result(&f);
    result(&f);
    result(&f);
    result(&f);
    result(&f);
    result(&f);
    result(&f);
    result(&f);
    result(&f);
    result(&f);
    result(&f);
    result(&f);
    result(&f);
    result(&f);

    printf("\n\n");

    enqueue(&f, &r, 26);
    enqueue(&f, &r, 57);

    printf("\n\n");

    result(&f);
    result(&f);
    result(&f);

    return 0;
}