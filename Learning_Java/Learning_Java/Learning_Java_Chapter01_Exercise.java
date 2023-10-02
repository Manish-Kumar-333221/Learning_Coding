package com.Learning_Java;

import java.util.Scanner;

public class Learning_Java_Chapter01_Exercise {

  public static void main(String[] args) {

    Scanner sc = new Scanner(System.in);

    // Exercise 01
    System.out.println("Enter Marks Of Students Obtained in following subjects:");

    System.out.print("Hindi:");
    int a = sc.nextInt();
    System.out.print("English:");
    int b = sc.nextInt();
    System.out.print("Math:");
    int c = sc.nextInt();
    System.out.print("Science:");
    int d = sc.nextInt();
    System.out.print("Social Science:");
    int e = sc.nextInt();

    int add = a + b + c + d + e;
    System.out.printf(
        "Total no. obtained in all subject: = %d marks \nwhich is %.1f%%\n",
        add, (add / 500f) * 100);
    sc.close();
  }
}
