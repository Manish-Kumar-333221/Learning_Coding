#include<stdio.h>
#include<stdlib.h>

struct Node
{
    int index;
    int data;
    struct Node *next;
};

void stackLinkedListTraversal(struct Node *ptr)
{
    if (ptr == NULL)
        {
            printf("stack is empty nothing to print!\n\n");
        }
    else
        {
            int i = ptr->index;
            printf("\n");
            while (ptr != NULL)
                {
                    printf("Element %d: %d\n", i--, ptr->data);
                    ptr = ptr->next;
                }
        }
}

int isFull()
{
    struct Node *p = (struct Node*) malloc(sizeof(struct Node));
    if (p == NULL)
        {
            return 1;
        }
    else
        {
            free(p);
            return 0;
        }
}

int isEmpty(struct Node *ptr)
{
    if (ptr == NULL)
        {
            return 1;
        }
    else
        {
            return 0;
        }
}

struct Node* push(struct Node *ptr, int data)
{
    if (isFull())
        {
            printf("Stack Overflow, Cannot push element %d in the stack\n", data);
            return ptr;
        }
    else
        {
            struct Node *p = (struct Node*) malloc(sizeof(struct Node));
            p->data = data;
            p->index = isEmpty(ptr) ? 0 : ptr->index + 1;
            p->next = ptr;
            printf("Element[%d]: %d pushed in the stack\n", p->index, p->data);
            return p;
        }
}

int* pop(struct Node **ptr)
{
    int* r = (int*) calloc(2, sizeof(int));//for printing index
    if (isEmpty(*ptr))
        {
            printf("Stack Underflow, Cannot pop element from the stack\n");
            r[0] = -1;
            return r;
        }
    else
        {
            struct Node *p = *ptr;
            *ptr = p->next;
            r[0] = p->data;;
            r[1] = p->index;
            free(p);
            return r;
        }
}

void popResult(struct Node** head)
{
    int* popElement = pop(&(*head));
    popElement[0] != -1 ? printf("Poped Element[%d]: %d from the stack\n", popElement[1], popElement[0]): "" ;
}

int main()
{
    struct Node *head = NULL;

    head = push(head, 98);
    head = push(head, 59);
    head = push(head, 95);
    head = push(head, 90);
    head = push(head, 76);
    head = push(head, 37);
    head = push(head, 73);
    head = push(head, 17);
    head = push(head, 85);
    head = push(head, 38);
    head = push(head, 68);

    stackLinkedListTraversal(head);

    printf("\n");

    popResult(&head);
    popResult(&head);
    popResult(&head);
    popResult(&head);
    popResult(&head);
    popResult(&head);
    popResult(&head);
    popResult(&head);
    popResult(&head);
    popResult(&head);
    popResult(&head);
    popResult(&head);
    popResult(&head);
    popResult(&head);

    printf("\n");

    stackLinkedListTraversal(head);

    head = push(head, 17);
    head = push(head, 85);
    head = push(head, 59);
    head = push(head, 95);
    head = push(head, 90);

    printf("\n");

    popResult(&head);
    popResult(&head);
    popResult(&head);
    popResult(&head);
    popResult(&head);
    popResult(&head);
    popResult(&head);
    popResult(&head);

    return 0;
}