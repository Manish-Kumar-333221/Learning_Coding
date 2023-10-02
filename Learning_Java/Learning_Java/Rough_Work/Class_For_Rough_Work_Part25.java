package com.Learning_Java.Rough_Work;

import java.util.ArrayList;

class Block {
  boolean[][] block = new boolean[5][3];

  public void insert(int i, boolean park, boolean garden, boolean store) {
    block[i][0] = park;
    block[i][1] = garden;
    block[i][2] = store;
  }

  public void initialiseValues(int[][] notAvailable, int i) {
    if (block[i][0]) {
      notAvailable[i][0] = 0;
    } else {
      notAvailable[i][0] = -1;
    }
    if (block[i][1]) {
      notAvailable[i][1] = 0;
    } else {
      notAvailable[i][1] = -1;
    }
    if (block[i][2]) {
      notAvailable[i][2] = 0;
    } else {
      notAvailable[i][2] = -1;
    }
  }
}

public class Class_For_Rough_Work_Part25 {

  public static void main(String[] args) {

    Block Blocks = new Block();
    Blocks.insert(0, false, true, false);
    Blocks.insert(1, true, false, false);
    Blocks.insert(2, true, true, false);
    Blocks.insert(3, false, true, false);
    Blocks.insert(4, false, true, true);

    // Blocks.insert(2, true, false, true);

    int[][] notAvailable = new int[Blocks.block.length][Blocks.block[0].length];

    int min = 0, ans = 0;

    ArrayList<Integer> max = new ArrayList<Integer>(Blocks.block.length);

    ArrayList<Integer> maxAdd = new ArrayList<Integer>(Blocks.block.length);

    Blocks.initialiseValues(notAvailable, 0);
    for (int i = 1; i < Blocks.block.length; i++) {
      Blocks.initialiseValues(notAvailable, i);
      int maximum = -1;
      int maximumAdd = 0;
      for (int j = 0; j < Blocks.block[0].length; j++) {
        if (notAvailable[i][j] == -1 && notAvailable[i - 1][j] != -1) {
          notAvailable[i][j] = notAvailable[i - 1][j] + 1;
        }
        if (i == Blocks.block.length - 1) {
          maximum = Math.max(maximum, notAvailable[i][j]);
          maximumAdd += notAvailable[i][j];
        }
      }
      if (i == Blocks.block.length - 1) {
        max.add(maximum);
        maxAdd.add(maximumAdd);
        min = maximum;
        while (i > 0) {
          i--;
          maximum = -1;
          maximumAdd = 0;
          for (int j = 0; j < Blocks.block[0].length; j++) {
            if (notAvailable[i][j] == -1 || notAvailable[i][j] > notAvailable[i + 1][j] + 1) {
              notAvailable[i][j] = notAvailable[i + 1][j] + 1;
            }
            maximum = Math.max(maximum, notAvailable[i][j]);
            maximumAdd += notAvailable[i][j];
          }
          max.add(0, maximum);
          maxAdd.add(0, maximumAdd);
          min = Math.min(min, maximum);
        }
        ans = max.indexOf(min);
        i = ans;
        while (i < max.lastIndexOf(min)) {
          ans = Math.min(maxAdd.get(ans), maxAdd.get(i + 1));
          i++;
        }
        break;
      }
    }

    System.out.println("Index of block to travel Minimum distance is: " + ans);

    for (int i = 0; i < 5; i++) {
      for (int j = 0; j < 3; j++) {
        System.out.print(notAvailable[i][j] + " ");
      }
      System.out.println();
    }
    System.out.println(min);
    System.out.println(max);
    System.out.println(maxAdd);
  }
}
