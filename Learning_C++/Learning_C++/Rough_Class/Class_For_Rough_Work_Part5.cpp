#include<iostream>
using namespace std;

class print
{
public:
    void user()
    {
        long long a;
        long double b = 0.0;
        cout << "Enter the nth number: ";
        cin >> a;
        run(a,b);
    }

    void run(long long a, long double &b)
    {
        for (unsigned long long i = 1; i <= a; i++)
            {
                cout << "(1/" << i << "x" << i << ")";
                b = b + (1.0/(i*i));
                if (i < a)
                    {
                        cout << " + ";
                    }
            }
        cout << " = " << b;
    }
};

int main()
{
    print p;
    p.user();
    return 0;
}