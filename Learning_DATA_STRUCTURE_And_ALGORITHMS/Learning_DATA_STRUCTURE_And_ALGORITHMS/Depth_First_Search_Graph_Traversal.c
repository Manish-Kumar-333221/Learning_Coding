#include<stdio.h>

int graph[8][8] =
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

int visited[8] = {0, 0, 0, 0, 0, 0, 0, 0};

void DFSGraphTraversal(int s)
{
    for (int i = 0; i < 8; i++)
        {
            // printf("graph[%d][%d] = %d && visited[%d] = %d\n", s, i, graph[s][i], s, visited[i]);

            if ((s == i || graph[s][i] == 1) && visited[i] == 0)
                {
                    printf("%d\n", i);
                    visited[i] = 1;
                    DFSGraphTraversal(i);
                }
        }
}

int main()
{
    DFSGraphTraversal(0);

    return 0;
}