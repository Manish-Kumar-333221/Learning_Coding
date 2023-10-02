package com.Learning_Java;

public class Learning_Java_Chapter05_Practice {

  public static void main(String[] args) {

    // Problem 01
    int a = 5;
    for (int i = 0; i < a; i++) {
      for (int j = a; j > i; j--) {
        System.out.print("*");
      }
      System.out.print("\n");
    }

    System.out.print("\n");

    // Problem 02
    int sum = 0;
    int b = 4;
    for (int i = 0; i < b; i++) {
      sum = sum + (2 * i);
    }
    System.out.printf("Sum of first %d even numbers is: ", b);
    System.out.println(sum);
    // First 4 even numbers are - 0 2 4 6
    System.out.print("\n");

    // Problem 03
    int c = 19;
    System.out.printf("Table of %d is:\n", c);
    // for(int i=0; i<10; i++) - Goes from i=0 to i=9
    for (int i = 1; i <= 10; i++) {
      System.out.printf("%d X %d = %d\n", c, i, c * i);
    }
    System.out.print("\n");

    // Problem 04
    int d = 17;
    System.out.printf("Table of %d in reverse order is:\n", d);
    // for(int i=0; i<10; i++) - Goes from i=0 to i=9
    for (int i = 10; i >= 1; i--) {
      System.out.printf("%d X %d = %d\n", d, i, d * i);
    }
    System.out.print("\n");

    // Problem 06
    int e = 5;
    System.out.printf("Sum of factorial %d is: ", e);
    // What is factorial n = n * n-1 * n-2 ..... 1
    // 5! = 5*4*3*2*1 = 120
    int multiple_sum = 1;
    int factorial = 1;
    while (multiple_sum <= e) {
      factorial = factorial * multiple_sum;
      multiple_sum++;
    }
    System.out.println(factorial);
    System.out.print("\n");

    // Problem 09
    int f = 10;
    System.out.printf("Sum of Table of %d is: ", f);
    int sum1 = 0;
    // for(int i=0; i<10; i++) - Goes from i=0 to i=9
    for (int i = 1; i <= 10; i++) {
      sum1 = (sum1) + (f * i);
    }
    System.out.println(sum1);
    System.out.print("\n");
  }
}
