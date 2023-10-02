#include <stdio.h>
#include <stdlib.h>

struct Node *f = NULL;
struct Node *r = NULL;

struct Node
{
    int index;
    int data;
    struct Node *next;
};

void linkedListTraversal()
{
    struct Node *ptr = f;
    printf("Printing the elements of this linked list\n");
    while (ptr != NULL)
        {
            printf("Element: %d\n", ptr->data);
            ptr = ptr->next;
        }
}

void enqueue(int val)
{
    struct Node *n = (struct Node *) malloc(sizeof(struct Node));
    if(n==NULL)
        {
            printf("Queue is Full");
        }
    else
        {
            n->data = val;
            n->next = NULL;
            if(f==NULL)
                {
                    f=r=n;
                    n->index = 0;
                }
            else
                {
                    n->index = r->index+1;
                    r->next = n;
                    r=n;
                }
        }
}

int dequeue()
{
    int val = -1;
    struct Node *ptr = f;
    if(f==NULL)
        {
            printf("Queue is Empty\n");
        }
    else
        {
            f = f->next;
            val = ptr->data;
            free(ptr);
        }
    return val;
}

int main()
{
    linkedListTraversal();

    printf("Dequeuing element %d\n", dequeue());
    enqueue(34);
    enqueue(4);
    enqueue(7);
    enqueue(17);

    linkedListTraversal();

    printf("Dequeuing element[%d] %d\n", f->index, dequeue());
    printf("Dequeuing element[%d] %d\n", f->index, dequeue());
    printf("Dequeuing element[%d] %d\n", f->index, dequeue());
    printf("Dequeuing element[%d] %d\n", f->index, dequeue());

    enqueue(34);
    enqueue(4);
    enqueue(7);
    enqueue(17);
    printf("Dequeuing element[%d] %d\n", f->index, dequeue());
    printf("Dequeuing element[%d] %d\n", f->index, dequeue());
    printf("Dequeuing element[%d] %d\n", f->index, dequeue());
    printf("Dequeuing element[%d] %d\n", f->index, dequeue());

    return 0;
}
