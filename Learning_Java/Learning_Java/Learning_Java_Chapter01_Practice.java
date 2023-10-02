package com.Learning_Java;

import java.util.Scanner;

public class Learning_Java_Chapter01_Practice {

  public static void main(String[] args) {

    Scanner sc = new Scanner(System.in);

    // Problem 01
    int a = 6;
    int b = 4;
    int c = 7;
    int sum = a + b + c;
    System.out.printf("The sum of %d+%d+%d = %d\n", a, b, c, sum);
    System.out.println("-------------");

    // Problem 02
    float sub1 = 76;
    float sub2 = 73;
    float sub3 = 57;
    float CGPA = (sub1 + sub2 + sub3) / 30;
    System.out.println(CGPA);
    System.out.println("-------------");

    // Problem 03
    System.out.println("What is your name?");
    String name = "Manish Kumar";
    System.out.printf("Hello ”%s” have a good day!\n", name);
    System.out.println("-------------");

    // Problem 04
    System.out.print("Enter kilometre to change in miles:");
    double convert = sc.nextDouble();
    double converter = convert * 0.621371f;
    System.out.printf("%f kilometre =  %f miles.\n", convert, converter);
    System.out.println("-------------");

    // Problem 05
    System.out.println("Enter your number:");
    System.out.println("The text entered by you is a number or not:" + sc.hasNextLong());
    System.out.println("-------------");
    sc.close();
  }
}
