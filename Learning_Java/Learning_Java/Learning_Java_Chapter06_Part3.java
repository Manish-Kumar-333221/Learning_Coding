package com.Learning_Java;

public class Learning_Java_Chapter06_Part3 {

  public static void main(String[] args) {
    int[] marks = new int[1]; // A 1-D Array
    int[][] flats = new int[2][3]; // A 2-D Array
    flats[0][0] = 101;
    flats[0][1] = 102;
    flats[0][2] = 103;
    flats[1][0] = 201;
    flats[1][1] = 202;
    flats[1][2] = 203;

    // Displaying the 2-D Array (for loop)
    System.out.println("Printing a 2-D array using for loop");
    for (int i = 0; i < flats.length; i++) {
      for (int j = 0; j < flats[i].length; j++) {
        System.out.print(flats[i][j] + " ");
      }
      System.out.println();
    }

    System.out.println();

    int[][] Array = {
      {5648, 6958, 9624, 5884}, {3659, 1545, 8659}, {3696, 6495, 9545}, {3529, 9455, 9539}
    }; // A 2-D Array
    for (int i = 0; i < Array.length; i++) {
      for (int j = 0; j < Array[i].length; j++) {
        System.out.printf("Arrary[%d][%d] = " + Array[i][j] + " ", i, j);
      }
      System.out.println();
    }

    System.out.println();

    int[][][] Array_3D = {{{56, 74, 47}, {94, 39, 84}}, {{68, 86, 53, 869}}}; // A 3-D Array
    for (int i = 0; i < Array_3D.length; i++) {
      for (int j = 0; j < Array_3D[i].length; j++) {
        for (int k = 0; k < Array_3D[i][j].length; k++) {
          System.out.printf("Arrary[%d][%d][%d] = " + Array_3D[i][j][k] + " ", i, j, k);
        }
        System.out.println();
      }
    }
  }
}
