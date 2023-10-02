#include<iostream>
using namespace std;

// Base Class
class Employee
{
public:
    int id;
    int salary;
    Employee() {}
    Employee(int eId)
    {
        id = eId;
        salary = 50;
    }
};

// Derived Class
/*
class {{derived-class-name}} : {{visibility-mode}} {{base-class-name}}
class programmer
{
  class members/methods/etc...
};

Note:
1. Default visibility mode is private.
2. private visibility mode: public members of the base class becomes private members of the derived class.
3. public visibility mode: public members of the base class becomes public members of the derived class.
4. private members of the base class never inherit in derived class.
*/

// Creating Programmer class derived from Employee base class
class Programmer : public Employee
{
public:
    int languageKnown;
    Programmer(int pId, int knowLanguage = 5)
    {
        id = pId;
        languageKnown = knowLanguage;
    }

    void getId()
    {
        cout << id << endl;
    }
};

int main()
{
    Employee harry(1), Ram(2);
    cout << harry.salary << endl;
    cout << Ram.salary << endl;

    Programmer skillF(10);
    cout << skillF.languageKnown << endl;
    cout << skillF.id << endl;
    skillF.getId();

    return 0;
}