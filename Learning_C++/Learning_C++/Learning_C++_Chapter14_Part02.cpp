#include<iostream>
using namespace std;
/*
Syntex for initialisation list in constructor.
constructor(argument-list) : initialisation section
{
  assignment + other code;
}

class Test
{
   int a;
   int b;
public:
   Test(int i, int j) : a(i), b(j)
  {
    constructor body;
  }
};
*/

class Test
{
    int a;
    int b;
public:
    // Test(int i, int j) : a(i), b(j)
    // Test(int i, int j) : a(i), b(i + j)
    // Test(int i, int j) : a(i), b(2 * j)
    // Test(int i, int j) : a(i), b(a + j)
    // Test(int i, int j) : b(j), a(b + i) // --> Red flag this will create problem because a will be initialised first
    Test(int i, int j)
    {
        a = i;
        b = j;
        cout << "Test Constructor called." << endl;
        cout << "The value of a is: " << a << endl;
        cout << "The value of b is: " << b << endl;
    }
};

int main()
{
    Test Ram(56, 77);

    return 0;
}