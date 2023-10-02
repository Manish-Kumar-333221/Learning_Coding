#include<stdio.h>

struct Queue
{
    int data;
    struct Queue* next;
};

struct Queue* createQueue()
{
    struct Queue* ptr = (struct Queue*) malloc(sizeof(struct Queue));
    return ptr;
};

void EnQueue(struct Queue* root)
{

}

struct Node
{
    int data;
    struct Node* left;
    struct Node* right;
};

struct Node* push(struct Node* root, int data)
{
    if (root == NULL)
        {
            root = (struct Node*) malloc(sizeof(struct Node));
            root->data = data;
            root->left = root->right = NULL;
            return root;
        }
    if (data < root->data)
        {
            root->left =  push(root->left, data);
        }
    if (data > root->data)
        {
            root->right = push(root->right, data);
        }
    return root;
}

void inOrderTraversal(struct Node* root)
{
    if (root != NULL)
        {
            inOrderTraversal(root->left);
            printf("%d ", root->data );
            inOrderTraversal(root->right);
        }
}


int main()
{
    struct Node* ll1 = NULL;
    ll1 = push(ll1, 6);
    ll1 = push(ll1, 5);
    ll1 = push(ll1, 3);
    ll1 = push(ll1, 1);
    ll1 = push(ll1, 4);
    ll1 = push(ll1, 2);
    ll1 = push(ll1, 13);
    ll1 = push(ll1, 12);
    ll1 = push(ll1, 11);
    ll1 = push(ll1, 10);
    ll1 = push(ll1, 9);
    ll1 = push(ll1, 7);
    ll1 = push(ll1, 8);
    ll1 = push(ll1, 14);
    ll1 = push(ll1, 15);
    ll1 = push(ll1, 16);
    ll1 = push(ll1, 17);
    ll1 = push(ll1, 18);
    ll1 = push(ll1, 19);
    ll1 = push(ll1, 20);
    ll1 = push(ll1, 21);

    inOrderTraversal(ll1);

    return 0;
}