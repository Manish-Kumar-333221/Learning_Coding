#include<iostream>
using namespace std;

int main()
{
    int var = 5;
    int *var1 = &var;
    int **var2 = &var1;
    int ***var3 = &var2;

    cout <<"The value of var is -------> "<< var << endl;
    // var = 5;
    cout <<"The value of &var is ------> "<< &var << endl;
    // &var = address of var;
    cout <<"The value of var1 is ------> "<< var1 << endl;
    // var1 = address of var;
    cout <<"The value of *var1 is -----> "<< *var1 << endl;
    // *var1 = value at var;
    // var = 5;
    cout <<"The value of &var1 is -----> "<< &var1 << endl;
    // &var1 = address of var1;
    cout <<"The value of var2 is ------> "<< var2 << endl;
    // var2 = address of var1;
    cout <<"The value of *var2 is -----> "<< *var2 << endl;
    // *var2 = the value at var1;
    // var1 = address of var;
    cout <<"The value of **var2 is ----> "<< **var2 << endl;
    // **var2 = value at *var1;
    // *var1 = value of var;
    // var = 5;
    cout <<"The value of &var2 is -----> "<< &var2 << endl;
    // &var2 = address of var2;
    cout <<"The value of var3 is ------> "<< var3 << endl;
    // var3 = address of var2;
    cout <<"The value of *var3 is -----> "<< *var3 << endl;
    // *var3 = value of var2;
    // var2 = address of var1;
    cout <<"The value of **var3 is ----> "<< **var3 << endl;
    // **var3 = value of *var2;
    // *var2 = value of var1;
    // var1 = address of var;
    cout <<"The value of ***var3 is ---> "<< ***var3 << endl;
    // ***var3 = value of **var2;
    // **var2 = value of *var1;
    // *var1 = value of var;
    // var = 5;
    cout <<"The value of &var3 is -----> "<< &var3 << endl;
    // &var3 = address of var3;

    *var1 = 50;
    cout << var << endl;
    // *var1 = (value of var = 50);
    // var = 50;
    
    return 0;
}