#include<iostream>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    cout << "Enter your age: " << endl;
    int day1;
    cin >> day1;
    switch (day1) {
      case 10:
        cout << "You are under age for Playing football" << endl;
        break;
      case 15:
        cout << "You should focus on your studies" << endl;
        break;
      case 20:
        cout << "You can play football" << endl;
        break;
      case 25:
        cout << "You should do some work" << endl;
        break;
      case 45:
        cout << "You should take rest" << endl;
        break;
      default:
        cout << "You are free" << endl;
    }
    return 0;
}