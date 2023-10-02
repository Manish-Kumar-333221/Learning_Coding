#include<iostream>
using namespace std;

class y;

class x
{
    int data;
public:
    void setValue(int value)
    {
        data = value;
    }
    friend void add(x, y);

    void d()
    {
        cout << "Hello ";
    }
};

class y
{
    int num;
public:
    void setValue(int value)
    {
        num = value;
    }
    friend void add(x, y);

    void d()
    {
        cout << "World";
    }
};

void add(x o1, y o2)
{
    cout << "The value of sum of data of X and Y is: " << o1.data + o2.num << endl;
    o1.d();
    o2.d();
}

int main()
{
    x a1;
    a1.setValue(7);

    y b1;
    b1.setValue(5);

    add(a1, b1);
}