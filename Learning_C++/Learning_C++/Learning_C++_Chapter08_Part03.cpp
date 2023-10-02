#include<iostream>
#include<string>
#include<stdlib.h>
using namespace std;

class Binary
{
private:  // By default members of class are private
    string s;
    void chk_bin(void);

public:
    void read(void);
    void ones_compliment(void);
    void display(void);
};

void Binary :: chk_bin(void)
{
    for(int i = 0; i < s.length(); i++)
        {
            if(s.at(i) != '0' && s.at(i) != '1')
                {
                    cout << "\nIncorrect Binary format" << endl;
                    exit(0);
                }
        }
}

void Binary :: read(void)
{
    cout << "Enter a binary number: ";
    cin >> s;
    cout << endl;
}

void Binary :: ones_compliment(void)
{
    chk_bin();
    for(int i = 0; i < s.length(); i++)
        {
            if(s.at(i) == '0')
                {
                    s.at(i) = '1';
                }
            else
                {
                    s.at(i) = '0';
                }
        }
}

void Binary :: display(void)
{
    cout << "Displaying The Binary code" << endl;
    for (int i = 0; i < s.length(); i++)
        {
            cout << s.at(i);
        }
    cout << endl;
}

int main()
{
    Binary b;
    b.read();
    // b.chk_bin(); //-----> This will throw an error because it is a private function of the Binary Class
    b.display();
    b.ones_compliment();
    b.display();

    return 0;
}