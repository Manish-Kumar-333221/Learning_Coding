#include<stdio.h>

void display(int arr[], int index)
{
    for (int i = 0; i < index; i++)
        {
            printf("arr[%d] = %d\n", i, arr[i]);
        }
    printf("\n");
}

void selectionSort(int arr[], int index)
{
    for (int i = 0; i < index - 1; i++)
        {
            int ind = i;
            for (int j = i + 1; j < index; j++)
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
    int index = 7;
    display(arr, index);
    selectionSort(arr, index);
    display(arr, index);

    return 0;
}