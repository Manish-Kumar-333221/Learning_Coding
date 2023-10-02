#include<iostream>
using namespace std;

void my(int *x, int y)
{
    *x = y;
    // w = y;
    cout << "my is called;" << endl;
}
void my1(int **x, int y)
{
    **x = y;
    // *w = y;
    // v = y;
    cout << "my1 is called;" << endl;
}
void my2(int ***x, int y)
{
    ***x = y;
    // **w = y;
    // *v = y;
    // u = y;
    cout << "my2 is called;" << endl;
}
void my3(int ****x, int y)
{
    ****x = y;
    // ***w = y;
    // **v = y;
    // *u = y;
    // t = y;
    cout << "my3 is called;" << endl;
}

void you(int &a, int b)
{
  a = b;
}

int main()
{
    int var = 10;
    int *var1 = &var;
    int **var2 = &var1;
    int ***var3 = &var2;

    my(&var, 500);
    // &var = address of var;
    cout << "Value of var is: " << var << endl;
    my(var1, 5000);
    // var1 = address of var;
    cout << "Value of var is: " << var << endl;
    my1(&var1, 5000);
    // &var1 = address of var1;
    cout << "Value of var is: " << var << endl;
    my1(var2, 50000);
    // var2 = address of var1;
    cout << "Value of var is: " << var << endl;
    my2(&var2, 50000);
    // &var2 = address of var2;
    cout << "Value of var is: " << var << endl;
    my2(var3, 500000);
    // var3 = address of var2;
    cout << "Value of var is: " << var << endl;
    my3(&var3, 5000000);
    // &var3 = address of var3;
    cout << "Value of var is: " << var << endl << endl;
    
    int x = 100;
    int y = 50;
    you(x, y);
    you(y, x);
    cout << "The value of x is: " << x << endl;
    cout << "The value of y is: " << y << endl;
    
    return 0;
}