#include<stdio.h>
#include<stdlib.h>

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

struct Node* insertionAtFirst(struct Node *head, int data)
{
    struct Node *ptr = (struct Node*) malloc(sizeof(struct Node));
    ptr->data = data;
    ptr->next = head;
    head->prev = ptr;
    ptr->prev = NULL;
    return ptr;
}

struct Node* insertionAtIndex(struct Node *head, int data, int index)
{
    struct Node *ptr = (struct Node*) malloc(sizeof(struct Node));
    struct Node *p = head;
    int i = 0;
    while (i != (index - 1))
        {
            p = p->next;
            i++;
        }
    ptr->data = data;
    p->next->prev = ptr;
    ptr->next = p->next;
    ptr->prev = p;
    p->next = ptr;
    return head;
}

struct Node* insertionAtEnd(struct Node *head, int data)
{
    struct Node *ptr = (struct Node*) malloc(sizeof(struct Node));
    ptr->data = data;
    struct Node *p = head;

    while(p->next!=NULL)
        {
            p = p->next;
        }
    p->next = ptr;
    ptr->next = NULL;
    ptr->prev = p;
    return head;
}

struct Node* insertionAfterNode(struct Node *head, int data, struct Node *prevNode)
{
    struct Node *ptr = (struct Node*) malloc(sizeof(struct Node));
    ptr->data = data;

    ptr->next = prevNode->next;
    prevNode->next->prev = ptr;
    prevNode->next = ptr;
    ptr->prev = prevNode;

    return head;
}

struct Node* insertionAfterKey(struct Node *ptr, int data, int key)
{
    struct Node *p = ptr;
    struct Node *q = (struct Node*) malloc(sizeof(struct Node));
    q->data = data;

    while ((p != NULL) && (p->data != key))
        {
            p = p->next;
            if (p->next == NULL && p->data != key )
                {
                    free(q);
                    return ptr;
                }
        }
    if (p->data == key)
        {
            q->next = p->next;
            p->next != NULL ? p->next->prev = q : "" ;
            p->next = q;
            q->prev = p;
            return ptr;
        }
    free(q);
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

    printf("Doubly Linked List before Insertion\n");
    doublyLinkedListTraversal(head);
    /*
    printf("\nDoubly Linked List After Insertion 29 at first\n");
    head = insertionAtFirst(head, 29);
    doublyLinkedListTraversal(head);
    */
    /*
    printf("\nDoubly Linked List After Insertion 37 at index 3\n");
    head = insertionAtIndex(head, 37, 3);
    doublyLinkedListTraversal(head);
    */
    /*
    printf("Doubly Linked List After Insertion 69 at End\n");
    head = insertionAtEnd(head, 69);
    doublyLinkedListTraversal(head);
    */
    /*
    printf("\nDoubly Linked List After insertion 58 after second Node\n");
    head = insertionAfterNode(head, 58, second);
    doublyLinkedListTraversal(head);
    */
    /*
    printf("\nDoubly Linked List After insertion 20 after value 94\n");
    head  = insertionAfterKey(head, 20, 94);
    doublyLinkedListTraversal(head);
    */
    return 0;
}