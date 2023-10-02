#include<iostream>
using namespace std;

class Employee
{
    int Id;
    int salary;

public:
    void setId()
    {
        salary = 122;
        cout << "Enter the ID of the Employee: ";
        cin >> Id;
    }

    void getId()
    {
        cout << "The ID of the Employee is: " << Id << endl << endl;
    }
};

int main()
{
    // Employee harry, Ram, Shubh;
    // harry.setId();
    // harry.getId();

    int a = 5;
    Employee abc[a];
    for (int i = 0; i < a; i++)
        {
            abc[i].setId();
            abc[i].getId();
        }
    return 0;
}