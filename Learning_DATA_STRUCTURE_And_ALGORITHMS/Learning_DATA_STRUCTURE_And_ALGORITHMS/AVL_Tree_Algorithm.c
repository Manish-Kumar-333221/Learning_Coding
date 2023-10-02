#include<stdio.h>
#include<stdlib.h>

struct Node
{
    int key;
    struct Node *left;
    struct Node *right;
    int height;
};

struct Node* createNode(int key)
{
    struct Node* node = (struct Node *) malloc(sizeof(struct Node));
    node->key = key;
    node->left = NULL;
    node->right = NULL;
    node->height = 1;
    return node;
}

void preOrder(struct Node* root)
{
    if(root != NULL)
        {
            printf("Element %d\n", root->key);
            preOrder(root->left);
            preOrder(root->right);
        }
}

void inOrder(struct Node* root)
{
    if (root != NULL)
        {
            inOrder(root->left);
            printf("Element %d\n", root->key);
            inOrder(root->right);
        }
}

void postOrder(struct Node* root)
{
    if (root != NULL)
        {
            postOrder(root->left);
            postOrder(root->right);
            printf("Element %d\n", root->key);
        }
}

int getHeight(struct Node* n)
{
    return n == NULL ? 0 : n->height;
}

int max (int a, int b)
{
    return (a > b) ? a : b;
}

int getBalanceFactor(struct Node* n)
{
    // if (n==NULL)
    //     return 0;

    return getHeight(n->left) - getHeight(n->right);
}

struct Node* rightRotate(struct Node* y)
{
    struct Node* x = y->left;
    struct Node* T2 = x->right;

    x->right = y;
    y->left = T2;

    x->height = max(getHeight(x->right), getHeight(x->left)) + 1;
    y->height = max(getHeight(y->right), getHeight(y->left)) + 1;

    return x;
}

struct Node* leftRotate(struct Node* x)
{
    struct Node* y = x->right;
    struct Node* T2 = y->left;

    y->left = x;
    x->right = T2;

    x->height = max(getHeight(x->right), getHeight(x->left)) + 1;

    y->height = max(getHeight(y->right), getHeight(y->left)) + 1;

    return y;
}

struct Node* insert(struct Node* node, int key)
{
    if (node == NULL)
        return  createNode(key);

    if (key < node->key)
        node->left  = insert(node->left, key);
    else if (key > node->key)
        node->right = insert(node->right, key);

    node->height = 1 + max(getHeight(node->left), getHeight(node->right));

    int bf = getBalanceFactor(node);

    // Left Left Case
    if(bf > 1 && key < node->left->key)
        {
            return rightRotate(node);
        }
    // Right Right Case
    if(bf < -1 && key > node->right->key)
        {
            return leftRotate(node);
        }
    // Left Right Case
    if(bf > 1 && key > node->left->key)
        {
            node->left = leftRotate(node->left);
            return rightRotate(node);
        }
    // Right Left Case
    if(bf < -1 && key < node->right->key)
        {
            node->right = rightRotate(node->right);
            return leftRotate(node);
        }
    return node;
}

int main()
{
    struct Node *root = NULL;
    root = insert(root, 50);
    root = insert(root, 25);
    root = insert(root, 75);
    root = insert(root, 12);
    root = insert(root, 37);
    root = insert(root, 60);
    root = insert(root, 100);
    root = insert(root, 6);
    root = insert(root, 18);
    root = insert(root, 28);
    root = insert(root, 42);
    root = insert(root, 3);
    root = insert(root, 9);
    root = insert(root, 15);
    root = insert(root, 22);
    root = insert(root, 26);
    root = insert(root, 30);
    root = insert(root, 38);
    root = insert(root, 48);
    root = insert(root, 27);
    root = insert(root, 29);
    root = insert(root, 31);
    root = insert(root, 39);
    root = insert(root, 46);
    root = insert(root, 49);

    preOrder(root);
    printf("\n");

    inOrder(root);
    printf("\n");

    postOrder(root);
    printf("\n");

    return 0;
}