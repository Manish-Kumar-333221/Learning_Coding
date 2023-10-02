#include<iostream>
#include<fstream>
/*
Useful Classes for working with files in C++ are
1. fstreambase
2. ifstream --> Derived from fstreambase
3. ofstream --> Derived from fstreambase
*/
/*
In order to work with files in C++, you will have to open it.Primarily, there are two ways to open a file:
1. Using the constructor
2. Using the member function open() of the class
*/
using namespace std;
int main()
{
    string st = "New words are including";
    // Opening files using constructor and writing to it
    ofstream out("Learning_C++_Chapter18_Part01_A.txt"); // writing operation
    out << st;

    string st2;
    // Opening files using constructor and reading to it
    ifstream in("Learning_C++_Chapter18_Part01_B.txt"); // reading operation
    // in >> st2;
    getline(in, st2);
    cout << st2 << endl;

    return 0;
}
