#include<iostream>
#include<fstream>
using namespace std;

int main()
{
    ofstream out;
    out.open("Learning_C++_Chapter18_Part03.txt");
    out << "This is me\n";
    out << "This is me also\n";
    out << "This is me Hello\n";
    out << "This is also me\n";
    out.close();

    string st;
    ifstream in;
    in.open("Learning_C++_Chapter18_Part03.txt");
    // in >> st;
    while(in.eof() == 0)
        {
            getline(in, st);
            cout << st << endl;
        }
    in.close();

    return 0;
}
