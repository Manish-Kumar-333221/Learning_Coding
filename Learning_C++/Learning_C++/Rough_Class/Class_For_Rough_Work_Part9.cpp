#include<iostream>
#include<math.h>
using namespace std;

int isPrime(unsigned long long int n)
{
    if (n == 1)
        {
            return 0;
        }
    // for (unsigned long long int i = 1; i * i <= n; i++)
    for (unsigned long long int i = 2; i <= sqrt(n); i++)
        {
            if (n % i == 0)
                {
                    return 0;
                }
        }
    return 1;
}

int main()
{
    unsigned long long int j = 0, length = 0, sum = 0;
    cout << "Enter the nth number to print first n prime number: ";
    cin >> j;
    cout << "Prime no  between 1 to " << j << " are: \n";
    for (unsigned long long int i = 1; i <= j; i++)
        {
            if (isPrime(i))
                {
                    cout << i << " \n";
                    length++;
                    sum += i;
                }
        }
    cout << "\n\nNumber of prime number between 1 to "
         << j << " are: " << length << endl;
    cout << "\n\nSum of first " << length << " are: " << sum << endl;
    return 0;
}
