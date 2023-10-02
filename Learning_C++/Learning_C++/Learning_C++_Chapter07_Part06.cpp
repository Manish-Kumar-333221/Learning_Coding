#include<iostream>
using namespace std;

void sum(double a, int b)
{
    cout << "The sum of double " << a << " and " << b << " is " << a + b << endl;
}

void sum(float a, int b)
{
    cout << "The sum of float " << a << " and " << b << " is " << a + b << endl;
}

void sum(int a, int b)
{
    cout << "The sum of int " << a << " and " << b << " is " << a + b << endl;
}

void sum(int a, int b, int c)
{
    cout << "The sum of int " << a << ", " << b << " and " << c << " is " << a + b + c << endl << endl;
}

void volume(int a)
{
    cout << "The volume of Cube of side " << a << "cm is " << a * a * a << "cm^3" << endl;
}

void volume(int l, int b, int h)
{
    cout << "The volume of Cuboid of sides " << l << "cm, " << b << "cm and " << h << "cm is " << l * b * h << "cm^3" << endl;
}

void volume(int r, int h)
{
    cout << "The volume of Cylinder of radius " << r << "cm and heigth " << h << "cm is " << 3.14 * r * r * h << "cm^2" << endl;
}

int main()
{
    sum(3.9, 6);
    sum(3.3f, 6);
    sum(3, 6);
    sum(3, 6, 9);

    volume(5);
    volume(5, 6, 7);
    volume(4, 10);

    return 0;
}