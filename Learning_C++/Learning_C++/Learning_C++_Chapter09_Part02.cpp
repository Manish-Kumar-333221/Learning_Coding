#include<iostream>
using namespace std;

class c2;

class c1
{
    int val1;

public:
    void indata(int a)
    {
        val1 = a;
    }
    void display()
    {
        cout << val1 << endl;
    }
    friend void exchange(c1&, c2&);
};

class c2
{
    int val2;

public:
    void indata(int a)
    {
        val2 = a;
    }
    void display()
    {
        cout << val2 << endl;
    }
    friend void exchange(c1&, c2&);
};

void exchange(c1& a, c2& b)
{
    int temp;
    temp = a.val1;
    a.val1 = b.val2;
    b.val2 = temp;
}

int main()
{
    c1 oc1;
    c2 oc2;

    oc1.indata(37);
    oc2.indata(69);
    exchange(oc1, oc2);

    cout << "The value of c1 after exchanging the no. with c2 is: ";
    oc1.display();

    cout << "The value of c2 after exchanging the no. with c1 is: ";
    oc2.display();

    return 0;
}