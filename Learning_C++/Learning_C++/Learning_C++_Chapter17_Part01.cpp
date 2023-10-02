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
    Base_Class *obj_Base_Pointer;

    Derived_Class obj_Derived;

    obj_Base_Pointer = &obj_Derived; // pointing Base_Class_Pointer to Derived_Class_Object;
    obj_Base_Pointer->varBase = 86;
    // obj_Base_Pointer->varDerived = 72; // This will throw an error;
    obj_Base_Pointer->display(); // This will only invok Base_Class function not Derived_Class;

    cout << endl;

    Derived_Class *obj_Derived_Pointer;
    obj_Derived_Pointer = &obj_Derived; // pointing Derived_Class_Pointer to Derived_Class_Object;
    obj_Derived_Pointer->varBase = 924;
    obj_Derived_Pointer->varDerived = 439;
    obj_Derived_Pointer->display();
    return 0;
}
