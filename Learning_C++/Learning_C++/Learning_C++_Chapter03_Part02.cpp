#include<iostream>
using namespace std;
int main()
{
    // Break and Continue;
    for (int i = 0; i < 50; i++)
        {
            cout << i << "  Java is great" << endl;
            if (i == 2)
                {
                    cout << "(---Ending the loop---)" << endl;
                    break;
                }
        }

    cout << "Loop ends here" << endl;
    cout << "-------------" << endl;

    int i = 0;
    do
        {
            cout << i << "  Java is great" << endl;
            if (i == 2)
                {
                    cout << "(---Ending the loop---)" << endl;
                    break;
                }
            i++;
        }
    while (i < 5 );

    cout << "Loop ends here" << endl;
    cout << "-------------" << endl;

    for (int j = 0; j <= 5; j++)
        {
            if (j == 2)
                {
                    cout << "(---Continue the loop---)" << endl;
                    continue;
                }
            cout << j << "  Java is great" << endl;
        }

    cout << "Loop ends here" << endl;
    cout << "-------------" << endl;

    int k = 0;
    do
        {
            k++;
            if (k == 2)
                {
                    cout << "(---Continue the loop---)" << endl;
                    continue;
                }
            cout << k << "  Java is great" << endl;

        }
    while (k < 5 );
    cout << "Loop ends here" << endl;
    return 0;
}