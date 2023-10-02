#include<stdio.h>
#include<stdlib.h>

struct Node
{
    int data;
    struct Node *left;
    struct Node *right;
};

void binarySearchTreeInOrderTraversal(struct Node* root)
{
    struct Node *ptr = root;
    if (ptr != NULL)
        {
            binarySearchTreeInOrderTraversal(ptr->left);
            printf("Element %d\n", ptr->data);
            binarySearchTreeInOrderTraversal(ptr->right);
        }
}

struct Node* createNode(int data)
{
    struct Node *ptr = (struct Node*) malloc(sizeof(struct Node));
    ptr->data = data;
    ptr->left = NULL;
    ptr->right = NULL;
    return ptr;
}

struct Node* linkNodes(struct Node *parent, struct Node *leftChild, struct Node *rightChild)
{
    parent->left = leftChild;
    parent->right = rightChild;
    return parent;
}

int isBST(struct Node *root)
{
    static struct Node *prev = NULL;
    if (root != NULL)
        {
            if (!isBST(root->left))
                {
                    return 0;
                }
            if (prev != NULL && root->data <= prev->data)
                {
                    return 0;
                }
            prev = root;
            return isBST(root->right);
        }
    else
        {
            return 1;
        }

}

void checkIsBST(struct Node *root)
{
    printf("is BST? %d\n", isBST(root));
}

void insertionInBinarySearchTree(struct Node *root, int data)
{
    struct Node *prev = NULL;

    while (root != NULL)
        {
            prev = root;
            if (data == root->data)
                {
                    printf("Element %d is already in BST.\n\n", data);
                    return;
                }
            else if (data < root->data)
                {
                    root = root->left;
                }
            else
                {
                    root = root->right;
                }
        }
    struct Node *ptr = createNode(data);
    if (data < prev->data)
        {
            prev->left = ptr;
        }
    else
        {
            prev->right = ptr;
        }
}

int main()
{
    struct Node *root = createNode(10);
    struct Node *ptr1 = createNode(5);
    struct Node *ptr2 = createNode(15);
    root = linkNodes(root, ptr1, ptr2);

    struct Node *ptr3 = createNode(3);
    struct Node *ptr4 = createNode(7);
    ptr1 = linkNodes(ptr1, ptr3, ptr4);

    struct Node *ptr5 = createNode(13);
    struct Node *ptr6 = createNode(17);
    ptr2 = linkNodes(ptr2, ptr5, ptr6);

    binarySearchTreeInOrderTraversal(root);

    printf("\n");

    checkIsBST(root);

    printf("\n");

    insertionInBinarySearchTree(root, 4);

    insertionInBinarySearchTree(root, 6);

    insertionInBinarySearchTree(root, 14);

    insertionInBinarySearchTree(root, 16);

    binarySearchTreeInOrderTraversal(root);

    return 0;
}