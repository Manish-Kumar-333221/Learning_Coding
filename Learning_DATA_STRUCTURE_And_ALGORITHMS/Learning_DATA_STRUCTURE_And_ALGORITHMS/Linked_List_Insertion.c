#include<stdio.h>
#include<stdlib.h>

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

// Case 1
struct Node* insertAtFirst(struct Node *head, int data)
{
    struct Node *ptr = (struct Node*) malloc(sizeof(struct Node));
    ptr->data = data;

    ptr->next = head;
    return ptr;
}

// Case 2
struct Node* insertAtIndex(struct Node *head, int data, int index)
{
    struct Node *ptr = (struct Node*) malloc(sizeof(struct Node));
    ptr->data = data;
    struct Node *p = head;

    for (int i = 0; i != (index - 1); i++)
        {
            p = p->next;
        }

    ptr->next = p->next;
    p->next = ptr;
    return head;
}

// Case 3
struct Node* insertAtEnd(struct Node *head, int data)
{
    struct Node *ptr = (struct Node*) malloc(sizeof(struct Node));
    ptr->data = data;
    ptr->next = NULL;
    struct Node *p = head;

    while(p->next!=NULL)
        {
            p = p->next;
        }
    p->next = ptr;
    return head;
}

// Case 4
struct Node* insertAfterNode(struct Node *head, struct Node *prevNode, int data)
{
    struct Node *ptr = (struct Node*) malloc(sizeof(struct Node));
    ptr->data = data;

    ptr->next = prevNode->next;
    prevNode->next = ptr;


    return head;
}

int main()
{
    struct Node *head;
    struct Node *second;
    struct Node *third;
    struct Node *fourth;

    // Allocate memory for nodes in the linked list in Heap
    head = (struct Node *)malloc(sizeof(struct Node));
    second = (struct Node *)malloc(sizeof(struct Node));
    third = (struct Node *)malloc(sizeof(struct Node));
    fourth = (struct Node *)malloc(sizeof(struct Node));

    // Link first and second nodes
    head->data = 7;
    head->next = second;

    // Link second and third nodes
    second->data = 11;
    second->next = third;

    // Link third and fourth nodes
    third->data = 41;
    third->next = fourth;

    // Terminate the list at the third node
    fourth->data = 66;
    fourth->next = NULL;

    printf("------Linked list before insertion------\n");
    printf("head node data value is: %d\n", head->data);
    printf("second node data value is: %d\n", second->data);
    printf("third node data value is: %d\n", third->data);
    printf("fourth node data value is: %d\n", fourth->data);
    linkedListTraversal(head);

    head = insertAtFirst(head, 56);
    printf("\n------Linked list after insertion 56 at first------\n");
    printf("head node data value is: %d\n", head->data);
    printf("second node data value is: %d\n", second->data);
    printf("third node data value is: %d\n", third->data);
    printf("fourth node data value is: %d\n", fourth->data);
    linkedListTraversal(head);

    head = insertAtIndex(head, 26, 1);
    printf("\n------Linked list after insertion 26 at index 1------\n");
    printf("head node data value is: %d\n", head->data);
    printf("second node data value is: %d\n", second->data);
    printf("third node data value is: %d\n", third->data);
    printf("fourth node data value is: %d\n", fourth->data);
    linkedListTraversal(head);

    head = insertAtEnd(head, 83);
    printf("\n------Linked list after insertion 83 at end------\n");
    printf("head node data value is: %d\n", head->data);
    printf("second node data value is: %d\n", second->data);
    printf("third node data value is: %d\n", third->data);
    printf("fourth node data value is: %d\n", fourth->data);
    linkedListTraversal(head);

    head = insertAfterNode(head, third, 45);
    printf("\n------Linked list after insertion 45 after third node------\n");
    printf("head node data value is: %d\n", head->data);
    printf("second node data value is: %d\n", second->data);
    printf("third node data value is: %d\n", third->data);
    printf("fourth node data value is: %d\n", fourth->data);
    linkedListTraversal(head);

    // Nodes should be like below but here they are not!, but in actual linked list they will be like below
    printf("\n------Nodes should be like below------\n");
    printf("first node data value is: %d\n", head->data);
    printf("second node data value is: %d\n", head->next->data);
    printf("third node data value is: %d\n", head->next->next->data);
    printf("fourth node data value is: %d\n", head->next->next->next->data);
    printf("fifth node data value is: %d\n", head->next->next->next->next->data);
    printf("sixth node data value is: %d\n", head->next->next->next->next->next->data);
    printf("seventh node data value is: %d\n", head->next->next->next->next->next->next->data);
    printf("eighth node data value is: %d\n", head->next->next->next->next->next->next->next->data);

    return 0;
}