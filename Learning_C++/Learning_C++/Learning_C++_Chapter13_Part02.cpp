#include<iostream>
using namespace std;

class Base1
{
public:
    void greet()
    {
        cout << "How are you?" << endl;
    }
};

class Base2
{
public:
    void greet()
    {
        cout << "What about you?" << endl;
    }

};

class Derived : private Base1, public Base2
{
public:
    void greet()
    {
        Base2 :: greet();
    }
};

class Old
{
public:
    void say()
    {
        cout << "Hello World" << endl;
    }
};

class New : public Old
{
public:
    // @Override
    void say()
    {
        cout << "Hello Duniya" << endl;
    }
};

int main()
{
    Base1 B1;
    B1.greet();

    Base2 B2;
    B2.greet();

    Derived D;
    D.greet();

    cout << endl;
    Old O;
    O.say();

    New N;
    N.say();

    return 0;
}