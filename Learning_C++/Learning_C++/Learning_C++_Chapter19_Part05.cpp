#include<iostream>
using namespace std;

template <class T>
void swapp(T &x, T &y)
{
    T temp = x;
    x = y;
    y = temp;
}

template <class T1, class T2>
float func_Average(T1 a, T2 b)
{
    return (a + b)/2;
}

int main()
{
    int x = 57;
    int y = 88;
    swapp(x, y);
    printf("The value of x is: %d \nThe value of y is: %d\n\n", x, y);

    int a = 10;
    float b = 20.55;
    float c = func_Average(a, b);
    printf("Average value of %d and %.2f is: %.3f\n", a, b, c);
    return 0;
}
