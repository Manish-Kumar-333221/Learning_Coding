#include<stdio.h>

void display(int arr[], int n)
{
    for (int i = 0; i < n; i++)
        {
            printf("%d ", arr[i]);
        }
    printf("\n");
}

void selectionSort(int arr[], int size)
{
    for (int i = 0; i < size - 1; i++)
        {
            int ind = i;
            for (int j = i + 1; j < size; j++)
                {
                    if (arr[ind] > arr[j])
                        {
                            ind = j;
                        }
                }
            int temp = arr[i];
            arr[i] = arr[ind];
            arr[ind] = temp;
        }
}

int main()
{
    int arr[] = {54, 22, 19, 46, 33, 95, 21};
    int size = 7;
    display(arr, size);
    selectionSort(arr, size);
    display(arr, size);

    return 0;
}