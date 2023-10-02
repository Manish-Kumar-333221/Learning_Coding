#include<iostream>
using namespace std;

class number
{
    int a;

public:
    number()
    {
        a = 0;
    }

    number(int x)
    {
        a = x;
    }
    // When no copy constructor found by the compiler, then compliler create or supplies* its own default copy constructor.
    number(number& x)
    {
        cout << "Copy constructor called!!!!" << endl;
        a = x.a;
    }

    void display()
    {
        cout << "The Value of a for this object is: " << a << endl << endl;
    }

};

int main()
{
    number a, b, c(56), c2;
    a.display();
    b.display();
    c.display();

    number c1(c); // copy constructor invoked;
    c1.display();

    c2 = a; // copy constructor not called;
    c2.display();

    number c3 = c; // copy constructor invoked;
    c3.display();

    return 0;
}