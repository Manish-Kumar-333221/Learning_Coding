#include<iostream>
#include<iomanip>
using namespace std;
int c = 45;
int main()
{
    // Build in Data types
    cout << "*******Build in Data types*******" << endl;
    int a, b, c;
    a = 57;
    b = 34;
    c = a + b;
    cout << "The sum is of " << a << " & " << b << " is: " << c << endl;
    cout << "The global c is " << ::c << endl << endl;

    // Float, double and long double Literals
    cout << "***Float,double and long double Literals***" << endl;
    float d=34.4F;
    long double e = 34.4L;
    cout << "The size of 34.4 is "  << sizeof(34.4) << endl;
    cout << "The size of 34.4f is " << sizeof(34.4f) << endl;
    cout << "The size of 34.4F is " << sizeof(34.4F) << endl;
    cout << "The size of 34.4l is " << sizeof(34.4l) << endl;
    cout << "The size of 34.4L is " << sizeof(34.4L) << endl;
    cout << "The value of d is " << d << endl << "The value of e is " << e << endl << endl;

    // Reference Variables
    // Rohan Das --> Monty --> Rohu --> Dangerous Coder
    cout << "*******Reference Variables*******" << endl;
    float x = 455;
    float & y = x;
    cout << x << endl;
    cout << y << endl << endl;
    y = 53;
    cout << x << endl;
    cout << y << endl << endl;

    // Typecasting
    cout << "*******Typecasting*******" << endl;
    int f = 45;
    float g = 45.46;
    cout << "The value of f is " << (float)f << endl;
    cout << "The value of f is " << float(f) << endl;

    cout << "The value of g is " << (int)g << endl;
    cout << "The value of g is " << int(g) << endl;
    int h = int(g);

    cout << "The expression is " << f + g << endl;
    cout << "The expression is " << f + int(g) << endl;
    cout << "The expression is " << f + (int)g << endl;

    // Constants in C++
    cout << "*******Constants in C++*******" << endl;
    int i = 34;
    cout << "The value of i was: " << i << endl;
    i = 45;
    cout << "The value of i is: " << i << endl << endl;

    const int I = 3;
    cout << "The value of I was: " << I << endl;
    //I = 45;  //You will get an error because I is constant
    cout << "The value of I is: " << a << endl << endl;

    // Manipulators in C++
    cout << "*******Manipulators in C++*******" << endl;
    int j =3, k=78, l=1233;
    cout << "The value of j without setw is: " << j << endl;
    cout << "The value of k without setw is: " << k << endl;
    cout << "The value of l without setw is: " << l << endl;

    cout << "The value of j is: " << setw(4) << j << endl;
    cout << "The value of k is: " << setw(4) << k << endl;
    cout << "The value of l is: " << setw(4) << l << endl << endl;

    // Operator Precedence
    cout << "*******Operator Precedence*******" << endl;
    int m =3, n=4;
    // int o = (a*5)+b;
    int o = ((((m*5)+n)-45)+87);
    cout << o;
    return 0;
}
