#include <iostream>

using namespace std;

struct Node
{
    int data;
    struct Node* next;

    Node(int data)
    {
        this->data = data;
        next = NULL;
    }
};

struct LinkedList
{
    Node* head;

    LinkedList()
    {
        head = NULL;
    }

    Node* reverse(Node* head)
    {
        if (head == NULL || head->next == NULL)
            {
                return head;
            }

        Node* rest = reverse(head->next);
        head->next->next = head;
        head->next = NULL;

        return rest;
    }

    void print()
    {
        struct Node* temp = head;

        for (int i = 0; temp != NULL; i++)
            {
                printf("Element %d: %d\n", i, temp->data);
                temp = temp->next;
            }
    }

    void push(int data)
    {
        Node* temp = new Node(data);
        temp->next = head;
        head = temp;
    }
};

int main()
{
    LinkedList ll;

    ll.push(1);
    ll.push(2);
    ll.push(3);
    ll.push(4);

    cout << "Given linked list\n";
    ll.print();

    ll.head = ll.reverse(ll.head);

    cout << "\nReversed Linked list \n";
    ll.print();

    return 0;
}
