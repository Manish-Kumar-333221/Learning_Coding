#include<iostream>
using namespace std;
/*
case 1:
class B : public A
{
  Order Of execution : First A then B.
};

case 2:
Class C : public B, public A
{
  Order Of execution: First B then A and then C.
};

case 3:
class C : public A, public virtual B
{
  Order Of execution: First B then A and then C.
};

case 4:
class C : public virtual B, public virtual A
{
  Order Of execution: First B then A and then C.
};
*/

class Base1
{
    int data;
public:
    Base1(int i)
    {
        data = i;
        cout << "Base1 Class constructor is called." << endl;
    }

    void printData1()
    {
        cout << "The value of Base1 Data is: " << data << endl;
    }
};

class Base2
{
    int data;
public:
    Base2(int i)
    {
        data = i;
        cout << "Base2 Class constructor is called." << endl;
    }

    void printData2()
    {
        cout << "The value of Base2 Data is: " << data << endl;
    }
};

class Derived : public Base1, public Base2
{
    int derived1, derived2;
public:
    Derived(int a, int b, int c, int d): Base2(b), Base1(a)
    {
        derived1 = c;
        derived2 = d;
        cout << "Derived Class constructor is called." << endl;
    }
    void printData3()
    {
        cout << "The value of Derived1 is: " << derived1 << endl;
        cout << "The value of Derived2 is: " << derived2 << endl;
    }
};
int main()
{
    Derived D(1, 2, 3, 4);
    D.printData1();
    D.printData2();
    D.printData3();
    return 0;
}