#include<iostream>
using namespace std;

struct Node
{
    int data;
    struct Node* left;
    struct Node* right;
};

void binaryTreeInOrderTraversal(struct Node* root)
{
    struct Node *ptr = root;
    if (ptr != NULL)
        {
            binaryTreeInOrderTraversal(ptr->left);
            cout << "Element " << ptr->data << endl;
            binaryTreeInOrderTraversal(ptr->right);
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

struct Node* deleteNode(struct Node *root, struct Node *prev)
{
    struct Node *newRoot = root;
    struct Node *rootRight = newRoot->right;
    newRoot = rootRight;
    while (rootRight->left != NULL)
        {
            rootRight = rootRight->left;
        }
    rootRight->left = root->left;
    
    if (root->data < prev->data)
        {
            prev->left = newRoot;
        }
    else if (root->data > prev->data)
        {
            prev->right = newRoot;
        }
     return prev;
}

int main()
{
    struct Node *root = createNode(50);
    struct Node *ptr1 = createNode(25);
    struct Node *ptr2 = createNode(75);
    root = linkNodes(root, ptr1, ptr2);

    struct Node *ptr3 = createNode(12);
    struct Node *ptr4 = createNode(37);
    ptr1 = linkNodes(ptr1, ptr3, ptr4);

    struct Node *ptr5 = createNode(60);
    struct Node *ptr6 = createNode(100);
    ptr2 = linkNodes(ptr2, ptr5, ptr6);

    struct Node *ptr7 = createNode(6);
    struct Node *ptr8 = createNode(18);
    ptr3 = linkNodes(ptr3, ptr7, ptr8);

    struct Node *ptr9 = createNode(28);
    struct Node *ptr10 = createNode(42);
    ptr4 = linkNodes(ptr4, ptr9, ptr10);

    struct Node *ptr15 = createNode(3);
    struct Node *ptr16 = createNode(9);
    ptr7 = linkNodes(ptr7, ptr15, ptr16);

    struct Node *ptr17 = createNode(15);
    struct Node *ptr18 = createNode(22);
    ptr8 = linkNodes(ptr8, ptr17, ptr18);

    struct Node *ptr19 = createNode(26);
    struct Node *ptr20 = createNode(30);
    ptr9 = linkNodes(ptr9, ptr19, ptr20);

    struct Node *ptr21 = createNode(38);
    struct Node *ptr22 = createNode(48);
    ptr10 = linkNodes(ptr10, ptr21, ptr22);

    struct Node *ptr40 = createNode(27);
    ptr19 = linkNodes(ptr19, NULL, ptr40);

    struct Node *ptr41 = createNode(29);
    struct Node *ptr42 = createNode(31);
    ptr20 = linkNodes(ptr20, ptr41, ptr42);

    struct Node *ptr44 = createNode(39);
    ptr21 = linkNodes(ptr21, NULL, ptr44);

    struct Node *ptr45 = createNode(46);
    struct Node *ptr46 = createNode(49);
    ptr22 = linkNodes(ptr22, ptr45, ptr46);

    binaryTreeInOrderTraversal(root);

    printf("\n");

    root = deleteNode(ptr1, root);

    binaryTreeInOrderTraversal(root);

    printf("\n");

    return 0;
}