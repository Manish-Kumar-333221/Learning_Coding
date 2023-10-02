#include<iostream>
using namespace std;

class ThisObject
{
    int a ;
public:
    ThisObject& setData(int a)
    {
        this->a = a;
        return *this;
    }
    void getData()
    {
        cout << "Value of a is: " << a << endl;
    }
};

int main()
{
    ThisObject t;
    t.setData(56).getData();

    return 0;
}