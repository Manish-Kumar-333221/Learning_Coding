#include<iostream>
using namespace std;

class complex
{
    int a, b;

public:
    complex()
    {
        a = 0;
        b = 0;
    }

    complex(int x)
    {
        a = x;
        b = 0;
    }

    complex(int x, int y)
    {
        a = x;
        b = y;
    }

    void display()
    {
        cout << "The value of a is: " << a << "\nThe value of b is: " << b << endl << endl;
    }
};

int main()
{
    complex a, b(5), c(4, 6);
    a.display();

    // complex b(5);
    b.display();

    // complex c(4, 6);
    c.display();

    return 0;
}