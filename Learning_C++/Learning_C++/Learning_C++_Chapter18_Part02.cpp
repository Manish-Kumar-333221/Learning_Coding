#include<iostream>
#include<fstream>
using namespace std;

int main()
{
    string st1;
    ofstream Hout("Learning_C++_Chapter18_Part02.txt");
    cout << "Enter Your Name: ";
    cin >> st1;
    Hout << st1 + " is my name.";
    Hout.close();

    string st2;
    ifstream Hin("Learning_C++_Chapter18_Part02.txt");
    getline(Hin, st2);
    cout << st2 << endl;
    Hin.close();

    return 0;
}
