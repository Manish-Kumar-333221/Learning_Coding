#include<iostream>
using namespace std;

int main()
{
    int var = 5;
    int *var1 = &var;
    cout <<"The value of var is -------> "<< var << endl;
    // The value of var is -------> 5
    cout <<"The value of &var is ------> "<< &var << endl;
    // The value of &var is ------> 0xbee5966c
    cout <<"The value of var1 is ------> "<< var1 << endl;
    // The value of var1 is ------> 0xbee5966c
    cout <<"The value of *var1 is -----> "<< *var1 << endl;
    // The value of *var1 is -----> 5
    cout <<"The value of &var1 is -----> "<< &var1 << endl;
    // The value of &var1 is -----> 0xbee59668

    *var1 = 67;
    cout <<"The value of var is -------> "<< var << endl;
    // The value of var is -------> 67

    return 0;
}