#include<iostream>
using namespace std;

class point
{
    int x;
    int y;
public:
    point(int a, int b)
    {
        x = a;
        y = b;
    }
    void display()
    {
        cout << "The Point is (" << x << "," << y << ")" << endl;
    }
};

int main()
{
    point a(5, 7);
    a.display();
    
    point b(6, 4);
    b.display();

    return 0;
}