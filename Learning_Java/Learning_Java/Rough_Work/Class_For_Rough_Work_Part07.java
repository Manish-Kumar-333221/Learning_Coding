package com.Learning_Java.Rough_Work;

import java.util.Scanner;

public class Class_For_Rough_Work_Part07 {

  public static void main(String[] args) {
    Scanner sc = new Scanner(System.in);
    long a;
    double b = 0.0;
    System.out.print("Enter the nth number: ");
    a = sc.nextLong();
    for (long i = 1; i <= a; i++) {
      System.out.println("(1/" + i + "²)");
      b = b + (1.0 / (i * i));
      if (i < a) {
        System.out.print(" + ");
      }
    }
    System.out.print(" = " + b);
    sc.close();
  }
}
