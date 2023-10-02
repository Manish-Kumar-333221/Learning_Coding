#include <stdio.h>

void printArray(int A[], int n)
{
    for (int i = 0; i < n; i++)
        {
            printf("%d ", A[i]);
        }
    printf("\n");
}

int maxValue(int A[], int size)
{
    int max = A[0];
    for (int i = 1; i < size; i++)
        {

            if (A[i] > max)
                {
                    max = A[i];
                }
        }
    return max;
}

void countSort(int A[], int size)
{
    int newSize = maxValue(A, size) + 1;
    int B[newSize];
    for (int i = 0; i < newSize; i++)
        {
            B[i] = 0;
        }

    for (int i = 0; i < size; i++)
        {
            B[A[i]] = B[A[i]] + 1;
        }

    int j = 0;
    for (int i = 0;  i < newSize;)
        {
            if (B[i] != 0)
                {
                    A[j] = i;
                    j++;
                    B[i] = B[i] - 1;
                }
            else
                {
                    i++;
                }
        }
}

int main()
{
    int A[] = {9, 14, 4, 8, 7, 5, 6,9, 1, 4, 14, 4, 15, 6};
    int n = 14;
    printArray(A, n);
    countSort(A, n);
    printArray(A, n);
    return 0;
}