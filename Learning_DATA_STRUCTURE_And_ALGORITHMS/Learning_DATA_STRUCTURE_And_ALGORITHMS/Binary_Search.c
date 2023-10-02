#include<stdio.h>

int steps = 0;

int binarySearch(int arr[], int size, int element)
{
    printf("\nUsing Binary Searching\n");
    int low = 0, high = size - 1, mid = (low + high) / 2;
    steps = 0;

    if (element == arr[low])
        {
            return low;
        }
    else if (element == arr[high])
        {
            return high;
        }
    else if (element == arr[mid])
        {
            return mid;
        }


    while (low != mid)
        {
            steps++;
            if (element < arr[mid])
                {
                    high = mid;
                }
            else
                {
                    low = mid;
                }
            mid = (low + high) / 2;

            if (element == arr[mid])
                {
                    return mid;
                }
        }
    return -1;
}

void checkElement(int arr[], int size)
{
    int check = 0;
    printf("Enter the element to check whether it is available in the array or not: ");
    scanf("%d", &check);

    int found = binarySearch(arr, size, check);

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
    /*
    int arr[100000];
    for (int i = 0; i < 100000; i++)
    {
      arr[i] = i+1;
    }
    */

    int arr[] = {1, 3, 5, 20, 25, 30, 58, 76, 80, 88};
    int size = sizeof(arr)/sizeof(int);

    while (1)
        {
            display(arr, size);
            checkElement(arr, size);
        }

    return 0;
}