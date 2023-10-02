#include<stdio.h>

void display(int arr[], int n)
{
    // Code for Traversal
    for (int i = 0; i < n; i++)
        {
            printf("%d ", arr[i]);
        }
    printf("\n");
}

int indDeletion(int arr[], int size, int index, int capacity)
{
    // code for Deletion
    if(index >= capacity)
        {
            return 0;
        }
    for (int i = index; i < size - 1; i++)// i < size - 1 will not delete the last element of the array it will remain as it is.
        {
            arr[i] = arr[i + 1];
        }
    return 1;
}

int main()
{
    int arr[100] = {7, 8, 12, 27, 88};
    int size = 5, element = 45, index=2;
    display(arr, size);
    if (indDeletion(arr, size, index, 100))
        {
            size -= 1;
            display(arr, size);
        }
    else
        {
            printf("Deletion failed!");
        }
    return 0;
}
