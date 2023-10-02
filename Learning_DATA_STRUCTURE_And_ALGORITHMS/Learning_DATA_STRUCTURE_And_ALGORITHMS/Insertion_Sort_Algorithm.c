#include<stdio.h>

void display(int arr[], int index)
{
    for (int i = 0; i < index; i++)
        {
            printf("arr[%d] = %d\n", i, arr[i]);
        }
    printf("\n");
}

void insertionSort(int arr[], int index)
{
    for (int i = 1; i < index; i++)
        {
            int key = arr[i];
            int j = i;
            for (; j >= 1 && key < arr[j - 1]; j--)
                {
                    arr[j] = arr[j - 1];
                }
            arr[j] = key;
        }
}

int main()
{
    int arr[] = {54, 22, 19, 46, 33, 95, 21};
    int index = 7;
    display(arr, index);
    insertionSort(arr, index);
    display(arr, index);

    return 0;
}