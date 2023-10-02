#include<iostream>
using namespace std;

template <class T1 = int, class T2 = float, class T3 = char>
class MyClass
{
    T1 Data1;
    T2 Data2;
    T3 Data3;
public:
    MyClass(T1 a, T2 b, T3 c)
    {
        Data1 = a;
        Data2 = b;
        Data3 = c;
    }
    void display()
    {
        cout << "The value of Data1 is: " << Data1 << endl
             << "The value of Data2 is: " << Data2 << endl
             << "The value of Data3 is: " << Data3 << endl
             << endl;
    }
};

int main()
{
    MyClass<> obj(5, 6.9, 'C');
    obj.display();

    MyClass<long> on(969537997, 56.975, 'G');
    on.display();

    MyClass<float, string> tw(9.7, "Hello World", 'L');
    tw.display();

    MyClass<int, char, int> th(576, 'A', 142513);
    th.display();

    return 0;
}