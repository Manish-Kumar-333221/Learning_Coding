#include<iostream>
using namespace std;

class Student
{
protected:
    int roll_No;
    string name;

public:
    void set_Data(string a, int b)
    {
        name = a;
        roll_No = b;
    }
};

class Exam : virtual public Student
{
protected:
    int hindi;
    int english;
    int maths;
    int science;
    int social_Science;

public:
    void set_Marks(int a, int b, int c, int d, int e)
    {
        hindi = a;
        english = b;
        maths = c;
        science = d;
        social_Science = e;
    }

    void get_Marks()
    {
        cout << "Marks of Student " << name
             << " in each subject are as follows:"
             << endl;
        cout << "marks in subject Hindi: "
             << hindi << endl;
        cout << "marks in subject English: "
             << english << endl;
        cout << "marks in subject Math: "
             << maths << endl;
        cout << "marks in subject Science: "
             << science << endl;
        cout << "marks in subject Social Science: "
             << social_Science << endl << endl;
    }

    int total_Marks()
    {
        return hindi + english + maths + science
               + social_Science;
    }
};

class Sport : virtual public Student
{
private:
    int score;

public:
    void set_Score(int a)
    {
        score = a;
    }

    int get_Score()
    {
        return score;
    }
};

class Result : public Exam, public Sport
{
public:
    void get_Result()
    {
        cout << "Student Name: " << name << endl;
        cout << name << " Roll no is: " << roll_No
             << endl << endl;
        get_Marks();
        cout << name << " Score is: " << get_Score()
             << endl << endl;
        cout << "Total result is: "
             << total_Marks() + get_Score() << "/510"
             << "\nTotal Percentage is: "
             << ((total_Marks() + get_Score())*100)/510.0f
             << endl << endl;
    }
};

int main()
{
    Result Ram;
    Ram.set_Data("Ram", 1);
    Ram.set_Marks(76, 73, 57, 59, 76);
    Ram.set_Score(10);
    Ram.get_Result();

    Result harry;
    harry.set_Data("Harry", 2);
    harry.set_Marks(91, 89, 95, 85, 97);
    harry.set_Score(9);
    harry.get_Result();

    return 0;
}