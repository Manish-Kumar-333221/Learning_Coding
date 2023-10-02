package com.Learning_Java;

public class Learning_Java_Chapter07_Practice {

  static void multiplication(int n) {
    for (int i = 1; i <= 10; i++) {
      System.out.format("%d X %d = %d\n", n, i, n * i);
    }
  }

  static void pattern1(int n) {
    for (int i = 0; i < n; i++) {
      for (int j = 0; j <= i; j++) {
        System.out.print("*");
      }
      System.out.println();
    }
  }

  // sum(n) = 1 + 2 + 3... + n
  // sum(n) = 1 + 2 + 3... + n-1 + n
  // sum(n) = sum(n-1) + n
  // sum(3) = 3 + sum(2)
  // sum(3) = 3 + 2 + sum(1)
  // sum(3) = 3 + 2 + 1
  static int sumRec(int n) {
    // Base condition
    if (n == 1) {
      return 1;
    } else {
      return n + sumRec(n - 1);
    }
  }

  static void pattern2(int n) {
    for (int i = 0; i < n; i++) {
      for (int j = i; j < n; j++) {
        System.out.print("*");
      }
      System.out.println();
    }
  }

  static int fib(int n) {
    /* if(n==1){
        return 0;
    }
    else if(n==2){
        return 1;
    } */
    if (n == 1 || n == 2) {
      return n - 1;
    } else {
      return fib(n - 1) + fib(n - 2);
    }
  }

  static void Avg(int... arr) {
    float sum = 0;
    for (int a : arr) {
      sum = sum + a;
    }
    System.out.printf("The average of argument is: %f\n\n", sum / arr.length);
  }
  /*
   pattern2_rec(3) = 3 times star and new line +
                     pattern2_rec(2)
   pattern2_rec(3) = 3 times star and new line + 2
                     times star and new line +
                     pattern2_rec(1)
   pattern2_rec(3) = 3 times star and new line + 2
                     times star and new line + 1 times
                     star and new line +
                     pattern2_rec(0)
   pattern2_rec(3) = 3 times star and new line + 2
                     times star and new line + 1 times
                     star and new line
  */

  static void pattern2_rec(int n) {
    if (n == 0) {
      return;
    }
    for (int i = 0; i < n; i++) {
      System.out.print("*");
    }
    System.out.println();
    pattern2_rec(n - 1);
  }
  /*
   pattern1_rec(3) = pattern1_rec(2) + 3 times star
                     and new line.
   pattern1_rec(3) = pattern1_rec(1) + 2 times star and
                     new line + 3 times star and new
                     line.
   pattern1_rec(3) = pattern1_rec(0) + 1 times star and
                     new line + 2 times star and new
                     line + 3 times star and new line.
   pattern1_rec(3) = 1 times star and new line + 2
                     times star and new line + 3 times
                     star and new line.
  */

  static void pattern1_rec(int n) {
    if (n > 0) {
      pattern1_rec(n - 1);
      for (int i = 1; i <= n; i++) {
        System.out.print("*");
      }
      System.out.println();
    }
  }

  static void temp(int n) {
    float i = (n * 9 / 5f) + 32;
    System.out.printf("%d°C = %.1f°F\n\n", n, i);
  }

  static void sum(int n) {
    int i = 0;
    for (int j = 1; j <= n; j++) {
      i = i + j;
    }
    System.out.printf("The sum of first %d natural nunber is: %d\n", n, i);
  }

  public static void main(String[] args) {

    // Problem 01
    multiplication(7);

    System.out.println();

    // Problem 02
    pattern1(5);

    System.out.println();

    // Problem 03
    int c = sumRec(3);
    System.out.println(c);

    System.out.println();

    // Problem 04
    pattern2(5);

    System.out.println();

    // Problem 05
    // fibonacci series-0, 1, 1, 2, 3, 5, 8, 13, 21, 34
    int result = fib(7);
    System.out.println(result);

    System.out.println();

    // Problem 06
    Avg(1, 8, 6, 3, 5, 9, 4);

    // Problem 07
    pattern2_rec(5);

    System.out.println();

    // Problem 08
    pattern1_rec(5);

    System.out.println();

    // Problem 09
    temp(38);

    // Problem 10
    sum(10);
  }
}
