#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *Next;
};

void LinkedListTraversal(struct Node *head)
{
    if (head == NULL)
    {
        printf("NULL\n");
    }
    else
    {
        printf("%d->", (*head).data);
        LinkedListTraversal((*head).Next);
        // printf("%d->", head->data);
        // LinkedListTraversal(head->Next);
    }
}

void Linked_List_Insertion(struct Node **head, struct Node **tail, int data)
{
    struct Node *ptr = (struct Node *)malloc(sizeof(struct Node));
    ptr->data = data;
    ptr->Next = NULL;
    if (*head == NULL)
    {
        *head = ptr;
        *tail = ptr;
    }
    else
    {
        (*tail)->Next = ptr;
        *tail = ptr;
    }
}

void Linked_List_InsertionReverse(struct Node **head, int data)
{
    struct Node *ptr = (struct Node *)malloc(sizeof(struct Node));
    ptr->data = data;
    ptr->Next = *head;
    *head = ptr;
}

void LinkedListCreation(struct Node **head, int data)
{
    struct Node *ptr = (struct Node *)malloc(sizeof(struct Node));
    ptr->data = data;
    ptr->Next = NULL;
    if (*head == NULL)
    {
        *head = ptr;
    }
    else
    {
        struct Node *temp = *head;
        while (temp->Next != NULL)
        {
            temp = temp->Next;
        }
        temp->Next = ptr;
    }
}

void ReverseLinkedList(struct Node **head)
{
    struct Node *tail = *head;
    while ((*head)->Next != NULL)
    {
        struct Node *temp = (*head)->Next;
        (*head)->Next = temp->Next;
        temp->Next = tail;
        tail = temp;
    }
    *head = tail;
}

int main()
{
    struct Node *head = NULL, *tail = NULL;

    for (int i = 1; i <= 10; i++)
    {
        Linked_List_Insertion(&head, &tail, i);
        // Linked_List_InsertionReverse(&head, i);
        // LinkedListCreation(&head, i);
    }

    LinkedListTraversal(head);

    ReverseLinkedList(&head);

    LinkedListTraversal(head);

    return 0;
}