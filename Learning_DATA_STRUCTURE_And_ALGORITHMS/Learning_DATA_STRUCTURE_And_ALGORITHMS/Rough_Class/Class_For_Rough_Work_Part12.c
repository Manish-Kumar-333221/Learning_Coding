#include <stdio.h>

#define n 4

void prims(int arr[n][n], int start)
{
    int visited[n] = {0};
    int next = start;
    int sum = 0;
    for (int i = 0; i < n - 1; i++)
    {
        int min = __INT_MAX__;
        int nxt;
        for (int j = 0; j < n; j++)
        {
            if (arr[next][j] && (arr[next][j] < min) && !visited[j])
            {
                min = arr[next][j];
                nxt = j;
            }
        }
        sum += min;
        visited[next] = 1;
        printf("%d - %d : %d\n", next, nxt, min);
        next = nxt;
    }
    sum += arr[next][start];
    printf("%d - %d : %d\n", next, start, arr[next][start]);
    printf("Total cost is: %d\n", sum);
}

int main()
{
    int arr[n][n] = {{0, 10, 15, 20}, {5, 0, 25, 10}, {15, 30, 0, 5}, {15, 10, 20, 0}};
    prims(arr, 0);

    return 0;
}