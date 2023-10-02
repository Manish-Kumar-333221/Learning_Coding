#include<iostream>
using namespace std;

class call
{
    int a, b;

public:
    call(void);

    void printData()
    {
        cout << "The value of A is: " << a << " and the value of B is: " << b << endl;
    }
};

call :: call(void)
{
    a = 10;
    b = 0;
}

class call1
{
    int a, b;

public:
    call1(int, int);

    void printData1()
    {
        cout << "\nThe value of A is: " << a << "\nThe value of B is: " << b << endl;
    }
};

call1 :: call1(int x, int y)
{
    a = x;
    b = y;
}

int main()
{
    call a, b, c;
    a.printData();
    b.printData();
    c.printData();

    // Implict call
    call1 d(67, 39);
    d.printData1();

    // Explicit call
    call1 e = call1(79, 24);
    e.printData1();

    return 0;
}