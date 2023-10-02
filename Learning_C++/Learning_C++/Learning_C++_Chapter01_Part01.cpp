#include<iostream>
#include<string>
// #include<bits/stdc++.h>   -----> Includes all libraries
using namespace std;

// Global Variable
int glo = 78;

int main()
{
    // Built in Data type in C++ are---------->
    /*
    1) short; 2) short int; 3) unsigned short int;
    4) unsigned int; 5) int; 6) long int; 7) unsigned long int;
    8) long long int; 9) unsigned long long int;
    10) signed char; 11) unsigned char; 12) wchar_t;
    */

    // Literals
    /*
    1) float; 2) double; 3) long double;
    */

    cout << 22299099 << endl;
    cout << "Hello World" << endl;

    short a = 500;
    cout << a << endl;

    a = 455;
    cout << a << endl;

    int b = 5000;
    cout << b << endl;

    float c = 3.14f;
    cout << c << endl;

    double d = 3.14159;
    cout << d << endl;

    long double e = 5.63214l;
    cout << e << endl;

    long f = 25425453;
    cout << f << endl;

    char g = 'a';
    cout << g << endl;
    g++;
    cout << g << endl;

    bool h = 1==2;
    cout << h << endl;

    h = 1!=2;
    cout << h << endl;

    h = 1<=2;
    cout << h << endl;

    h = 1>=2;
    cout << h << endl;

    string i = "Hello world";
    cout << i << endl;

    int x, y, z;
    x = 56;
    y = 37;
    z = 85;

    cout << x << endl;
    cout << y << endl;
    cout << z << endl;

    int m = 18, n = 38, o = 47;
    cout << m << endl;
    cout << n << endl;
    cout << o << endl;

    int glo = 26;
    cout << glo << endl; // Printing Local variable
    cout << ::glo << endl; // Printing Global variable (::)

    // Reference Variable
    int A = 58;
    int &B = A;
    cout << A << endl;
    cout << B << endl;
    B = 5;
    cout << A << endl;// == 5
    cout << B << endl;// == 5

    // Typecasting
    int C = 458;
    float D = 82.8258;
    cout << (float)C << endl;
    cout << float(C) << endl;
    cout << (int)D << endl;
    cout << int(D) << endl;

    return 0;
}
