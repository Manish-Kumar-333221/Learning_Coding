package com.Learning_Java;

public class Learning_Java_Chapter06_Practice {

  public static void main(String[] args) {

    // Problem 01
    float[] marks = {45.7f, 67.8f, 63.4f, 99.2f, 100.0f};
    float num = 0;
    for (float item : marks) {
      num = num + item;
    }
    System.out.println("The sum of the value is " + num);

    // Problem 02
    float[] marks1 = {45.7f, 67.8f, 63.4f, 99.2f, 100.0f};
    float numb = 45.7f;
    boolean present = true;
    for (float item : marks1) {
      if (numb == item) {
        System.out.println("The value is present in the array");
        present = false;
        break;
      }
    }
    if (present) {
      System.out.println("The value is not present in the array");
    }

    // Problem 03
    float[] Marks = {45.7f, 67.8f, 63.4f, 99.2f, 100.0f};
    float sum = 0;
    for (float element : Marks) {
      sum = sum + element;
    }
    System.out.println("The average value of marks is " + sum / Marks.length);

    // Problem 04
    int[][] mat1 = {
      {1, 2, 3},
      {4, 5, 6}
    };
    int[][] mat2 = {
      {2, 6, 13},
      {3, 7, 1}
    };
    int[][] result = {
      {0, 0, 0},
      {0, 0, 0}
    };

    for (int i = 0; i < mat1.length; i++) { // row number of times
      for (int j = 0; j < mat1[i].length; j++) { // column number of time
        System.out.format("Setting value for i=%d and j=%d\n", i, j);
        result[i][j] = mat1[i][j] + mat2[i][j];
      }
    }

    // Printing the elements of a 2-D Array
    for (int i = 0; i < mat1.length; i++) { // row number of times
      for (int j = 0; j < mat1[i].length; j++) { // column number of time
        System.out.print(result[i][j] + " ");
        result[i][j] = mat1[i][j] + mat2[i][j];
      }
      System.out.println(""); // Prints a new line
    }

    // Problem 05
    int[] arr = {0, 1, 2, 3, 4, 5, 6, 7};
    float ok = (arr.length / 2f) - 0.5f;
    int l = arr.length;
    int temp;

    // Displaying an arry in Reversing.
    for (int i = l - 1; i >= 0; i--) {
      if (i > 0) {
        System.out.print(arr[i] + ",");
      } else {
        System.out.print(arr[i]);
      }
    }
    System.out.println("");
    // OR
    // Sorting an arry in reverse order.
    for (int i = 0; i < (l / 2); i++) {
      if (i != ok) {
        temp = arr[i];
        arr[i] = arr[l - i - 1];
        arr[l - i - 1] = temp;
      }
    }

    // Printing element in the arry (for-each-loop)
    for (int element : arr) {
      if (element != arr[l - 1]) {
        System.out.print(element + ",");
      } else {
        System.out.print(element);
      }
    }
    
    System.out.println("");

    // Problem 06
    int[] array = {1, 2100, 3, 455, 5, 34, 67};
    int max = Integer.MIN_VALUE;
    for (int e : array) {
      if (e > max) {
        max = e;
      }
    }
    System.out.println("The maximum value of the element in this array is: " + max);

    // Problem 06
    System.out.println(Integer.MIN_VALUE);
    System.out.println(Integer.MAX_VALUE);
    System.out.println(Long.MIN_VALUE);
    System.out.println(Long.MAX_VALUE);

    // Problem 07
    boolean isSorted = true;
    int[] Arr = {1, 12, 3, 4, 5, 34, 67};
    for (int i = 0; i < Arr.length - 1; i++) {
      if (Arr[i] > Arr[i + 1]) {
        isSorted = false;
        break;
      }
    }
    if (isSorted) {
      System.out.println("The Array is sorted");
    } else {
      System.out.println("The Array is not sorted");
    }
  }
}
