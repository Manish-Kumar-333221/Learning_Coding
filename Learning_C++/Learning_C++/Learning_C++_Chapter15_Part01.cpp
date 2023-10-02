#include<iostream>
using namespace std;

int main()
{
    int a = 56;
    int *ptr = &a;
    *ptr = 567;
    cout << "Value of a is: " << a << endl;
    cout << "Value of *ptr is: " << *ptr << endl;

    int *a1 = new int(585);
    cout << "The value at address a1 is: " << *a1 << endl;
    delete (a1);
    cout << "The value at address a1 after deallocating a1 is: "
         << *a1 << endl << endl;

    int *b = new int(35);
    cout << "The value at address b is: " << *b << endl;

    int *c = b;
    cout << "The value at address c or at address b is: "
	     << *c << endl << endl;
    delete(b);// delete(c); // both are same

    float *d = new float(76.25);
    cout << "The value at address d is: " << *d << endl;

    delete d;
    cout << "The value at address d after deallocating d is: "
         << *d << endl << endl;


    int *arr = new int[5];
    arr[0] = 34;
    // arr[1] = 70;
    *(arr + 1) = 70;
    // arr[2] = 45;
    *(arr + 2) = 45;
    arr[3] = 23;
    arr[4] = 15;

    for(int i = 0; i < 5; i++)
        {
            cout << "Value of arr[" << i << "] is: "
                 << arr[i] << endl;
        }
    delete[] arr;

    cout << "\nValue of Array arr[] after deallocating arr[]."
         << endl;
    for(int i = 0; i < 5; i++)
        {
            cout << "Value of arr[" << i << "] is: "
                 << arr[i] << endl;
        }
    return 0;
}