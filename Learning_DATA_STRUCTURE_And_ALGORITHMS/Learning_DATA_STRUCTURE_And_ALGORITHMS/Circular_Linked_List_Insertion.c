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
    while(p != ptr);
}

struct Node* insertionAtFirst(struct Node *ptr, int data)
{
    struct Node *p = ptr;
    struct Node *q = (struct Node*) malloc(sizeof(struct Node));
    while (p->next != ptr)
        {
            p = p->next;
        }
    p->next = q;
    q->next = ptr;
    q->data = data;
    return q;
}

struct Node* insertionAtIndex(struct Node *ptr, int data, int index)
{
    struct Node *p = ptr;
    struct Node *q = (struct Node*) malloc(sizeof(struct Node));
    q->data = data;
    int i = 0;
    while (i < (index - 1))
        {
            p = p->next;
            i++;
        }
    q->next = p->next;
    p->next = q;
    return ptr;
}
struct Node* insertionAtEnd(struct Node *ptr, int data)
{
    struct Node *p = ptr;
    struct Node *q = (struct Node*) malloc(sizeof(struct Node));
    q->data = data;
    while (p->next != ptr)
        {
            p = p->next;
        }
    q->next = ptr;
    p->next = q;
    return ptr;
}

struct Node* insertionAfterNode(struct Node *ptr, int data, struct Node *givenNode)
{
    struct Node *p = ptr;
    struct Node *q = (struct Node*) malloc(sizeof(struct Node));
    q->data = data;
    while (p != givenNode)
        {
            p = p->next;
        }
    q->next = p->next;
    p->next = q;
    return ptr;
}

struct Node* insertionAfterKey(struct Node *ptr, int data, int key)
{
    struct Node *p = ptr;
    struct Node *q = (struct Node*) malloc(sizeof(struct Node));
    q->data = data;
    do
        {
            p = p->next;
        }
    while (p->data != key && p != ptr);
    if (p->data == key)
        {
            q->next = p->next;
            p->next = q;
            return ptr;
        }

    free(q);
    return ptr;

}

int main()
{
    struct Node *head, *second, *third, *fourth;

    head = (struct Node*) malloc(sizeof(struct Node));
    second = (struct Node*) malloc(sizeof(struct Node));
    third = (struct Node*) malloc(sizeof(struct Node));
    fourth = (struct Node*) malloc(sizeof(struct Node));

    head->data =  25;
    head->next = second;

    second->data = 76;
    second->next = third;

    third->data = 95;
    third->next = fourth;

    fourth->data = 46;
    fourth->next = head;

    printf("Circular Linked List Before Insertion\n");
    circularLinkedListTraversal(head);

    printf("Circular Linked List After Insertion 29 at first\n");
    head = insertionAtFirst(head, 29);
    circularLinkedListTraversal(head);

    printf("Circular Linked List After Insertion 37 at index 3\n");
    head = insertionAtIndex(head, 37, 3);
    circularLinkedListTraversal(head);

    printf("Circular Linked List After Insertion 69 at End\n");
    head = insertionAtEnd(head, 69);
    circularLinkedListTraversal(head);

    printf("Circular Linked List After insertion 58 after second Node\n");
    head = insertionAfterNode(head, 58, second);
    circularLinkedListTraversal(head);

    printf("Circular Linked List After insertion 20 after value 76\n");
    head  = insertionAfterKey(head, 20, 95);
    circularLinkedListTraversal(head);

    return 0;
}