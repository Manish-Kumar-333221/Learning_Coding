#include <stdio.h>

#define size 8
#define MAX 28

typedef struct edge
{
    int u, v, w;
} edge;

typedef struct edge_list
{
    edge data[MAX];
    int n;
} edge_list;

edge_list elist;
edge_list spanlist;

int n = size, Graph[size][size] =
{
    {00, 54, 98, 56, 00, 00, 00, 28},
    {54, 00, 62, 48, 00, 00, 00, 00},
    {98, 62, 00, 33, 58, 00, 00, 00},
    {56, 48, 33, 00, 70, 00, 00, 00},
    {00, 00, 58, 70, 00, 38, 79, 00},
    {00, 00, 00, 00, 38, 00, 00, 00},
    {00, 00, 00, 00, 79, 00, 00, 00},
    {28, 00, 00, 00, 00, 00, 00, 00}
};

void print()
{
    int i, cost = 0;
    printf("Edges : Weights\n");
    for (i = 0; i < spanlist.n; i++)
        {
            printf("%d - %d : %d\n", spanlist.data[i].u, spanlist.data[i].v, spanlist.data[i].w);
            cost = cost + spanlist.data[i].w;
        }

    printf("\nSpanning tree cost: %d\n", cost);
}

void applyUnion(int belongs[], int c1, int c2)
{
    for (int i = 0; i < n; i++)
        if (belongs[i] == c2)
            belongs[i] = c1;
}

void sort()
{
    int i, j;
    edge temp;

    for (i = 1; i < elist.n; i++)
        {
            for (j = 0; j < elist.n - 1; j++)
                {
                    if (elist.data[j].w > elist.data[j + 1].w)
                        {
                            temp = elist.data[j];
                            elist.data[j] = elist.data[j + 1];
                            elist.data[j + 1] = temp;
                        }
                }
        }
}

void kruskalAlgo()
{
    int belongs[MAX], i, j, cno1, cno2;
    elist.n = 0;

    for (i = 1; i < n; i++)
        for (j = 0; j < i; j++)
            {
                if (Graph[i][j])
                    {
                        elist.data[elist.n].u = i;
                        elist.data[elist.n].v = j;
                        elist.data[elist.n].w = Graph[i][j];
                        elist.n++;
                    }
            }

    sort();

    for (i = 0; i < n; i++)
        belongs[i] = i;

    spanlist.n = 0;

    for (i = 0; i < elist.n; i++)
        {
            cno1 = belongs[elist.data[i].u];
            cno2 = belongs[elist.data[i].v];

            if (cno1 != cno2)
                {
                    spanlist.data[spanlist.n] = elist.data[i];
                    spanlist.n++;
                    applyUnion(belongs, cno1, cno2);
                }
        }
}

int main()
{
    kruskalAlgo();
    print();
}