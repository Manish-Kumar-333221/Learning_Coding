#include<iostream>
using namespace std;
int main()
{
    int age = 20;
    if (age > 18)
        {
            cout << "Yes boy you can drive!" << endl;;
        }
    else
        {
            cout << "No boy you cannot drive yet!" << endl;
        }
    cout << "-----------------------" << endl;
    // OR
    int age1 = 18;
    bool cond = (age1 > 18);;
    if (cond)
        {
            cout << "Yes boy you can drive!" << endl;
        }
    else
        {
            cout << "No boy you cannot drive yet!" << endl;
        }
    cout << "-----------------------" << endl;

    cout << "For Logical AND" << endl;
    bool a = true;
    bool b = false;
    if (a == true && b == false)
        {
            cout << "Yes" << endl;
        }
    else
        {
            cout << "Not" << endl;
        }
    cout << "-----------------------" << endl;

    bool a1 = true;
    bool b1 = false;
    if (a1 == true && b1 == true)
        {
            cout << "Yes" << endl;
        }
    else
        {
            cout << "Not" << endl;
        }
    cout << "-----------------------" << endl;

    bool a2 = true;
    bool b2 = true;
    bool c2 = true;
    if (a2 && b2 && c2)
        {
            cout << "Yes" << endl;
        }
    else
        {
            cout << "Not" << endl;
        }
    cout << "-----------------------" << endl;
    bool a3 = true;
    bool b3 = false;
    bool c3 = true;
    if (a3 && b3 && c3)
        {
            cout << "Yes" << endl;
        }
    else
        {
            cout << "Not" << endl;
        }
    cout << "-----------------------" << endl;

    cout << "For Logical OR" << endl;
    bool d = true;
    bool e = false;
    bool f = true;
    if (d || e || f)
        {
            cout << "Yes" << endl;
        }
    else
        {
            cout << "Not" << endl;
        }
    cout << "-----------------------" << endl;

    bool d1 = false;
    bool e1 = false;
    bool f1 = false;
    if (d1 || e1 || f1)
        {
            cout << "Yes" << endl;
        }
    else
        {
            cout << "Not" << endl;
        }
    cout << "-----------------------" << endl;

    cout << "For Logical NOT" << endl;
    bool g = false;
    cout << "g = " << g << endl;
    bool h = true;
    cout << "h = " << h << endl;
    cout << "Not g is: " << !g << endl;
    cout << "Not h is: " << !h << endl;


    int True = true;
    int False = false;

    5 == 6 ? printf("true") : NULL;

    cout << ((True == False) ? "True == False" : "True != False") << endl;

    return 0;
}