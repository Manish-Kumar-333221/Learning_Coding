#include<iostream>
using namespace std;

int factorial(int n)
{
    if(n <= 1)
        {
            return 1;
        }
    return n * factorial(n-1);
}

// Step by step calculation of factorial(4)

// factorial(4) = 4 * factorial(3);
// factorial(4) = 4 * 3 * factorial(2);
// factorial(4) = 4 * 3 * 2 * factorial(1);
// factorial(4) = 4 * 3 * 2 * 1;
// factorial(4) = 24;

// factorial(4) = 4 * factorial(3);
// factorial(3) = 3 * factorial(2);
// factorial(2) = 2 * factorial(1);
// factorial(1) = 1;

// Factorial of a number:
// 6! = 6*5*4*3*2*1 = 720
// 0! = 1 by defination
// 1! = 1 by defination
// n! = n*(n-1)!

int fib(int n)
{
    if(n <= 1)
        {
            return 1;
        }

    return fib(n-1) + fib(n-2);

}

// fib(5) = fib(4) + fib(3);
// fib(5) = {fib(3) + fib(2)} + {fib(2) + fib(1)};
// fib(5) = {{fib(2) + fib(1)} + {fib(1) + fib(0)}} + {{fib(1) + fib(0)} + {1}};
// fib(5) = {{{fib(1) + fib(0)} + {1}} + {1 + 1}} + {{1 +1} + {1}};
// fib(5) = {{{1 + 1} + {1}} + {1 + 1}} + {{1 +1} + {1}};
// fib(5) = 8;

int main()
{

    int a = 4;
    cout << "The Factorial of " << a << " is " << factorial(a) << endl << endl;

    int b = 5;
    cout << "The term in fibonacci sequence at bottom position " << b << " is " << fib(b) << endl;
    return 0;
}