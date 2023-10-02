// C++ Program to Find Factorial

// The factorial of a positive integer n is equal to 1*2*3*...n. You will learn to calculate the factorial of a number using for loop in this example.

#include <iostream>
using namespace std;

int main()
{
    for (int i = 0; i < 100; i++)
        {
            unsigned int n;
            unsigned long long factorial = 1;

            cout << "Enter a positive integer: ";
            cin >> n;

            for(int i = 1; i <=n; ++i)
                {
                    factorial *= i;
                }

            cout << "Factorial of " << n << " = " << factorial << endl << endl;
        }
    return 0;
}

// https://www.programiz.com/cpp-programming/examples/factorial