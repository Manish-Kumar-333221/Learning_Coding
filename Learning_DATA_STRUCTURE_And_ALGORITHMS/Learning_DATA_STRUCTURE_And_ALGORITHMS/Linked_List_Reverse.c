#include<stdio.h>

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
    printf("\n");
}

void reverseLinkedList(struct Node** head)
{
    struct Node* ptr = *head;
    struct Node* temp;
    while (head != NULL && ptr->next != NULL)
        {
            temp = ptr->next;
            ptr->next = temp->next;
            temp->next = *head;
            *head = temp;
        }
}

void push(struct Node** head, int data)
{
    struct Node* ptr = (struct Node*) malloc(sizeof(struct Node));
    ptr->data = data;
    ptr->next = *head;
    *head = ptr;
}

int main()
{
    struct Node *head = NULL;

    push(&head, 1);
    push(&head, 2);
    push(&head, 3);
    push(&head, 4);
    push(&head, 5);
    push(&head, 6);
    push(&head, 7);
    push(&head, 8);
    push(&head, 9);
    push(&head, 10);

    printf("Linked list before reversing\n");
    linkedListTraversal(head);

    reverseLinkedList(&head);

    printf("Linked list after reversing\n");
    linkedListTraversal(head);

    return 0;
}