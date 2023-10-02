#include<iostream>
using namespace std;

class complex
{
    int a, b, c;

public:
    complex(int x, int y = 0, int z = 0)
    {
        a = x;
        b = y;
        c = z;
    }

    void print()
    {
        cout << "The value of a is: " << a << "\nThe value of b is: " << b << "\nThe value of c is: " << c << endl << endl;
    }
};

int main()
{
    complex a(95), b(15, 69), c(25, 53, 86);
    a.print();

    b.print();

    c.print();
    return 0;
}