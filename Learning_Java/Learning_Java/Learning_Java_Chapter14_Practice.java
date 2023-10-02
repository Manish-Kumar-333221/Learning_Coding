package com.Learning_Java;

import java.util.Scanner;

class maxRetriesException extends Exception {
  private static final long serialVersionUID = 1L;

  @Override
  public String toString() {
    return "max retries reached.";
  }

  @Override
  public String getMessage() {
    return "max retries reached.";
  }
}

public class Learning_Java_Chapter14_Practice {

  public static void getValueAtArrayIndex() throws maxRetriesException {
    Scanner sc = new Scanner(System.in);

    int[] ar = {15, 30, 45};
    for (int i = 0; i < 5; i++) {
      System.out.print("Enter array index to access: ");
      int c = sc.nextInt();
      try {
        System.out.printf("arr[%d] = %d\n", c, ar[c]);
        sc.close();
        break;
      } catch (Exception e) {
        if (i == 4) {
          sc.close();
          System.out.println("Error.");
          throw new maxRetriesException();
        } else {
          System.out.println("Entered Wrong Index.");
        }
      }
    }
  }

  public static void main(String[] args) {
    Scanner sc = new Scanner(System.in);

    // Problem 01
    // Syntex Error: semicolon is missing.
    // int a = 0

    // Logical Error: + sign is used instead of *.
    /*//
    int factorial = 1;
    for (int i = 1; i < 5; i++) {
      factorial += i;
    }
    System.out.println("Factorial of 5 = " + factorial);
    */

    // Runtime Error: divided by 0.
    // System.out.println("10 / 0 = " + 10 / 0);

    // Problem 02
    try {
      System.out.println(10 / 0);
    } catch (ArithmeticException e) {
      System.out.println("HaHa");
    } catch (IllegalArgumentException e) {
      System.out.println("HeHe");
    }

    // Problem 03
    int[] ar = {15, 30, 45};
    for (int i = 0; i < 5; i++) {
      System.out.print("Enter array index to access: ");
      try {
        int c = sc.nextInt();
        System.out.printf("arr[%d] = %d\n", c, ar[c]);
        break;
      } catch (Exception e) {
        if (i == 4) {
          System.out.println("Error");
        } else {
          System.out.println("Entered wrong Index.");
        }
      }
    }

    // Problem 04
    int[] arr = {15, 30, 45};
    for (int i = 0; i < 5; i++) {
      System.out.print("Enter array index to access: ");
      try {
        int c = sc.nextInt();
        System.out.printf("arr[%d] = %d\n", c, arr[c]);
        break;
      } catch (Exception e) {
        if (i == 4) {
          try {
            throw new maxRetriesException();
          } catch (Exception E) {
            System.out.println(E);
          }
        } else {
          System.out.println("Entered wrong Index.");
        }
      }
    }

    // Problem 05
    try {
      getValueAtArrayIndex();
    } catch (Exception e) {
      System.out.println(e);
    }

    sc.close();
  }
}
