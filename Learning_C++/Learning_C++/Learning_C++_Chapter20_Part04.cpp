#include<iostream>
#include<functional>
#include<algorithm>
using namespace std;

int main()
{
    int arr1[] = {12, 82, 52, 43, 81, 53, 62};
    cout << "Sorting all elements of an array in accending order: " << endl;
    sort(arr1, (arr1 + sizeof(arr1)/sizeof(int)));
    for (int i = 0; i < 7; i++)
        {
            cout << arr1[i] << " ";
        }
    cout << endl;

    int arr2[] = {12, 82, 52, 43, 81, 53, 62};
    cout << "Sorting array in accending order upto 5 elements: "
         << endl;
    sort(arr2, (arr2 + 5));
    for (int i = 0; i < 7; i++)
        {
            cout << arr2[i] << " ";
        }
    cout << endl;

    int arr3[] = {12, 82, 52, 43, 81, 53, 62};
    cout << "Sorting all elements of an array in deccending order:" << endl;
    int size = sizeof(arr3)/sizeof(int);
    sort(arr3, (arr3 + size), greater<int>());
    for (int i = 0; i < 7; i++)
        {
            cout << arr3[i] << " ";
        }
    cout << endl;

    int arr4[] = {12, 82, 52, 43, 81, 53, 62};
    cout << "Sorting array in deccending order upto 5 elements:"
         << endl;
    sort(arr4, (arr4 + 5), greater<int>());
    for (int i = 0; i < 7; i++)
        {
            cout << arr4[i] << " ";
        }
    cout << endl;

    return 0;
}
