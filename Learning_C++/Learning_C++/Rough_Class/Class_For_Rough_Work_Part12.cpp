#include<iostream>
using namespace std;

int main()
{
    try
        {
            int a = 5 / 0;
        }
    catch (e)
        {
            printf("%s", e);
        }

    return 0;
}