#include<iostream>
using namespace std;

class Base_Class
{
public:
    int varBase;
    void display()
    {
        cout << "Value of varBase from Base_Class is: "
             << varBase << endl;
    }
};

class Derived_Class : public Base_Class
{
public:
    int varDerived;
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

    Base_Class *obj_Base_Pointer = new Base_Class(); // declaring pointer object;
    obj_Base_Pointer->varBase = 10;
    obj_Base_Pointer->display();
    delete obj_Base_Pointer; // deleting pointer object before redeclaring to derived or same class object;

    obj_Base_Pointer = &obj_Base; // pointing or redeclaring pointer object to same class object;
    obj_Base_Pointer->varBase = 20;
    obj_Base_Pointer->display();
    delete obj_Base_Pointer;

    Derived_Class obj_Derived;

    obj_Base_Pointer = &obj_Derived; // pointing or redeclaring pointer object to derived class object;
    obj_Base_Pointer->varBase = 30;
    obj_Base_Pointer->display();

    cout << endl;

    Derived_Class *obj_Derived_Pointer = new Derived_Class();
    obj_Derived_Pointer->varBase = 40;
    obj_Derived_Pointer->varDerived = 50;
    delete obj_Derived_Pointer;

    obj_Derived_Pointer = &obj_Derived;
    obj_Derived_Pointer->varBase = 60;
    obj_Derived_Pointer->varDerived = 70;
    obj_Derived_Pointer->display();
    delete obj_Derived_Pointer;

    return 0;
}