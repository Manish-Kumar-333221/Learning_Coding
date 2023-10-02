#include<iostream>
using namespace std;

inline int product(int a, int b)
{
    return a*b;
}

float moneyReceived(int currentMoney, float factor = 4)
{
    return currentMoney + ((currentMoney/100)*factor);
}

/*
int strlen(const char *p)
{

}
*/

int main()
{
    int a,b;
    cout << "Enter the number " << endl;
    cin >> a >> b;
    cout << "The product of " << a << " & " << b << " is " << product(a,b) << endl;
    cout << "The product of " << a << " & " << b << " is " << product(a,b) << endl;
    cout << "The product of " << a << " & " << b << " is " << product(a,b) << endl;
    cout << "The product of " << a << " & " << b << " is " << product(a,b) << endl << endl;

    int money = 100000;
    cout << "If you have Rs" << money << " in your bank account, you will receive Rs" << moneyReceived(money) << " after 1 year" << endl << endl;
    cout << "For VIP: If you have Rs" << money << " in your bank account, you will receive Rs" << moneyReceived(money, 10) << " after 1 year" << endl;
    return 0;
}