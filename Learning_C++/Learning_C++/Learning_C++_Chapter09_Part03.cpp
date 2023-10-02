#include<iostream>
using namespace std;

class complex
{
    int a;
    int b;
    friend complex sumComplex(complex o1, complex o2);

public:
    void setData(int v1, int v2)
    {
        a = v1;
        b = v2;
    }

    void print()
    {
        cout << "Your Number is: " << a << " + " << b << "i" << endl;
    }

};

complex sumComplex(complex o1, complex o2)
{
    complex o3;
    o3.setData((o1.a + o2.a), (o1.b + o2.b));
    return o3;
}

int main()
{
    complex c1, c2, sum;
    c1.setData(1, 4);
    c1.print();

    c2.setData(5, 8);
    c2.print();

    sum = sumComplex(c1, c2);
    sum.print();
    return 0;
}