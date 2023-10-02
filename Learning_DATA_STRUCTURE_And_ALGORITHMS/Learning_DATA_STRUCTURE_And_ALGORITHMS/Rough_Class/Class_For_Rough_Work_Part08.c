#include<stdio.h>

#define for(i, a, b) for(i = a; i < b; i++)

#define bubbleSort(arr, index) {int temp, isSorted, i; for(i, 0, index - 1) {isSorted = 1; int j; for(j, 0, index - i - 1) {arr[j] > arr[j + 1] ? temp = arr[j], arr[j] = arr[j + 1], arr[j + 1] = temp, isSorted = 0 : 1; } if (isSorted) break;}printf("\n");}

#define display(arr, index) {int k; for(k, 0, index) {printf("Hello World %d\n", arr[k]);}}

int main()
{
    int arr[10] = {10, 9, 8, 7, 6, 5, 4, 3, 2, 1};
    int index = 10;
    display(arr, index);
    bubbleSort(arr, index);
    display(arr, index);

    return 0;
}