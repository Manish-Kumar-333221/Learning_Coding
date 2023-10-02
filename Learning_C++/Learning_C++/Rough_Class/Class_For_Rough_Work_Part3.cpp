#include<iostream>
using namespace std;

class test
{
public:

    int fact;
    void accept()
    {
        cout << "Enter the no. to calculate the factorial: ";
        cin >>fact;
    }
    void display(unsigned int x)
    {
        unsigned long long int product = 1;
        if (x == 0 || x == 1)
            {
                cout << "The factorial of " << x << " is: " << product << endl;
            }
        else
            {

                for (int i = 1; i <= x; i++)
                    {
                        product *= i;
                    }
                cout << "The factorial of " << x << " is: " << product << endl;
            }
    }
};

int main()
{
    test t;
    t.accept();
    t.display(t.fact);
    return 0;
}