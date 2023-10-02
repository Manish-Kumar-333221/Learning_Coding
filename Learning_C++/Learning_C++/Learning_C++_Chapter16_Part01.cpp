#include<iostream>
using namespace std;

class This
{
    int a ;
public:
    void setData(int a)
    {
        this->a = a;
    }
    void getData()
    {
        cout << "Value of a is: " << a << endl;
    }
};

int main()
{
    This t;
    t.setData(56);
    t.getData();

    return 0;
}