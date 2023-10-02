package com.Learning_Java;

import java.util.Scanner;

public class Learning_Java_Chapter05_Part1 {

  public static void main(String[] args) {
    Scanner sc = new Scanner(System.in);

    System.out.println("Printing first 10 natural number (using while loop):");
    int a1 = 1;
    int a2 = 10;
    while (a1 <= a2) {
      if (a1 <= (a2 - 1)) {
        System.out.print(a1++ + ",");
      } else {
        System.out.print(a1++);
      }
    }
    System.out.println("\n");

    System.out.println("Printing first 10 natural number in reverse order(using while loop):");
    int a3 = 10;
    int a4 = 1;
    while (a3 >= a4) {
      if (a3 >= (a4 + 1)) {
        System.out.print(a3-- + ",");
      } else {
        System.out.print(a3--);
      }
    }
    System.out.println("\n");

    System.out.println("Printing first 10 natural number (using do while loop):");
    int b1 = 1;
    int b2 = 10;
    do
      if (b1 <= (b2 - 1)) {
        System.out.print(b1++ + ",");
      } else {
        System.out.print(b1++);
      }
    while (b1 <= b2);
    System.out.println("\n");

    System.out.println("Printing first 10 natural number reverse order (using do while loop):");
    int b3 = 10;
    int b4 = 1;
    do
      if (b3 >= (b4 + 1)) {
        System.out.print(b3-- + ",");
      } else {
        System.out.print(b3--);
      }
    while (b3 >= b4);
    System.out.println("\n");

    System.out.println("Printing first 10 natural number (using for loop):");
    int c = 1;
    int c2 = 10;
    for (int c1 = c; c1 <= c2; c1++) {
      if (c1 <= (c2 - 1)) {
        System.out.print(c1 + ",");
      } else {
        System.out.print(c1);
      }
    }
    System.out.println("\n");

    System.out.println("Printing first 10 natural number reverse order (using for loop):");
    int c3 = 10;
    int c5 = 1;
    for (int c4 = c3; c4 >= c5; c4--) {
      if (c4 >= (c5 + 1)) {
        System.out.print(c4 + ",");
      } else {
        System.out.print(c4);
      }
    }
    System.out.println("\n");

    // Printing first n natural even no.
    System.out.println("Printing first 10 natural even number (using for loop):");
    int c7 = 10;
    for (int c6 = 0; c6 < c7; c6++) {
      if (c6 <= (c7 - 2)) {
        System.out.print((2 * c6) + (","));
      } else {
        System.out.print((2 * c6));
      }
    }
    System.out.println("\n");

    // Printing first n natural odd no.
    System.out.println("Printing first 10 natural odd number (using for loop):");
    int c9 = 10;
    for (int c8 = 0; c8 < c9; c8++) {
      if (c8 <= (c9 - 2)) {
        System.out.print((2 * c8 + 1) + (","));
      } else {
        System.out.print((2 * c8 + 1));
      }
    }
    sc.close();
  }
}
