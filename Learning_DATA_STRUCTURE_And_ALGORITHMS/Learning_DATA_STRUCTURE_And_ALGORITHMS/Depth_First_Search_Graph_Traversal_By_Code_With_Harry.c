#include<stdio.h>
#include<stdlib.h>

// DFS Implementation
int visited[8] = {0, 0, 0, 0, 0, 0, 0, 0};
int a[8][8] =
{
    {0, 1, 1, 1, 0, 0, 0, 1},
    {1, 0, 1, 0, 0, 0, 0, 0},
    {1, 1, 0, 0, 1, 0, 0, 0},
    {1, 0, 0, 0, 0, 1, 0, 0},
    {0, 0, 1, 0, 0, 1, 1, 0},
    {0, 0, 0, 1, 1, 0, 0, 0},
    {0, 0, 0, 0, 1, 0, 0, 0},
    {1, 0, 0, 0, 0, 0, 0, 0}
};

/*
           0————————————1
          /|            |
         / |            |
        /  |            |
       /   |            |
      7    3            2
           |            |
           |            |
           |            |
           |            |
           5            4
            \          /
             \        /
              \      /
               \    /
                \  /
                 \/
                  6
*/

void DFS(int i)
{
    printf("%d\n", i);
    visited[i] = 1;
    for (int j = 0; j < 8; j++)
        {
            // printf("a[%d][%d] = %d && visited[%d] = %d\n", i, j, a[i][j], j, visited[j]);
            if(a[i][j] == 1 && visited[j] == 0)
                {
                    DFS(j);
                }
        }

}
int main()
{
    DFS(1);

    return 0;
}