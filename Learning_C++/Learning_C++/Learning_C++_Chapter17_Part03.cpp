#include<iostream>
using namespace std;

class Base_Class
{
public:
    int varBase;
    virtual void display()
    {
        cout << "Value of varBase from Base_Class is: "
             << varBase << endl;
    }
};

class Derived_Class : public Base_Class
{
public:
    int varDerived = 26;
    void display()
    {
        cout << "Value of varBase from Derived_Class is: "
             << varBase << endl;
        cout << "Value of varDerived from Derived_Class is: "
             << varDerived << endl;
    }
};

int main()
{
    Base_Class obj_Base;
    Base_Class *obj_Base_Pointer;

    Derived_Class obj_Derived;
    Derived_Class *obj_Derived_Pointer;

    obj_Base_Pointer = &obj_Derived;
    obj_Base_Pointer->varBase = 40;
    obj_Base_Pointer->display(); // this will call Derived Class display function because Base Class display() function is virtual;

    return 0;
}
