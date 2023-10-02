#include<stdio.h>
#include<stdlib.h>

struct DEQueue
{
    int index;
    int data;
    struct DEQueue *next;
};

void queueStackTraversal(struct DEQueue *ptr)
{
    printf("Queue Traversal:\n");
    while (ptr != NULL)
        {
            printf("Element[%d]: %d\n", ptr->index, ptr->data);
            ptr = ptr->next;
        }
}

int isEmpty(struct DEQueue *ptr)
{
    if (ptr == NULL)
        return 1;
    else
        return 0;
}

void enqueueR(struct DEQueue **f, struct DEQueue **r, int data)
{
    struct DEQueue *p = (struct DEQueue*) malloc(sizeof(struct DEQueue));
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
            printf("Element[%d]: %d enqueued in the Rear of the  Queue.\n", p->index, data);
        }
    else
        {
            printf("Queue Overflow, Cannot enqueue element %d in the Queue.\n", data);
        }
}

void enqueueF(struct DEQueue **f, struct DEQueue **r, int data)
{
    struct DEQueue *p = (struct DEQueue*) malloc(sizeof(struct DEQueue));
    if (!isEmpty(p))
        {
            p->data = data;
            p->next = *f;
            if (isEmpty(*f))
                {
                    *r = *f = p;
                    p->index = 0;
                }
            else
                {
                    p->index = (*f)->index - 1;
                    *f = p;
                }
            printf("Element[%d]: %d enqueued in the Front of the Queue.\n", p->index, data);

        }
    else
        {
            printf("Queue Overflow, Cannot enqueue element %d in the Queue.\n", data);
        }
}

int dequeueF(struct DEQueue **f)
{
    int data = -1;
    struct DEQueue *q = *f;
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

int dequeueR(struct DEQueue **f, struct DEQueue **r)
{
    int data = -1;
    struct DEQueue *q = *f;
    if (!isEmpty(*f))
        {

            if (q == *r)
                {
                    data = (*f)->data;
                    *f = *r = NULL;
                    free(q);
                }
            else
                {
                    while (q->next != *r)
                        {
                            q = q->next;
                        }
                    data = (*r)->data;
                    struct DEQueue *d = r;
                    *r = q;
                    (*r)->next = NULL;
                    free(d);
                }

        }
    else
        {
            printf("Queue Underflow, Cannot dequeue elements from the Queue.\n");
        }
    return data;
}

void resultF(struct DEQueue **ptr)
{
    int index;
    !isEmpty(*ptr) ? index = (*ptr)->index : "";
    int data = dequeueF(&(*ptr));
    if (data != -1)
        {
            printf("Element[%d]: %d is dequeued from the Front of the Queue.\n", index, data);
        }
}

void resultR(struct DEQueue **f, struct DEQueue **r)
{
    int index;
    !isEmpty(*f) ? index = (*r)->index : "";
    int data = dequeueR(&(*f), &(*r));
    if (data != -1)
        {
            printf("Element[%d]: %d is dequeued from the Rear of the Queue.\n", index, data);
        }
}

int main()
{
    struct DEQueue *f = NULL, *r = NULL;

    enqueueF(&f, &r, 56);
    enqueueF(&f, &r, 74);
    enqueueR(&f, &r, 42);
    enqueueR(&f, &r, 91);
    enqueueR(&f, &r, 82);
    enqueueR(&f, &r, 83);
    enqueueR(&f, &r, 76);
    enqueueF(&f, &r, 98);
    enqueueR(&f, &r, 25);
    enqueueR(&f, &r, 86);
    enqueueR(&f, &r, 80);
    enqueueR(&f, &r, 46);
    enqueueF(&f, &r, 73);
    enqueueR(&f, &r, 39);
    enqueueR(&f, &r, 55);
    enqueueR(&f, &r, 12);
    enqueueF(&f, &r, 14);

    printf("\n\n");

    queueStackTraversal(f);

    printf("\n\n");

    resultR(&f, &r);
    resultR(&f, &r);
    resultR(&f, &r);
    resultR(&f, &r);
    resultR(&f, &r);
    resultR(&f, &r);
    resultR(&f, &r);
    resultF(&f);
    resultF(&f);
    resultF(&f);
    resultF(&f);
    resultF(&f);
    resultF(&f);
    resultF(&f);
    resultF(&f);
    resultR(&f, &r);
    resultF(&f);
    resultR(&f, &r);
    resultF(&f);
    resultR(&f, &r);

    printf("\n\n");

    enqueueR(&f, &r, 26);
    enqueueF(&f, &r, 57);

    printf("\n\n");

    resultF(&f);
    resultR(&f, &r);
    resultF(&f);
    resultR(&f, &r);

    return 0;
}