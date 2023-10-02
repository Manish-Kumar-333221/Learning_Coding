#include<iostream>
using namespace std;

class Employee
{
private:
    int a, b, c;

public:
    int d, e;

    void setData(int a1, int b1, int c1);
    void getData()
    {
        cout << "The value of a is: " << a << endl;
        cout << "The value of b is: " << b << endl;
        cout << "The value of c is: " << c << endl;
        cout << "The value of d is: " << d << endl;
        cout << "The value of e is: " << e << endl << endl;
    }
} Ram, harry, Shubh;

void Employee :: setData(int a1, int b1, int c1)
{
    a = a1;
    b = b1;
    c = c1;
}

int main()
{
    Ram.setData(56, 64, 76);
    Ram.d = 34;
    Ram.e = 83;
    Ram.getData();

    harry.setData(5, 6, 7);
    harry.d = 8;
    harry.e = 9;
    harry.getData();

    Shubh.setData(95, 46, 75);
    Shubh.d = 86;
    Shubh.e = 59;
    Shubh.getData();

    return 0;
}