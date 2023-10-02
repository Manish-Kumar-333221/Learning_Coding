#include<iostream>
using namespace std;

class Base1
{
protected:
    int Base1;

public:
    void set_Base1(int a)
    {
        Base1 = a;
    }
};

class Base2
{
protected:
    int Base2;

public:
    void set_Base2(int a)
    {
        Base2 = a;
    }
};

class Derived : public Base1, public Base2
{
public:
    void display()
    {
        cout << "The value of Base1 is: " << Base1
             << "\nThe value of Base2 is: " << Base2
             << endl;
        cout << "The sum of Base1 and Base2 is: "
             << Base1 + Base2 << endl;
    }
};

int main()
{
    Derived D1;
    D1.set_Base1(56);
    D1.set_Base2(75);
    D1.display();

    return 0;
}