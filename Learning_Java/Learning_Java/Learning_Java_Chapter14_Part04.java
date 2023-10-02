package com.Learning_Java;

import java.util.Scanner;

public class Learning_Java_Chapter14_Part04 {

  public static void main(String[] args) {
    Scanner sc = new Scanner(System.in);

    int[] array = {12, 24, 36};
    System.out.print("Enter the index of the array: ");
    int ind;
    try {
      try {
        ind = sc.nextInt();
        System.out.println("Value at index " + ind + " is: " + array[ind]);
      } catch (ArrayIndexOutOfBoundsException e) {
        System.out.println("ArrayIndexOutOfBoundsException Occurred at Level 02.\n");
      }
    } catch (Exception e) {
      System.out.println("Some other Exception " + e + " Occured at Level 01.\n");
    }
    sc.close();

    // Quick Quiz
    int[] arr = {11, 22, 33};
    while (true) {
      Scanner scanner = new Scanner(System.in);
      System.out.print("Enter the index of the array: ");
      int index;
      try {
        index = scanner.nextInt();
        try {
          System.out.printf("Value at index %d is: %d\n", index, arr[index]);
          scanner.close();
          break;
        } catch (ArrayIndexOutOfBoundsException e) {
          System.out.println("Entered Invalid Index. ArrayIndexOutOfBoundsException Occured.\n");
        }
      } catch (Exception e) {
        System.out.println("Some Other Exception " + e + " Occured.\n");
      }
    }
  }
}
