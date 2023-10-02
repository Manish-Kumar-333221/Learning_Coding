#include<iostream>
using namespace std;

// Forward Declaration
class complex;

class calculator
{
public:
    int add(int a, int b)
    {
        return a + b;
    }
    int sumRealComplex(complex, complex);
    int sumCompComplex(complex, complex);
};

class complex
{
    int a;
    int b;
    // Individually declarating functions as friends
    // friend int calculator :: sumRealComplex(complex o1, complex o2);
    // friend int calculator :: sumCompComplex(complex o1, complex o2);
    
    // Aliter: Declarating the whole calculator class as friend
    friend class calculator;

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
int calculator :: sumRealComplex(complex o1, complex o2)
{
    return o1.a + o2.a;
}

int calculator :: sumCompComplex(complex o1, complex o2)
{
    return o1.b + o2.b;
}

int main()
{
    complex o1, o2;
    o1.setData(1, 4);
    o1.print();

    o2.setData(5, 8);
    o2.print();

    calculator calc;
    int res = calc.sumRealComplex(o1, o2);
    cout << "The sum of the real part of o1 and o2 is: " << res << endl;
    int resc = calc.sumCompComplex(o1, o2);
    cout << "The sum of the complex part of o1 and o2 is: " << resc << endl;
    return 0;
}