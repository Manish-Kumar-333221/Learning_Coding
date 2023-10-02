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
            printf("stack is empty nothing to print!\n");
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
    if (isFull(ptr))
        {
            printf("Stack Overflow, Cannot push element %d in the stack\n", data);
            return ptr;
        }
    else
        {
            if (ptr->index == -1)
                {
                    ptr->index++;
                    ptr->data = data;
                    printf("Element[%d]: %d pushed in the stack\n", ptr->index, ptr->data);
                    return ptr;
                }
            struct Node *p = (struct Node*) malloc(sizeof(struct Node));
            p->data = data;
            p->index = ptr->index + 1;
            p->next = ptr;
            printf("Element[%d]: %d pushed in the stack\n", p->index, p->data);
            return p;
        }
}

int pop(struct Node **ptr)
{
    if (isEmpty(*ptr))
        {
            printf("Stack Underflow, Cannot pop element from the stack\n");
            return -1;
        }
    else
        {
            struct Node *p = *ptr;
            *ptr = p->next;
            int x = p->data;
            free(p);
            return x;
        }
}

int main()
{
    struct Node *head = NULL;

    head  = (struct Node*) malloc(sizeof(struct Node));
    head->index = -1;
    head->next = NULL;

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

    int index = head->index;
    int popElement = pop(&head);
    popElement != -1 ? printf("Poped Element[%d]: %d from the stack\n", index, popElement), index-- : "" ;

    popElement = pop(&head);
    popElement != -1 ? printf("Poped Element[%d]: %d from the stack\n", index, popElement), index-- : "" ;

    popElement = pop(&head);
    popElement != -1 ? printf("Poped Element[%d]: %d from the stack\n", index, popElement), index-- : "" ;

    popElement = pop(&head);
    popElement != -1 ? printf("Poped Element[%d]: %d from the stack\n", index, popElement), index-- : "" ;

    popElement = pop(&head);
    popElement != -1 ? printf("Poped Element[%d]: %d from the stack\n", index, popElement), index-- : "" ;

    popElement = pop(&head);
    popElement != -1 ? printf("Poped Element[%d]: %d from the stack\n", index, popElement), index-- : "" ;

    popElement = pop(&head);
    popElement != -1 ? printf("Poped Element[%d]: %d from the stack\n", index, popElement), index-- : "" ;

    popElement = pop(&head);
    popElement != -1 ? printf("Poped Element[%d]: %d from the stack\n", index, popElement), index-- : "" ;

    popElement = pop(&head);
    popElement != -1 ? printf("Poped Element[%d]: %d from the stack\n", index, popElement), index-- : "" ;

    popElement = pop(&head);
    popElement != -1 ? printf("Poped Element[%d]: %d from the stack\n", index, popElement), index-- : "" ;

    popElement = pop(&head);
    popElement != -1 ? printf("Poped Element[%d]: %d from the stack\n", index, popElement), index-- : "" ;

    popElement = pop(&head);
    popElement != -1 ? printf("Poped Element[%d]: %d from the stack\n", index, popElement), index-- : "" ;

    popElement = pop(&head);
    popElement != -1 ? printf("Poped Element[%d]: %d from the stack\n", index, popElement), index-- : "" ;

    popElement = pop(&head);
    popElement != -1 ? printf("Poped Element[%d]: %d from the stack\n", index, popElement), index-- : "" ;

    printf("\n");

    stackLinkedListTraversal(head);

    return 0;
}