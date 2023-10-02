#include<iostream>
#include<cmath>
using namespace std;

class point
{
    int x1, y1, x2, y2;
    friend void displayDifference(point);

public:
    point(int a, int b, int c, int d)
    {
        x1 = a;
        y1 = b;
        x2 = c;
        y2 = d;
    }

    void displayDifference()
    {
        cout << "The difference between Point (" << x1 << "," << y1 << ") and (" << x2 << "," << y2 << ") is: " << sqrt(((x2 - x1) * (x2 - x1)) + ((y2 - y1) * (y2 - y1))) << endl;
    }

};

void displayDifference(point a)
{
    cout << "The difference between Point (" << a.x1 << "," << a.y1 << ") and (" << a.x2 << "," << a.y2 << ") is: " << sqrt(((a.x2 - a.x1) * (a.x2 - a.x1)) + ((a.y2 - a.y1) * (a.y2 - a.y1))) << endl;

}

int main()
{
    point a(1, 1, 1, 1);
    a.displayDifference();
    // displayDifference(a);

    point b(0, 1, 0, 6);
    displayDifference(b);

    point c(1, 0, 70, 0);
    displayDifference(c);
    return 0;
}