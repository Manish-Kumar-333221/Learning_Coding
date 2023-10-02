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
            struct Node *p = (struct Node*) malloc(sizeof(struct Node));
            p->data = data;
            p->index = isEmpty(ptr) ? 0 : ptr->index + 1;
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

void valueAtPeek(struct Node *ptr, int peekPosition)
{
    if (peekPosition <= 0 || peekPosition > ptr->index + 1)
        {
            printf("Peek Position %d is an invalid Position\n", peekPosition);
        }
    else
        {
            int index = ptr->index;
            while (ptr->index != index - peekPosition + 1)
                {
                    ptr = ptr->next;
                }
            if (ptr->index == index - peekPosition + 1)
                {
                    printf("Value at peek position %d is: %d\n", peekPosition, ptr->data);
                }
        }
}

void stackTop(struct Node *ptr)
{
    printf("Topmost Element[%d]: %d\n", ptr->index, ptr->data);
}

void stackBottom(struct Node *ptr)
{
    if (isEmpty(ptr))
        {
            printf("Stack is Empty, There is no bottommost element int stack");
        }
    else
        {
            while (ptr->next != NULL)
                {
                    ptr = ptr->next;
                }
            printf("Bottommost Element[0]: %d\n", ptr->data);
        }
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

    for (int i = -1; i <= (head->index + 1) + 2; i++)
        {
            valueAtPeek(head, i);
        }

    printf("\n");

    stackTop(head);

    stackBottom(head);

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