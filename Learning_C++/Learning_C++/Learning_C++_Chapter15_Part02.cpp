#include<iostream>
using namespace std;

class custom
{
    int a, b;
public:
    void setData(int one, int two)
    {
        a = one;
        b = two;
    }

    int getData_A()
    {
        return a;
    }
    int getData_B()
    {
        return b;
    }
};

int main()
{
    custom a;
    a.setData(76, 59);
    cout << "Value of a (at a) is: " << a.getData_A() << endl;
    cout << "Value of b (at a) is: " << a.getData_B() << endl
         << endl;

    custom *b = &a;
    cout << "Value of a (at address of b or at a) is: "
         << (*b).getData_A() << endl;
    cout << "Value of b (at address of b or at a) is: "
         << b->getData_B() << endl << endl; // (*b) or b-> both are same.

    b->setData(49,55);// This will set a and b at class object of a not at b;
    cout << "Value of a (at address b or at a) after setData is : " << b->getData_A() << endl;
    cout << "Value of b (at address b or at a) after setData is : " << b->getData_B() << endl << endl;

    cout << "Value of a (at a) is: " << a.getData_A() << endl;
    cout << "Value of b (at a) is: " << a.getData_B() << endl << endl;
    delete b;

    custom *c = new custom;
    c->setData(60, 49);
    cout << "Value of a (at address c) is: " << c->getData_A()
         << endl;
    cout << "Value of b (at address c) is: " << c->getData_B()
         << endl << endl;

    custom **d = &c;
    cout << "Value of a (at address d or at c) is: "
         << (*d)->getData_A() << endl;
    cout << "Value of b (at address d or at c) is: "
         << (*d)->getData_B() << endl << endl;


    (*d)->setData(285, 9438);// This will set a and b at class object of c not at d;
    cout << "Value of a (at address d or at c) after setData is : " << (*d)->getData_A() << endl;
    cout << "Value of b (at address d or at c) after setData is : " << (*d)->getData_B() << endl << endl;

    cout << "Value of a (at address c) is: " << c->getData_A()
         << endl;
    cout << "Value of b (at address c) is: " << c->getData_B()
         << endl << endl;

    delete c, d;

    return 0;
}