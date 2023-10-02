#include <stdio.h>
#include <stdlib.h>

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
    while(p != ptr);
}

struct Node* circularDeletionAtFirst(struct Node *ptr)
{
    struct Node *p = ptr;
    while (p->next != ptr)
        {
            p = p->next;
        }
    p->next = ptr->next;
    p = p->next;
    free(ptr);
    return p;
}

struct Node* circularDeletionAtIndex(struct Node *ptr, int index)
{
    struct Node *p = ptr;
    int i = 0;
    while (i != index - 1)
        {
            p = p->next;
            i++;
        }
    struct Node *q = p->next;
    // p->next = p->next->next;
    p->next = q->next;
    free(q);
    return ptr;
}

struct Node* circularDeletionAtEnd(struct Node* ptr)
{
    struct Node *p = ptr;
    while (p->next->next != ptr)
        {
            p = p->next;
        }
    struct Node *q = p->next;
    p->next = NULL;
    free(q);
    return ptr;
}

struct Node* circularDeletionAfterNode(struct Node *ptr, struct Node *deleteNode)
{
    struct Node *p = deleteNode->next;
    deleteNode->next = deleteNode->next->next;
    p == ptr ? ptr = ptr->next : "" ;
    free(p);
    return ptr;
}

struct Node* circularDeletionAtKey(struct Node *ptr, int key)
{
    struct Node *p = ptr;
    while ((p->next->data != key) && (p->next != ptr))
        {
            p = p->next;
        }
    if (p->next->data == key)
        {
            struct Node *q = p->next;
            p->next = q->next;
            free(q);
            return ptr;
        }
    return ptr;
}

int main()
{
    struct Node *head, *second, *third, *fourth, *fifth, *sixth, *seventh, *eighth;

    // Allocate memory for nodes in the linked list in Heap
    head = (struct Node*) malloc(sizeof(struct Node));
    second = (struct Node*) malloc(sizeof(struct Node));
    third = (struct Node*) malloc(sizeof(struct Node));
    fourth = (struct Node*) malloc(sizeof(struct Node));
    fifth = (struct Node*) malloc(sizeof(struct Node));
    sixth = (struct Node*) malloc(sizeof(struct Node));
    seventh = (struct Node*) malloc(sizeof(struct Node));
    eighth = (struct Node*) malloc(sizeof(struct Node));

    // Link first and second nodes
    head->data = 7;
    head->next = second;

    // Link second and third nodes
    second->data = 11;
    second->next = third;

    // Link third and fourth nodes
    third->data = 41;
    third->next = fourth;

    // Link fourth and fifth notes
    fourth->data = 66;
    fourth->next = fifth;

    // Link fifth and sixth notes
    fifth->data = 59;
    fifth->next = sixth;

    // Link sixth and seventh notes
    sixth->data = 76;
    sixth->next = seventh;

    // Link seventh and eighth notes
    seventh->data = 69;
    seventh->next = eighth;

    // Terminate the list at the eighth node
    eighth->data = 26;
    eighth->next = head;

    printf("Circular Linked list before deletion\n");
    circularLinkedListTraversal(head);
    /*
    printf("\nCircular Linked list after deletion first Node\n");
    head = circularDeletionAtFirst(head);
    circularLinkedListTraversal(head);
    */
    /*
    printf("\nCircular Linked list after deletion Node at index 2\n");
    head = circularDeletionAtIndex(head, 4);
    circularLinkedListTraversal(head);
    */
    /*
    printf("\nCircular Linked list after deletion End Node\n");
    head = circularDeletionAtEnd(head);
    circularLinkedListTraversal(head);
    */
    /*
    printf("\nCircular Linked list after deletion after fifth Node\n");
    head = circularDeletionAfterNode(head, fifth);
    circularLinkedListTraversal(head);
    */
    /*
    printf("\nCircular Linked list after deletion at value 76\n");
    head = circularDeletionAtKey(head, 76);
    circularLinkedListTraversal(head);
    */
    return 0;
}