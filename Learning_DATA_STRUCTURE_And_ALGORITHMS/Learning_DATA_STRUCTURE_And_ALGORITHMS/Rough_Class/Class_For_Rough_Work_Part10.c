#include<stdio.h>
#include<stdlib.h>

struct Linkedlist
{
    int data;
    struct Linkedlist* next;
};

void linkedListTraversal(struct Linkedlist* head)
{
    while (head != NULL)
        {
            printf("%d, ", head->data);
            head = head->next;
        }
    printf("\n");
}

void create(struct Linkedlist** head, int data)
{
    struct Linkedlist* ptr = (struct Linkedlist*) malloc(sizeof(struct Linkedlist));
    ptr->data = data;
    ptr->next = *head;
    *head = ptr;
}


void reverseLinkedList(struct Linkedlist** head)
{
    struct Linkedlist* tail = *head;
    struct Linkedlist* ptr;
    while (head != NULL && tail->next != NULL)
        {
            ptr = tail->next;
            tail->next = ptr->next;
            ptr->next = *head;
            *head = ptr;
        }
}

int main()
{
    struct Linkedlist* head = NULL;

    create(&head, 1);
    create(&head, 2);
    create(&head, 3);
    create(&head, 4);
    create(&head, 5);
    create(&head, 6);
    create(&head, 7);
    create(&head, 8);
    create(&head, 9);
    create(&head, 10);
    create(&head, 11);

    linkedListTraversal(head);

    reverseLinkedList(&head);

    linkedListTraversal(head);

    return 0;
}