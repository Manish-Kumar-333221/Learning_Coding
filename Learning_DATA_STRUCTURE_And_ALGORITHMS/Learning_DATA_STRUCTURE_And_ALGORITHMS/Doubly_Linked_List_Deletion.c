#include<stdio.h>
#include<stdlib.h>
// To do
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
            (ptr->next == NULL) ? p = ptr : "" ;
            ptr = ptr->next;
        }

    printf("\nElements in reverse order:\n");
    while (p != NULL)
        {
            printf("Element %d: %d\n", --i, p->data);
            p = p->prev;
        }
}

struct Node* doublyDeletionAtFirst(struct Node *ptr)
{
    struct Node *p = ptr;
    ptr = ptr->next;
    ptr->prev = NULL;
    free(p);
    return ptr;
}

struct Node* doublyDeletionAtIndex(struct Node *ptr, int index)
{
    struct Node *p = ptr;
    int i = 0;
    while (i != index - 1)
        {
            p = p->next;
            i++;
        }
    struct Node *q = p->next;
    p->next = q->next;
    q->next->prev = p;
    free(q);
    return ptr;
}

struct Node* doublyDeletionAtEnd(struct Node* ptr)
{
    struct Node *p = ptr;
    struct Node *q = p->next;
    while (q->next != NULL)
        {
            p = p->next;
            q = q->next;
        }
    p->next = NULL;
    free(q);
    return ptr;
}

struct Node* doublyDeletionAfterNode(struct Node *ptr, struct Node *deleteNode)
{
    struct Node *p = deleteNode->next;
    deleteNode->next = p->next;
    p->next->prev = deleteNode;
    free(p);
    return ptr;
}

struct Node* doublyDeletionAtKey(struct Node *ptr, int key)
{
    struct Node *p = ptr;
    while ((p->next->data != key) && (p->next != NULL))
        {
            p = p->next;
        }
    if (p->next->data == key)
        {
            struct Node *q = p->next;
            p->next = q->next;
            p->next->prev = p;
            free(q);
            return ptr;
        }
    return ptr;
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

    printf("Doubly Linked List before Deletion\n");
    doublyLinkedListTraversal(head);
    /*
    printf("\nDoubly Linked list after deletion first Node\n");
    head = doublyDeletionAtFirst(head);
    doublyLinkedListTraversal(head);
    */
    /*
    printf("\nDoubly Linked list after deletion Node at index 2\n");
    head = doublyDeletionAtIndex(head, 2);
    doublyLinkedListTraversal(head);
    */
    /*
    printf("\nDoubly Linked list after deletion End Node\n");
    head = doublyDeletionAtEnd(head);
    doublyLinkedListTraversal(head);
    */
    /*
    printf("\nDoubly Linked list after deletion after third Node\n");
    head = doublyDeletionAfterNode(head, third);
    doublyLinkedListTraversal(head);
    */
    /*
    printf("\nDoubly Linked list after deletion at value 94\n");
    head = doublyDeletionAtKey(head, 94);
    doublyLinkedListTraversal(head);
    */

    return 0;
}