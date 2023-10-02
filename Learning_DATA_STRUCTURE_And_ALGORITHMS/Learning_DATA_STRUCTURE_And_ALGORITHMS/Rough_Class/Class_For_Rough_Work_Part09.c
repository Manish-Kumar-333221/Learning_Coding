#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *left;
    struct Node *right;
};

struct Node *createNode(int data)
{
    struct Node *ptr = (struct Node *)malloc(sizeof(struct Node));
    ptr->data = data;
    ptr->left = NULL;
    ptr->right = NULL;
    return ptr;
}

void insert(struct Node **head, int data)
{
    if (*head == NULL)
    {
        *head = createNode(data);
        return;
    }
    if ((*head)->data < data)
        insert(&((*head)->right), data);
    else if ((*head)->data > data)
        insert(&((*head)->left), data);
}

int maxHeight = 0;


void leftViewInBST(struct Node *head, int height)
{
    if (head != NULL)
    {
        if (height > maxHeight)
        {
            printf("%d, ", head->data);
        }

        leftViewInBST(head->left, height + 1);
        leftViewInBST(head->right, height + 1);

        if (height > maxHeight)
            maxHeight = height;
    }
}

void leftViewInBSTNew(struct Node *head, int height)
{
    if (head != NULL)
    {
        if (height > maxHeight)
        {
            printf("%d, ", head->data);
            maxHeight = height;
        }
        leftViewInBSTNew(head->left, height + 1);
        leftViewInBSTNew(head->right, height + 1);
    }
}

int main()
{
    struct Node *head = NULL;
    insert(&head, 6);
    insert(&head, 5);
    insert(&head, 3);
    insert(&head, 1);
    insert(&head, 4);
    insert(&head, 2);
    insert(&head, 13);
    insert(&head, 12);
    insert(&head, 11);
    insert(&head, 10);
    insert(&head, 9);
    insert(&head, 7);
    insert(&head, 8);
    insert(&head, 14);
    insert(&head, 15);
    insert(&head, 16);
    insert(&head, 17);
    insert(&head, 18);
    insert(&head, 19);
    insert(&head, 20);
    insert(&head, 21);

    leftViewInBST(head, 1);

    printf("\n");

    maxHeight = 0;
    leftViewInBSTNew(head, 1);
    return 0;
}