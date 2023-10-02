#include <stdio.h>

#define size 8

void prims(int arr[size][size], int start)
{
    int visited[size] = {0};
    visited[start] = 1;
    int toConnect1;
    int toConnect2;

    for(int i = 0; i < size; i++){
        int min = __INT_MAX__;
        for (int j = i; j < size - 1; j++){
            if (visited[j]){
                toConnect1 = j;
                for (int k = 0; k < size; k++)
                {
                    if (arr[j][k] && !visited[k] && arr[j][k] < min){
                        min = arr[j][k];
                        toConnect2 = k;
                    }
                }
                printf("%d->%d = %d\n", toConnect1, toConnect2, min);
                
            }
        }
    }
}

int main()
{
    int arr[size][size] = {{0, 33, 48, 23, 0, 0, 0, 52},
                            {33, 0, 44, 0, 0, 0, 0, 0},
                            {48, 44, 0, 56, 22, 0, 0, 0},
                            {23, 0, 56, 0, 11, 0, 0, 0},
                            {0, 0, 22, 11, 0, 48, 47, 0},
                            {0, 0, 0, 0, 48, 0, 0, 0},
                            {0, 0, 0, 0, 47, 0, 0, 0},
                            {52, 0, 0, 0, 0, 0, 0, 0}};
    // int arr[size][size] = {{0, 10, 15, 20}, {5, 0, 25, 10}, {15, 30, 0, 5}, {15, 10, 20, 0}};
    prims(arr, 0);

    return 0;
}
