#include<iostream>
using namespace std;
int main()
{
    int Marks[10];
    Marks[0] = 67;
    Marks[1] = 37;
    Marks[2] = 32;
    Marks[3] = 23;
    Marks[4] = 45;
    Marks[5] = 96;
    Marks[6] = 10;
    Marks[7] = 75;
    Marks[8] = 96;
    Marks[9] = 43;
    cout << "The value of Marks[0] is " << Marks[0] << endl;
    cout << "The value of Marks[1] is " << Marks[1] << endl;
    cout << "The value of Marks[2] is " << Marks[2] << endl;
    cout << "The value of Marks[3] is " << Marks[3] << endl;
    cout << "The value of Marks[4] is " << Marks[4] << endl;
    cout << "The value of Marks[5] is " << Marks[5] << endl;
    cout << "The value of Marks[6] is " << Marks[6] << endl;
    cout << "The value of Marks[7] is " << Marks[7] << endl;
    cout << "The value of Marks[8] is " << Marks[8] << endl;
    cout << "The value of Marks[9] is " << Marks[9] << endl;
    cout << endl;

    int marks[10] = {56, 26, 21, 12, 34, 85, 95, 64, 85, 32};
    cout << "The value of marks[0] is " << marks[0] << endl;
    cout << "The value of marks[1] is " << marks[1] << endl;
    cout << "The value of marks[2] is " << marks[2] << endl;
    cout << "The value of marks[3] is " << marks[3] << endl;
    cout << "The value of marks[4] is " << marks[4] << endl;
    cout << "The value of marks[5] is " << marks[5] << endl;
    cout << "The value of marks[6] is " << marks[6] << endl;
    cout << "The value of marks[7] is " << marks[7] << endl;
    cout << "The value of marks[8] is " << marks[8] << endl;
    marks[9] = 79;
    cout << "The value of marks[9] is " << marks[9] << endl;
    cout << endl;

    int *p = marks;
    cout << "The value of marks[0] or *(p+0) is " << *(p+0) << endl;
    cout << "The value of marks[1] or *(p+1) is " << *(p+1) << endl;
    cout << "The value of marks[2] or *(p+2) is " << *(p+2) << endl;
    cout << "The value of marks[3] or *(p+3) is " << *(p+3) << endl;
    cout << "The value of marks[4] or *(p+4) is " << *(p+4) << endl;
    cout << "The value of marks[5] or *(p+5) is " << *(p+5) << endl;
    cout << "The value of marks[6] or *(p+6) is " << *(p+6) << endl;
    cout << "The value of marks[7] or *(p+7) is " << *(p+7) << endl;
    cout << "The value of marks[8] or *(p+8) is " << *(p+8) << endl;
    cout << "The value of marks[9] or *(p+9) is " << *(p+9) << endl << endl;

    int MARKS[] = {45, 29, 18, 15, 45, 38, 95, 44, 86, 29};
    for(int i = 0; i < sizeof(MARKS)/sizeof(int); i++)
        {
            cout << "The value of MARKS[" << i << "] is " << MARKS[i] << endl;
        }
    cout << endl;

    int *pi = MARKS;
    for(int i = 0; i < -(*(&pi+1)-pi); i++)
        {
            cout << "The value of MARKS[" << i << "] or *(pi+"<< i << ") is " << *(pi+i) << endl;
        }
    /*
    To find length of an array are following ways.
    1) sizeof(MARKS)/sizeof(*MARKS)
    2) sizeof(MARKS)/sizeof(int)
    3) sizeof(MARKS)/sizeof(MARKS[0])
    4) *(&MARKS+1)-MARKS
    5) -(*(&pi+1)-pi) // for int *Array[10]
    */
    cout << endl;

    cout << *pi++ << endl;
    cout << *pi++ << endl;
    cout << *pi++ << endl;
    cout << *pi++ << endl;
    cout << *pi++ << endl;
    cout << *pi++ << endl;
    cout << *pi++ << endl;
    cout << *pi++ << endl;
    cout << *pi++ << endl;
    cout << *pi++ << endl;

    cout << endl;

    cout << *(pi-10) << endl;
    cout << *(pi-9) << endl;
    cout << *(pi-8) << endl;
    cout << *(pi-7) << endl;
    cout << *(pi-6) << endl;
    cout << *(pi-5) << endl;
    cout << *(pi-4) << endl;
    cout << *(pi-3) << endl;
    cout << *(pi-2) << endl;
    cout << *(pi-1) << endl;

    cout << endl;

    cout << *--pi << endl;
    cout << *--pi << endl;
    cout << *--pi << endl;
    cout << *--pi << endl;
    cout << *--pi << endl;
    cout << *--pi << endl;
    cout << *--pi << endl;
    cout << *--pi << endl;
    cout << *--pi << endl;
    cout << *--pi << endl;

    return 0;
}