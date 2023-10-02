#include<iostream>
using namespace std;

template <class T>
class New
{
public:
    int Data1;
    int Data2;
    New(int a, int b)
    {
        Data1 = a;
        Data2 = b;
    }
    void display();
};

template <class T>
void New<T> :: display()
{
    printf("Value of Data1 is: %d\n", Data1);
    printf("Value of Data2 is: %d\n", Data2);
}

void func(int a)
{
    printf("This is first func method and the value of a is: %d\n", a);
}

template <class T>
void func(T a)
{
    cout << "This is second func method and the value of a is: " << a << endl;
}

template <class T>
void func1(T a)
{
    cout << "This is second func1 method and the value of a is: " << a << endl;
}

int main()
{
    New<int> n(37, 48);
    n.display();

    func(29);
    func(46577485859);
    func(686.689);
    func1("Hello World");
    return 0;
}
