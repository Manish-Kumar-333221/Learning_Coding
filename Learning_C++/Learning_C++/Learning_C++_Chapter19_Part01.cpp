#include<iostream>
using namespace std;

class vector
{
public:
    int size;
    int *arr;
    vector(int a)
    {
        size = a;
        arr = new int[size];
    }
    int dotProduct(vector &v)
    {
        int r = 0;
        for (int i = 0; i < size; i++)
            {
                r += arr[i] * v.arr[i];
            }
        return r;
    }
};

int main()
{
    vector v1(3);
    v1.arr[0] = 1;
    v1.arr[1] = 4;
    v1.arr[2] = 6;

    vector v2(3);
    v2.arr[0] = 2;
    v2.arr[1] = 5;
    v2.arr[2] = 3;

    int a = v1.dotProduct(v2);
    int b = v2.dotProduct(v1);
    cout << a << endl;
    cout << b << endl;

    int c = v1.dotProduct(v1);
    int d = v2.dotProduct(v2);
    cout << c << endl;
    cout << d << endl;

    return 0;
}
