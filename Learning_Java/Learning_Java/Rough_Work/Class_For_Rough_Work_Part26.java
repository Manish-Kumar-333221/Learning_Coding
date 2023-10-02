package com.Learning_Java.Rough_Work;

import java.util.ArrayList;

class Island {
  int[][] island = {
    {1, 0, 0, 0, 0, 0, 0},
    {0, 1, 0, 0, 1, 1, 1},
    {0, 0, 1, 0, 1, 0, 0},
    {1, 1, 0, 0, 1, 0, 0},
    {1, 0, 1, 1, 0, 0, 0},
    {1, 0, 0, 0, 0, 0, 1}
  };

  ArrayList<Integer> visited = new ArrayList<Integer>();

  public boolean rec(int i, int j, int[][] island) {

    if (island[i][j] == 0) {
      return true;
    }

    if (i == 0 || j == 0 || i == island.length - 1 || j == island[0].length - 1) {
      return false;
    }

    for (int item : visited) {
      if (item == i * 10 + j) {
        return true;
      }
    }

    visited.add(i * 10 + j);

    return (rec(i - 1, j, island)
        && rec(i + 1, j, island)
        && rec(i, j - 1, island)
        && rec(i, j + 1, island));
  }

  public void refresh_Island() {
    for (int i = 1; i < island.length - 1; i++) {
      for (int j = 1; j < island[0].length - 1; j++) {
        if (island[i][j] == 1 && rec(i, j, island)) {
          island[i][j] = 0;
        }
        visited.clear();
      }
    }
  }
}

public class Class_For_Rough_Work_Part26 {

  public static void main(String[] args) {
    Island is = new Island();

    is.refresh_Island();

    for (int i = 0; i < is.island.length; i++) {
      for (int j = 0; j < is.island[0].length; j++) {
        System.out.print(is.island[i][j] + ", ");
      }
      System.out.println();
    }
  }
}
