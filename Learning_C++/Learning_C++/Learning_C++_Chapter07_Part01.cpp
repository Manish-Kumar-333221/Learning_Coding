#include<iostream>
using namespace std;

int sum(int a, int b, int c)
{
    int d = a + b + c;
    return d;
}
void print()
{
    cout << "Print........" << endl;
}

void print_sum(int a, int b)
{
    cout << a+b << endl;
}

int main()
{
    int a = 75, b = 485, c = 58;
    cout << sum(a, b, c) << endl;
    print();
    print_sum(83, 92);
    return 0;
}