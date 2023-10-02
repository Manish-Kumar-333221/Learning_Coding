package com.Learning_Java.Rough_Work;

class GraphTraversal {

    int[][] graph = {
        {0, 1, 1, 1, 0, 0, 0, 1},
        {1, 0, 1, 0, 0, 0, 0, 0},
        {1, 1, 0, 1, 1, 0, 0, 0},
        {1, 0, 1, 0, 1, 0, 0, 0},
        {0, 0, 1, 1, 0, 1, 1, 0},
        {0, 0, 0, 0, 1, 0, 0, 0},
        {0, 0, 0, 0, 1, 0, 0, 0},
        {1, 0, 0, 0, 0, 0, 0, 0}
    };
    int[] visited = {0, 0, 0, 0, 0, 0, 0, 0};

    void DFS(int s) {
        for (int i = 0; i < 8; i++) {
            if ((s == i && visited[i] == 0) || (graph[s][i] == 1 && visited[i] == 0)) {
                System.out.print(i + ", ");
                visited[i] = 1;
                DFS(i);
            }
        }
    }
}

public class Class_For_Rough_Work_Part13 {

    public static void main(String[] args) {
        GraphTraversal a = new GraphTraversal();
        a.DFS(1);
    }
}
