#include<stdio.h>
#include<stdlib.h>

struct queue
{
    int size;
    int f;
    int r;
    int* arr;
};

int isEmpty(struct queue* q)
{
    return q->r == q->f ? 1 : 0;
}

int isFull(struct queue* q)
{
    return q->r == q->size ? 1 : 0;
}

void enqueue(struct queue* q, int val)
{
    if(isFull(q))
        {
            printf("This Queue is full\n");
        }
    else
        {
            // printf("Enqued element[%d]: %d\n", q->r, val);
            q->arr[q->r++] = val;
        }
}

int dequeue(struct queue* q)
{
    if(isEmpty(q))
        {
            printf("This Queue is empty\n");
            return -1;
        }
    else
        {
            // printf("Dequed element[%d]: %d\n", q->f, q->arr[q->f]);
            return q->arr[q->f++];
        }
}

int main()
{
    // Initializing Queue (Array Implementation)
    struct queue q;
    q.size = 8;
    q.f = q.r = 0;
    q.arr = (int*) malloc(q.size * sizeof(int));

    // BFS Implementation
    int node;
    int i = 0;
    int visited[8] = {0, 0, 0, 0, 0, 0, 0, 0};
    int a[8][8] =
    {
        {0, 1, 1, 1, 0, 0, 0, 1},
        {1, 0, 1, 0, 0, 0, 0, 0},
        {1, 1, 0, 1, 1, 0, 0, 0},
        {1, 0, 1, 0, 1, 0, 0, 0},
        {0, 0, 1, 1, 0, 1, 1, 0},
        {0, 0, 0, 0, 1, 0, 0, 0},
        {0, 0, 0, 0, 1, 0, 0, 0},
        {1, 0, 0, 0, 0, 0, 0, 0}
    };

    /*
                        0————————————1
                       /|\           |
                      / | \          |
                     /  |  \         |
                    /   |   \        |
                   /    |    \       |
                  /     |     \      |
                 /      |      \     |
                /       |       \    |
               /        |        \   |
              /         |         \  |
             /          |          \ |
            /           |           \|
           7            3————————————2
                         \          /
                          \        /
                           \      /
                            \    /
                             \  /
                              \/
                              4
                              /\
                             /  \
                            /    \
                           /      \
                          /        \
                         /          \
                        5            6
    */

    printf("%d, ", i);
    visited[i] = 1;
    enqueue(&q, i); // Enqueue i for exploration
    while (!isEmpty(&q))
        {
            node = dequeue(&q);
            for (int j = 0; j < 8; j++)
                {
                    if(a[node][j] == 1 && visited[j] == 0)
                        {
                            printf("%d, ", j);
                            visited[j] = 1;
                            enqueue(&q, j);
                        }
                }
        }

    return 0;
}