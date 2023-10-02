#include<stdio.h>
#include<stdlib.h>

struct circularQueue
{
    int size;
    int f;
    int r;
    int* arr;
};


int isEmpty(struct circularQueue *q)
{
    if(q->r==q->f)
        {
            return 1;
        }
    return 0;
}

int isFull(struct circularQueue *q)
{
    if((q->r+1)%q->size == q->f)
        {
            return 1;
        }
    return 0;
}

void enqueue(struct circularQueue *q, int val)
{
    if(isFull(q))
        {
            printf("This Queue is full, Cannot enqueue element: %d in the Queue\n", val);
        }
    else
        {
            q->r = (q->r +1)%q->size;
            q->arr[q->r] = val;
            printf("Enqued element[%d]: %d\n", q->r, val);
        }
}

int dequeue(struct circularQueue *q)
{
    int a = -1;
    if(isEmpty(q))
        {
            printf("This Queue is empty\n");
        }
    else
        {
            q->f = (q->f +1)%q->size;
            a = q->arr[q->f];
        }
    return a;
}

void result(struct circularQueue *ptr)
{
    int data = dequeue(ptr);
    if (data != -1)
        {
            printf("Element[%d] %d is dequeued from the Queue.\n", ptr->f, data);
        }
}

int main()
{
    struct circularQueue q;
    q.size = 10;
    q.f = q.r = 0;
    q.arr = (int*) malloc(q.size*sizeof(int));

    // Enqueue few elements
    enqueue(&q, 56);
    enqueue(&q, 74);
    enqueue(&q, 42);
    enqueue(&q, 91);
    enqueue(&q, 82);
    enqueue(&q, 83);
    enqueue(&q, 76);
    result(&q);
    result(&q);
    result(&q);
    enqueue(&q, 98);
    enqueue(&q, 25);
    enqueue(&q, 86);
    enqueue(&q, 80);
    enqueue(&q, 46);
    enqueue(&q, 73);

    printf("\n\n");

    result(&q);
    result(&q);
    result(&q);
    result(&q);
    result(&q);
    result(&q);
    result(&q);
    result(&q);
    result(&q);
    result(&q);
    result(&q);
    result(&q);

    return 0;
}
