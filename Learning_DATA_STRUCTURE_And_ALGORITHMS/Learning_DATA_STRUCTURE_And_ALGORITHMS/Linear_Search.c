#include<stdio.h>

int steps = 0;

int sortedLinearSearch(int arr[], int size, int element)
{
    steps = 0;
    printf("\nUsing Linear Searching for sorted array\n");
    if (element < arr[0])
        {
            return -1;
        }
    for (int i = 0; i < size; i++)
        {
            steps++;

            if (element == arr[i])
                {
                    return i;
                }
            else if (element > arr[i] && element < arr[i+1])
                {
                    break;
                }
        }
    return -1;
}

int unsortedLinearSearch(int arr[], int size, int element)
{
    steps = 0;
    printf("\nUsing Linear Searching for Unsorted array\n");
    for (int i = 0; i < size; i++)
        {
            steps++;

            if (element == arr[i])
                {
                    return i;
                }
        }
    return -1;
}

void print(int check, int found)
{
    if (found != -1)
        {
            printf("Element %d found in the array at index: %d\n", check, found);
            printf("It takes %d steps to check.\n\n", steps);
        }
    else
        {
            printf("Element %d not found in the array!\n", check);
            printf("It takes %d steps to check.\n\n", steps);
        }
}

void display(int arr[], int n)
{
    for (int i = 0; i < n; i++)
        {
            printf("%d ", arr[i]);
        }
    printf("\n");
}

int main()
{
    int arr[] = {1, 33, 5, 220, 25, 30, 58, 776, 8100, 988};
    int size = sizeof(arr)/sizeof(int);

    display(arr, size);

    int check = 0;
    printf("Enter the element to check whether it is available in the array or not: ");
    scanf("%d", &check);

    int found = unsortedLinearSearch(arr, size, check);
    print(check, found);
    
    
    int arr1[] = {1, 3, 5, 20, 25, 30, 58, 76, 80, 88};
    int size1 = sizeof(arr1)/sizeof(int);

    display(arr1, size1);

    int check1 = 0;
    printf("Enter the element to check whether it is available in the array or not: ");
    scanf("%d", &check1); 

    int found1 = sortedLinearSearch(arr1, size1, check1);
    print(check1, found1);

    return 0;
}