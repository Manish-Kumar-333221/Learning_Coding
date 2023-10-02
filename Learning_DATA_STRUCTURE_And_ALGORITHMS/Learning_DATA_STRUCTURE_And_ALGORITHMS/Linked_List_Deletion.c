#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};

void linkedListTraversal(struct Node *ptr)
{
    int i = 0;
    while (ptr != NULL)
        {
            printf("Element %d: %d\n", i++, ptr->data);
            ptr = ptr->next;
        }
}

struct Node* deletionAtFirst(struct Node *ptr)
{
    struct Node *p = ptr;
    ptr = ptr->next;
    free(p);
    return ptr;
}

struct Node* deletionAtIndex(struct Node *ptr, int index)
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

struct Node* deletionAtEnd(struct Node* ptr)
{
    struct Node *p = ptr;
    while (p->next->next != NULL)
        {
            p = p->next;
        }
    struct Node *q = p->next;
    p->next = NULL;
    free(q);
    return ptr;
}

struct Node* deletionAfterNode(struct Node *ptr, struct Node *deleteNode)
{
    struct Node *p = deleteNode->next;
    deleteNode->next = deleteNode->next->next;
    free(p);
    return ptr;
}

struct Node* deletionAtKey(struct Node *ptr, int key)
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
            free(q);
            return ptr;
        }
    return ptr;
}

int main()
{
    struct Node *head;
    struct Node *second;
    struct Node *third;
    struct Node *fourth;
    struct Node *fifth;
    struct Node *sixth;
    struct Node *seventh;
    struct Node *eighth;

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
    eighth->next = NULL;

    printf("Linked list before deletion\n");
    linkedListTraversal(head);
    /*
    printf("\nLinked list after deletion first Node\n");
    head = deletionAtFirst(head);
    linkedListTraversal(head);
    */
    /*
    printf("\nLinked list after deletion Node at index 2\n");
    head = deletionAtIndex(head, 2);
    linkedListTraversal(head);
    */
    /*
    printf("\nLinked list after deletion End Node\n");
    head = deletionAtEnd(head);
    linkedListTraversal(head);
    */
    /*
    printf("\nLinked list after deletion after second Node\n");
    head = deletionAfterNode(head, second);
    linkedListTraversal(head);
    */
    /*
    printf("\nLinked list after deletion at value 76\n");
    head = deletionAtKey(head, 11);
    linkedListTraversal(head);
    */
    return 0;
}