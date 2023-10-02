// C++ Program to Find Largest Number Among Three Numbers

// In this example, you'll learn to find the largest number among three numbers using if, if else and nested if else statements.

#include <iostream>
using namespace std;

int main()
{
    int n1, n2, n3;

    cout << "Enter three numbers: ";
    cin >> n1 >> n2 >> n3;

    if (n1 >= (n2 | n3) )
        {
            cout << "Largest number: " << n1;
        }
    else if (n2 >= (n1 | n3) )
        {
            cout << "Largest number: " << n2;
        }
    else
        {
            cout << "Largest number: " << n3;
        }

    return 0;
}

// https://www.programiz.com/cpp-programming/examples/largest-number-among-three