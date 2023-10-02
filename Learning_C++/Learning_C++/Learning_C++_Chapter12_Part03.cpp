#include<iostream>
using namespace std;

class Base
{
    int data1;

public:
    int data2;
    void setData();
    int getData1();
    int getData2();
};

void Base :: setData()
{
    data1 = 10;
    data2 = 20;
}

int Base :: getData1()
{
    return data1;
}

int Base :: getData2()
{
    return data2;
}

class Derived : private Base // private visibility mode
{
    int data3;

public:
    void process();
    void display();
};

void Derived :: process()
{
    setData();
    data3 = getData1() * data2;
}

void Derived :: display()
{
    cout << "The value of Data 1 is: " << getData1() << endl;
    cout << "The value of Data 2 is: " << data2 << endl;
    cout << "The value of Data 3 is: " << data3 << endl;
}

int main()
{
    Derived a;
    // a.setData(); // This will throw an error because it is a private member of Derived class as visibility mode of base class is private.
    a.process();
    a.display();

    return 0;
}