#include <stdio.h>

#define size 8
int a[size][size] =
    {
        {00, 54, 98, 56, 00, 00, 00, 28},
        {54, 00, 62, 48, 00, 00, 00, 00},
        {98, 62, 00, 33, 58, 00, 00, 00},
        {56, 48, 33, 00, 70, 00, 00, 00},
        {00, 00, 58, 70, 00, 38, 79, 00},
        {00, 00, 00, 00, 38, 00, 00, 00},
        {00, 00, 00, 00, 79, 00, 00, 00},
        {28, 00, 00, 00, 00, 00, 00, 00}};
/*
                    0————————————1
                   /|\    54    /|
                  / | \        / |
                 /  |  \      /  |
                /   |   \    /   |
               /    |    \  /    |
              /     |     \/     |
           28/    56|     /\     |62
            /       |    /  \    |
           /        |   /    \   |
          /         |  /48  98\  |
         /          | /        \ |
        /           |/          \|
       7            3————————————2
                     \    33    /
                      \        /
                     70\      /58
                        \    /
                         \  /
                          \/
                          4
                          /\
                         /  \
                        /    \
                     38/      \79
                      /        \
                     /          \
                    5            6
*/

int cost = 0;

int p[size][size];

void print()
{
    printf("\n");
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
            printf("%d, ", p[i][j]);
        printf("\n");
    }
}

void prims_Algo(int node)
{
    int visited[size] = {0}, min, toConnectOne, toConnectTwo = node;

    printf("Edges : Weights\n");
    for (int c = 0; c < size - 1; c++)
    {
        visited[toConnectTwo] = 1;

        min = 100000;

        for (int i = 0; i < size; i++)
        {
            if (visited[i])
            {
                for (int j = 0; j < size; j++)
                {
                    if (a[i][j] && !visited[j] && a[i][j] < min)
                    {
                        min = a[i][j];
                        toConnectOne = i;
                        toConnectTwo = j;
                    }
                }
            }
        }
        printf("%d - %d : %d\n", toConnectOne, toConnectTwo, min);
        p[toConnectOne][toConnectTwo] = min;
        p[toConnectTwo][toConnectOne] = min;
        cost += min;
        /*
        if (a[toConnectTwo][toConnectOne])
            p[toConnectTwo][toConnectOne] = min;
        */
    }
    print();
    printf("\nTotal Spanning Tree Cost: %d", cost);
}

int main()
{
    prims_Algo(1);

    return 0;
}