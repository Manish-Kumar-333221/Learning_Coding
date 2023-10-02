#include<iostream>
using namespace std;

void sum(int x, int y)
{
    cout << "The sum of " << x << " and "<< y << " is: " << x + y << endl << endl;
}

void swap_pointers(int* x, int* y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
}

void swap_reference(int &x, int &y)
{
    int temp = x;
    x = y;
    y = temp;
}

int & swap_return_reference(int &x, int &y)
{
    int temp = x;
    x = y;
    y = temp;
    return x;
}

int main()
{
    int a = 68, b = 42;
    sum(56, 13);

    cout << "Before Swaping" << endl;
    cout << "The value of a is " << a << "\nThe value of b is " << b << endl << endl;

    swap_pointers(&a, &b);
    cout << "After Swaping Using Pointers" << endl;
    cout << "The value of a is " << a << "\nThe value of b is " << b << endl << endl;

    int c = 85, d = 53;
    cout << "Before Swaping" << endl;
    cout << "The value of c is " << c << "\nThe value of d is " << d << endl << endl;

    swap_reference(c, d);
    cout << "After Swaping Using Reference" << endl;
    cout << "The value of c is " << c << "\nThe value of d is " << d << endl << endl;
    
    int e = 94, f = 69;
    cout << "Before Swaping" << endl;
    cout << "The value of e is " << e << "\nThe value of f is " << f << endl << endl;
    
    swap_return_reference(e, f) = 585;
    cout << "After Swaping Using Return Reference" << endl;
    cout << "The value of e is " << e << "\nThe value of f is " << f << endl;
    

    return 0;
}