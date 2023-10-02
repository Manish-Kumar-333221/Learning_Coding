#include<stdio.h>
#include<stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};

void circularLinkedListTraversal(struct Node *ptr)
{
    struct Node *p = ptr;
    int i = 0;
    do
        {
            printf("Element %d: %d\n", i++, ptr->data);
            ptr = ptr->next;
        }
    while (ptr != p);
}

int main()
{
    struct Node *head, *second, *third, *fourth, *fifth, *sixth;

    head  = (struct Node*) malloc(sizeof(struct Node));
    second = (struct Node*) malloc(sizeof(struct Node));
    third = (struct Node*) malloc(sizeof(struct Node));
    fourth = (struct Node*) malloc(sizeof(struct Node));
    fifth = (struct Node*) malloc(sizeof(struct Node));
    sixth = (struct Node*) malloc(sizeof(struct Node));

    head->data = 57;
    head->next = second;

    second->data = 64;
    second->next = third;

    third->data = 94;
    third->next = fourth;

    fourth->data = 76;
    fourth->next = fifth;

    fifth->data = 31;
    fifth->next = sixth;

    sixth->data = 16;
    sixth->next = head;

    printf("Circular Linked List Traversal\n");
    circularLinkedListTraversal(head);

    return 0;
}