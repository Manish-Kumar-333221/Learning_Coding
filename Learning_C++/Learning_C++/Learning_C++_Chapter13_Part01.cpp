#include<iostream>
using namespace std;

class Base
{
protected:
    int a = 76;

private:
    int b;

public:
    void display()
    {
        cout << "The value of a is: " << a << endl;
    }
};

class Derived : private Base
{
public:
    void call()
    {
        display();
    }
};

class Derived1 : public Base
{
};

class Derived2 : protected Base
{
public:
    void call()
    {
        display();
    }
};

/*
     			 |   Public     |   Private    |  Protected   |
				  |  Derivation  |  Derivation  |  Derivation  |
				  |––––––––––––––|––––––––––––––|––––––––––––––|
Public members:   |Public	    |Private	   |Protected 	|
Private members:  |Not Inherited |Not Inherited |Not Inherited | Protected members:|Protected	 |Private	   |Protected	 |
*/

int main()
{
    Derived a;
    // a.display(); // This will throw an error
    a.call();

    Derived1 b;
    b.display();

    Derived2 c;
    // c.display(); // This will throw an error
    c.call();

    return 0;
}