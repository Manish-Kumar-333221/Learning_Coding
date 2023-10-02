#include<iostream>
#include<cstring>
using namespace std;

template <class T1, class T2>
class MyClass
{
    T1 Data1;
    T2 Data2;
public:
    MyClass(T1 a, T2 b)
    {
        Data1 = a;
        Data2 = b;
    }
    void display()
    {
        cout << Data1 << endl << Data2 << endl << endl;
    }
};

int main()
{
    MyClass<int, float> obj(5, 6.9);
    obj.display();

    MyClass<int, char> ch(3, 'A');
    ch.display();

    MyClass<float, string> str(9.7, "Hello World");
    str.display();

    MyClass<double, long> dl(9.69537997, 4896558);
    dl.display();

    return 0;
}
