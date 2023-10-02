#include<stdio.h>
#include<stdlib.h>

struct Node
{
    int data;
    struct Node *left;
    struct Node *right;
};

void binaryTreePreOrderTraversal(struct Node* root)
{
    struct Node *ptr = root;
    if (ptr != NULL)
        {
            printf("Element %d\n", ptr->data);
            binaryTreePreOrderTraversal(ptr->left);
            binaryTreePreOrderTraversal(ptr->right);
        }
}

void binaryTreePostOrderTraversal(struct Node* root)
{
    struct Node *ptr = root;
    if (ptr != NULL)
        {
            binaryTreePostOrderTraversal(ptr->left);
            binaryTreePostOrderTraversal(ptr->right);
            printf("Element %d\n", ptr->data);
        }
}

void binaryTreeInOrderTraversal(struct Node* root)
{
    struct Node *ptr = root;
    if (ptr != NULL)
        {
            binaryTreeInOrderTraversal(ptr->left);
            printf("Element %d\n", ptr->data);
            binaryTreeInOrderTraversal(ptr->right);
        }
}

struct Node* createNode(int data)
{
    struct Node *ptr = (struct Node*) malloc(sizeof(struct Node));
    ptr->data = data;
    ptr->left = ptr->right = NULL;
    return ptr;
}

struct Node* linkNodes(struct Node *parent, struct Node *leftChild, struct Node *rightChild)
{
    parent->left = leftChild;
    parent->right = rightChild;
    return parent;
}

int main()
{
    struct Node *root = createNode(1);
    struct Node *ptr1 = createNode(2);
    struct Node *ptr2 = createNode(3);
    root = linkNodes(root, ptr1, ptr2);

    struct Node *ptr3 = createNode(4);
    struct Node *ptr4 = createNode(5);
    ptr1 = linkNodes(ptr1, ptr3, ptr4);

    struct Node *ptr5 = createNode(6);
    // struct Node *ptr6 = createNode(7);
    ptr2 = linkNodes(ptr2, ptr5, NULL);// ptr6);

    binaryTreePreOrderTraversal(root);
    printf("\n");
    binaryTreePostOrderTraversal(root);
    printf("\n");
    binaryTreeInOrderTraversal(root);

    return 0;
}