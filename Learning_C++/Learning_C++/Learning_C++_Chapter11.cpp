#include<iostream>
using namespace std;

int count = 0;

class num
{
public:
    num()
    {
        count++;
        cout << "This is the time when the constructor is called for the object number: " << count << endl;
    }

    ~num()
    {
        cout << "This is the time when the distructor is called for the object number: " << count << endl;
        count--;
    }

    void d()
    {
        cout << "" << endl;
    }
};

int main()
{
    cout << "We are inside our main function"  << endl;
    cout << "Creating out first object" << endl;
    num n1;
    {
        cout << "Enterning this block" << endl;
        cout << "Creating two more objects" << endl;
        num n2, n3;
        cout << "Exiting this block" << endl;
    }
    cout << "Back to main function" << endl;

    return 0;
}