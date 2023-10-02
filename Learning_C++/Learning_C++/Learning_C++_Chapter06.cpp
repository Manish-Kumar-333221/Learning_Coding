#include<iostream>
#include<string>
using namespace std;

struct student
{
    string Name;
    char Class;
    char Sec;
    int Roll_No;
    string School;
};

typedef struct Student
{
    string Name;
    char Class;
    char Sec;
    int Roll_No;
    string School;
}St;

union Bank
{
    int Money_in_Rs;
    int Money_in_Dollor;
    int Money_in_Yen;
    char a;
};

int main()
{
    struct student Student1;
    Student1.Name = "Ram Kumar";
    Student1.Class = '1';
    Student1.Sec = 'C';
    Student1.Roll_No = 1;
    Student1.School = "ABCD School";

    cout << "The Name of the Student is => " << Student1.Name << endl;
    cout << "The Class and Sec of "<< Student1.Name <<" is => " << Student1.Class << Student1.Sec << endl;
    cout << "The Roll_No of "<< Student1.Name <<" is => " << Student1.Roll_No << endl;
    cout << "The School of "<< Student1.Name <<" is => " << Student1.School << endl << endl;

    St Student2;
    Student2.Name = "Rohan Kumar";
    Student2.Class = '1';
    Student2.Sec = 'C';
    Student2.Roll_No = 2;
    Student2.School = "ABCD School";
    cout << "The Name of the Student is => " << Student2.Name << endl;
    cout << "The Class and Sec of "<< Student2.Name <<" is => " << Student2.Class << Student2.Sec << endl;
    cout << "The Roll_No of "<< Student2.Name <<" is => " << Student2.Roll_No << endl;
    cout << "The School of "<< Student2.Name <<" is => " << Student2.School << endl << endl;


    union Bank B1;
    B1.Money_in_Rs = 500000;
    cout << B1.Money_in_Rs << endl;
    B1.Money_in_Dollor = 500;
    cout << B1.Money_in_Dollor << endl;
    B1.Money_in_Yen = 5000;
    cout << B1.Money_in_Yen << endl;
    B1.a = 'A';
    cout << B1.a << endl;

    enum Day {Morning, Afternoon, Evening, Night};
    cout<< Morning << endl;
    cout<< Afternoon << endl;
    cout<< Evening << endl;
    cout<< Night << endl;

    return 0;
}