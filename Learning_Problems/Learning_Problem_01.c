#include<stdio.h>
#include<math.h>

#define readCase(a) scanf("%d", &a)
#define read(a, b, c) scanf("%d%d%d", &a, &b, &c)

void solve()
{
    int cse;
    readCase(cse);
    for(int i = 1; i <= cse; i++)
        {
            int R, A, B;
            read(R, A, B);
            int prev = R, toPrev = A;
            double sum = 0;
            for (int j = 1; prev > 0;)
                {
                    sum += M_PI * prev * prev;
                    if (j == 1)
                        {
                            prev *= A;
                            j++;
                        }
                    else
                        {
                            prev /= B;
                            j--;
                        }
                }
            printf("Case #%d:%f\n", i, sum);
        }
}

int main()
{
    solve();
    /*
        printf("File name is: %s\n", __FILE__);
        printf("Date is: %s\n", __DATE__);
        printf("Time is: %s\n", __TIME__);
        printf("Line No. is: %d\n", __LINE__);
        printf("ANSI: %d\n", __STDC__);
    */
    return 0;
}
// 2 1 3 6 5 2 5