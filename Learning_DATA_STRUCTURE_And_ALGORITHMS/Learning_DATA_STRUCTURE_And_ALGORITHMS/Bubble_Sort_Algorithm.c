#include<stdio.h>

void display(int arr[], int index)
{
    for (int i = 0; i < index; i++)
        {
            printf("arr[%d] = %d\n", i, arr[i]);
        }
    printf("\n");
}

void bubbleSort(int arr[], int index)
{
    int temp;
    int isSorted;
    for (int i = 0; i < index - 1; i++)
        {
            isSorted = 1;
            for (int j = 0; j < index - i - 1; j++)
                {
                    arr[j] > arr[j + 1] ? temp = arr[j], arr[j] = arr[j + 1], arr[j + 1] = temp, isSorted = 0 : "";
                }
            if (isSorted)
                break;
        }
}

int main()
{
    int arr[] = {67, 2, 46, 55, 289, 57, 56, 68};
    int index = 8;
    bubbleSort(arr, index);
    display(arr, index);

    int arr1[] = {1, 2, 3, 4, 5, 6, 7, 8};
    index = 8;
    bubbleSort(arr1, index);
    display(arr1, index);

    return 0;
}