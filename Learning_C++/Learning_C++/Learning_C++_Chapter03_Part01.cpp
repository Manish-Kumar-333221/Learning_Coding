#include<iostream>
using namespace std;
int main()
{
    cout
         << "Printing first 10 natural number (using while loop):"
         << endl;
    int a1 = 1;
    int a2 = 10;
    while (a1 <= a2)
        {
            if (a1 <= (a2 - 1))
                {
                    cout << a1++ << ",";
                }
            else
                {
                    cout << a1++;
                }
        }
    cout << "\n" << endl;

    cout
         << "Printing first 10 natural number in reverse order(using while loop):" 
         << endl;
    int a3 = 10;
    int a4 = 1;
    while (a3 >= a4)
        {
            if (a3 >= (a4 + 1))
                {
                    cout << a3-- << ",";
                }
            else
                {
                    cout << a3--;
                }
        }
    cout << "\n" << endl;

    cout <<
         "Printing first 10 natural number (using do while loop):" << endl;
    int b1 = 1;
    int b2 = 10;
    do
        if (b1 <= (b2 - 1))
            {
                cout << b1++ << ",";
            }
        else
            {
                cout << b1++;
            }
    while (b1 <= b2 );
    cout << "\n" << endl;

    cout <<
         "Printing first 10 natural number reverse order (using do while loop):" << endl;
    int b3 = 10;
    int b4 = 1;
    do
        if (b3 >= (b4 + 1))
            {
                cout << b3-- << ",";
            }
        else
            {
                cout << b3--;
            }
    while (b3 >= b4 );
    cout << "\n" << endl;

    cout <<
         "Printing first 10 natural number (using for loop):" << endl;
    int c = 1;
    int c2 = 10;
    for (int c1 = c; c1 <= c2; c1++)
        {
            if (c1 <= (c2 - 1))
                {
                    cout << c1 << ",";
                }
            else
                {
                    cout << c1;
                }
        }
    cout << "\n" << endl;

    cout <<
         "Printing first 10 natural number reverse order (using for loop):" << endl;
    int c3 = 10;
    int c5 = 1;
    for (int c4 = c3; c4 >= c5; c4--)
        {
            if (c4 >= (c5 + 1))
                {
                    cout << c4 << ",";
                }
            else
                {
                    cout << c4;
                }
        }
    cout << "\n" << endl;

    // Printing first 10 natural even no.
    cout <<
         "Printing first 10 natural even number (using for loop):" << endl;
    int c7 = 10;
    for (int c6 = 0; c6 < c7; c6++)
        {
            if (c6 <= (c7 - 2))
                {
                    cout << (2 * c6) << (",");
                }
            else
                {
                    cout << (2 * c6);
                }
        }
    cout << "\n" << endl;

    // Printing first 10 natural odd no.
    cout <<
         "Printing first 10 natural odd number (using for loop):" << endl;
    int c9 = 10;
    for (int c8 = 0; c8 < c9; c8++)
        {
            if (c8 <= (c9 - 2))
                {
                    cout << (2 * c8 + 1) << (",");
                }
            else
                {
                    cout << (2 * c8 + 1);

                }
        }
    return 0;
}