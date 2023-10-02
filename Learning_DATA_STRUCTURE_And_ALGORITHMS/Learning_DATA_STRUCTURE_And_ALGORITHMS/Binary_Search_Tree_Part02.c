#include<stdio.h>
#include<stdlib.h>

struct Node
{
    int data;
    struct Node *left;
    struct Node *right;
};

void binarySearchTreePreOrderTraversal(struct Node* root)
{
    struct Node *ptr = root;
    if (ptr != NULL)
        {
            printf("Element %d\n", ptr->data);
            binarySearchTreePreOrderTraversal(ptr->left);
            binarySearchTreePreOrderTraversal(ptr->right);
        }
}

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

void binarySearchTreePostOrderTraversal(struct Node* root)
{
    struct Node *ptr = root;
    if (ptr != NULL)
        {
            binarySearchTreePostOrderTraversal(ptr->left);
            binarySearchTreePostOrderTraversal(ptr->right);
            printf("Element %d\n", ptr->data);
        }
}

struct Node* createNode(int data)
{
    struct Node *ptr = (struct Node*) malloc(sizeof(struct Node));
    ptr->data = data;
    ptr->left = ptr->right = NULL;
    return ptr;
}

void insert(struct Node** root, int key)
{
    if (*root == NULL)
        *root = createNode(key);
    if (key < (*root)->data)
        insert((&(*root)->left), key);
    else if (key > (*root)->data)
        insert(&((*root)->right), key);
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

int main()
{
    struct Node *root = NULL;
    insert(&root, 10);
    insert(&root, 5);
    insert(&root, 15);
    insert(&root, 3);
    insert(&root, 7);
    insert(&root, 13);
    insert(&root, 17);

    binarySearchTreePreOrderTraversal(root);

    printf("\n");

    binarySearchTreeInOrderTraversal(root);

    printf("\n");

    binarySearchTreePostOrderTraversal(root);

    printf("\n");

    checkIsBST(root);

    return 0;
}