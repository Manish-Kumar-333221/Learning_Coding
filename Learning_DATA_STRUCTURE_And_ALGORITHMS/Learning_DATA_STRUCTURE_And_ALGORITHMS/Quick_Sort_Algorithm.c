#include<stdio.h>

void display(int arr[], int index)
{
    for (int i = 0; i < index; i++)
        {
            printf("arr[%d] = %d\n", i, arr[i]);
        }
    printf("\n");
}

int partition(int arr[], int low, int high)
{
    int pivot = arr[low];
    int i = low + 1;
    int j = high;
    int temp;
    do
        {
            while (arr[i] <= pivot)
                {
                    i++;
                }
            while (arr[j] > pivot)
                {
                    j--;
                }
            if (i < j)
                {
                    temp = arr[i];
                    arr[i] = arr[j];
                    arr[j] = temp;
                }
        }
    while(i < j);

    temp = arr[low];
    arr[low] = arr[j];
    arr[j] = temp;
    return j;
}

void quickSort(int arr[], int low, int high)
{
    int partitionIndex;
    if (low < high)
        {
            partitionIndex = partition(arr, low, high);
            quickSort(arr, low, partitionIndex - 1);
            quickSort(arr, partitionIndex + 1, high);
        }
}

int main()
{
    int arr[] = {54, 22, 19, 46, 33, 95, 21};
    // int arr[] = {3, 5, 2, 13, 12, 3, 2, 13, 45};
    // int arr[] = {9, 4, 4, 8, 7, 5, 6};
    int index = 7;
    display(arr, index);
    quickSort(arr, 0, index - 1);
    display(arr, index);

    return 0;
}