#include<stdio.h>
#include<stdlib.h>

void display(int arr[], int index)
{
    for (int i = 0; i < index; i++)
        {
            printf("arr[%d] = %d\n", i, arr[i]);
        }
    printf("\n");
}

void merge(int A[], int low, int mid, int high)
{
    int i, j, k, B[high + 1];
    i = low;
    j = mid + 1;
    k = low;

    while (i <= mid && j <= high)
        {
            if (A[i] <= A[j])
                {
                    B[k] = A[i];
                    i++;
                    k++;
                }
            else
                {
                    B[k] = A[j];
                    j++;
                    k++;
                }
        }
    while (i <= mid)
        {
            B[k] = A[i];
            k++;
            i++;
        }
    while (j <= high)
        {
            B[k] = A[j];
            k++;
            j++;
        }
    /*  // just for analysis
        for (int i = low; i <= high; i++)
            {
                printf("A[%d] = %d, ", i, A[i]);
            }
        printf("\n");

        for (int i = low; i <= high; i++)
            {
                printf("B[%d] = %d, ", i, B[i]);
            }
        printf("\n\n");
    */
    for (int i = low; i <= high; i++)
        {
            A[i] = B[i];
        }

}

void mergeSort(int arr[], int low, int high)
{
    int mid;
    if (low < high)
        {
            mid = (low + high) / 2;
            mergeSort(arr, low, mid);
            mergeSort(arr, mid + 1, high);
            merge(arr, low, mid, high);
        }
}

int main()
{
    int arr1[] = {1, 2, 3, 4, 5, 6, 22, 25, 30, 6, 7, 8, 9, 10, 11, 12};
    int high = 16;
    display(arr1, high);
    mergeSort(arr1, 0, high - 1);
    display(arr1, high);

    return 0;
}