package com.Learning_Java;

public class Learning_Java_Chapter06_Part2 {

  public static void main(String[] args) {
    // Displaying the Array (Naive way)
    int[] marks = {98, 45, 79, 99, 80};
    System.out.println("Printing using Naive way");
    System.out.print(marks[0] + " ");
    System.out.print(marks[1] + " ");
    System.out.print(marks[2] + " ");
    System.out.print(marks[3] + " ");
    System.out.print(marks[4] + " ");

    System.out.println("\n");

    // Displaying the Array (for loop)
    int[] marks1 = {98, 45, 79, 99, 80};
    System.out.println("Printing using for loop");
    for (int i = 0; i < marks1.length; i++) {
      System.out.print(marks1[i] + " ");
    }

    System.out.println("\n");

    // Quick Quiz: Displaying the Array in Reverse order (for loop)
    int[] marks2 = {98, 45, 79, 99, 80};
    System.out.println("Printing using for loop in reverse order");
    for (int i = marks2.length - 1; i >= 0; i--) {
      System.out.print(marks2[i] + " ");
    }

    System.out.println("\n");

    // Quick Quiz: Displaying the Array (for-each loop)
    int[] marks3 = {98, 45, 79, 99, 80};
    System.out.println("Printing using for-each loop");
    for (int element : marks3) {
      System.out.print(element + " ");
    }

    System.out.println("");

    // finding the maximum value in the array.
    int[] arr = {40, 20, 30, 50, 32, 76, 92, 45, 91};
    int a = arr[0];
    for (int i = 1; i < arr.length; i++) {
      if (a < arr[i]) {
        a = arr[i];
      }
    }
    System.out.println("Maximum value in the array is: " + a);
    // OR
    int aa = arr[0];
    for (int i = 1; i < arr.length; i++) {
      aa = Math.max(aa, arr[i]);
    }
    System.out.println("Maximum value in the array is: " + aa);

    System.out.println("");

    // finding the minimum value in the array.
    int[] arr1 = {5, 54, 34, 82, 8, 13, 2, 22, 9};
    int a1 = arr1[0];
    for (int i = 0; i < arr1.length; i++) {
      if (arr1[i] < a1) {
        a1 = arr1[i];
      }
    }
    System.out.println("Minimum value in the array is: " + a1);
    // OR
    int aa1 = arr1[0];
    for (int i = 1; i < arr1.length; i++) {
      aa1 = Math.min(aa1, arr1[i]);
    }
    System.out.println("Minimum value in the array is: " + aa1);

    System.out.println("");

    // Sorting an array in increasing order
    int[] intArray = {5, 90, 35, 45, 150, 3, 42};
    int temp = 0;

    for (int i = 0; i < intArray.length; i++) {
      for (int j = 1; j < intArray.length; j++) {
        if (intArray[j] < intArray[j - 1]) {
          temp = intArray[j - 1];
          intArray[j - 1] = intArray[j];
          intArray[j] = temp;
        }
      }
    }
    for (int element0 : intArray) {
      if (element0 != intArray[intArray.length - 1]) {
        System.out.print(element0 + ", ");
      } else {
        System.out.print(element0);
      }
    }

    System.out.println("\n");

    // Sorting an array in decreasing order
    int[] intArray1 = {63, 12, 73, 85, 150, 143};
    int temp1 = 0;

    for (int i = 0; i < intArray1.length; i++) {
      for (int j = 1; j < intArray1.length; j++) {
        if (intArray1[j - 1] < intArray1[j]) {
          temp1 = intArray1[j - 1];
          intArray1[j - 1] = intArray1[j];
          intArray1[j] = temp1;
        }
      }
    }
    for (int element1 : intArray1) {
      if (element1 != intArray1[intArray1.length - 1]) {
        System.out.print(element1 + ", ");
      } else {
        System.out.print(element1);
      }
    }
  }
}
