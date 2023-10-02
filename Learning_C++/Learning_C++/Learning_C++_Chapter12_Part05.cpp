#include<iostream>
using namespace std;

class Student
{
protected:
    int student_Roll_Number;
    string student_Name;

public:
    void set_Student_Data(string name, int roll_Number)
    {
        student_Name = name;
        student_Roll_Number = roll_Number;
    }

    void get_Student_Data()
    {
        cout << "Student name is: " << student_Name << endl;
        cout << student_Name << " Roll no. is: "
             << student_Roll_Number << endl << endl;
    }
};

class Exam : public Student
{
protected:
    int hindi_Marks, english_Marks, maths_Marks, science_Marks, social_Science, computer_Marks;

    int total_Marks;
    float total_Percentage;

public:

    void set_Marks(int a, int b, int c, int d, int e, int f)
    {
        hindi_Marks = a;
        english_Marks = b;
        maths_Marks = c;
        science_Marks = d;
        social_Science = e;
        computer_Marks = f;

        total_Marks = hindi_Marks + english_Marks + maths_Marks + science_Marks + social_Science + computer_Marks;
        total_Percentage = total_Marks / 6.0;
    }

    void get_Marks()
    {
        cout << "Marks of Student " << student_Name << " in each subject are as follows:" << endl;
        cout << "marks in subject Hindi: " << hindi_Marks << endl;
        cout << "marks in subject English: " << english_Marks << endl;
        cout << "marks in subject Math: " << maths_Marks << endl;
        cout << "marks in subject Science: " << science_Marks << endl;
        cout << "marks in subject Social Science: " << social_Science << endl;
        cout << "marks in subject Computer: " << computer_Marks << endl << endl;
    }
};

class Result : public Exam
{
public:
    void get_Result()
    {
        get_Student_Data();
        get_Marks();

        cout << "Total Marks of " << student_Name << " is: " << total_Marks << " and Total Percentage is: " << total_Percentage << "%" << endl;
    }
};

int main()
{
    Result Ram;
    Ram.set_Student_Data("Ram", 01);
    Ram.set_Marks(76, 73, 57, 59, 76, 55);
    Ram.get_Result();

    return 0;
}