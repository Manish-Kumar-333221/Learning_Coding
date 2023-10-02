#include<stdio.h>

struct Node
{
    int data;
    struct Node *prev;
    struct Node *next;
};

void doublyLinkedListTraversal(struct Node *ptr)
{
    struct Node *p = ptr;
    int i = 0;
    printf("Elements in same order:\n");
    while (ptr != NULL)
        {
            printf("Element %d: %d\n", i++, ptr->data);
            (ptr->next == NULL) ? p = ptr: "" ;
            ptr = ptr->next;
        }

    printf("Elements in reverse order:\n");
    while (p != NULL)
        {
            printf("Element %d: %d\n", --i, p->data);
            p = p->prev;
        }
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
    head->prev = NULL;
    head->next = second;

    second->data = 64;
    second->prev = head;
    second->next = third;

    third->data = 94;
    third->prev = second;
    third->next = fourth;

    fourth->data = 76;
    fourth->prev = third;
    fourth->next = fifth;

    fifth->data = 31;
    fifth->prev = fourth;
    fifth->next = sixth;

    sixth->data = 16;
    sixth->prev = fifth;
    sixth->next = NULL;

    printf("Doubly Linked List Traversal\n");
    doublyLinkedListTraversal(head);

    return 0;
}