#include<iostream>
using namespace std;

class Employee
{
    int id;
    static int count; // Default value of static variable is 0

    string rank(int a)
    {
        if(a == 1)
            {
                return "st";
            }
        else if (a == 2)
            {
                return "nd";
            }
        else if (a == 3)
            {
                return "rd";
            }
        else
            {
                return "th";
            }
    }

public:
    void setData()
    {
        cout << "Enter ID of the Employee: ";
        cin >> id;
        count++;
    }

    void getData()
    {
        cout << "The ID of the Employee is: " << id << " and this is the " << count << rank(count) << " Employee." << endl;
    }

    static void getCount();

};

int Employee :: count;
void Employee :: getCount()
{
    // cout << id << endl; // Theows an error because it is not an static variable
    cout << "The value of count is: " << count << endl << endl;
}

int main()
{
    Employee harry, Ram, Nikhil;
    harry.setData();
    harry.getData();
    Employee :: getCount();

    Ram.setData();
    Ram.getData();
    Employee :: getCount();

    Nikhil.setData();
    Nikhil.getData();
    Employee :: getCount();

    return 0;
}