package com.Learning_Java;

import java.util.Scanner;
import java.util.Random;

public class Learning_Java_Chapter04_Practice {

  public static void main(String[] args) {
    Scanner sc = new Scanner(System.in);
    Random r = new Random();

    // Problem 01
    int a = 10;
    if (a == 11) {
      System.out.println("I am 11 \n");
    } else {
      System.out.println("I am not 11 \n");
    }

    // Problem 02
    System.out.println("Enter Marks Of Students Obtained in following subjects:");

    System.out.print("Hindi:");
    int a1 = sc.nextInt();
    System.out.print("English:");
    int b = sc.nextInt();
    System.out.print("Math:");
    int c = sc.nextInt();
    System.out.print("Science:");
    int d = sc.nextInt();
    System.out.print("Social Science:");
    int e = sc.nextInt();
    float add = a1 + b + c + d + e;
    System.out.printf(
        "Your Overall marks and percentage is: %.0f marks and %.1f%%\n", add, add / 5f);
    if (a1 >= 33 && b >= 33 && c >= 33 && d >= 33 && e >= 33) {
      System.out.println("Congratulations, You have been promoted.\n");
    } else {
      System.out.println("Sorry, You have not been promoted! Please try again.\n");
    }

    // Problem 03
    System.out.print("Enter your income per annum: ");
    float tax = 0;
    float income = sc.nextFloat();
    if (income <= 250000) {
      tax = 0;
    } else if (income > 250000 && income <= 500000) {
      tax = tax + 0.05f * (income - 250000);
    } else if (income > 500000 && income <= 1000000) {
      tax = tax + 0.05f * (500000 - 250000);
      tax = tax + 0.2f * (income - 500000);
    } else if (income > 1000000) {
      tax = tax + 0.05f * (500000 - 250000);
      tax = tax + 0.2f * (1000000 - 500000);
      tax = tax + 0.3f * (income - 1000000);
    }
    System.out.println("The total tax paid by the employee is: Rs" + tax + "\n");
    // OR
    System.out.print("Enter your annual salary: ");
    long salary = sc.nextLong();
    float per = 0;
    if (salary <= 250000) {
      per = 0;
    } else if (salary > 250000 & salary <= 500000) {
      per = 0.05f * (salary - 250000);
    } else if (salary > 500000 & salary <= 1000000) {
      per = 12500 + 0.2f * (salary - 500000);
    } else if (salary > 1000000) {
      per = 112500 + 0.3f * (salary - 1000000);
    }
    System.out.println("The total tax paid by the employee is: Rs" + per + "\n");

    // Problem 04
    System.out.print("Enter the no. of the day of the week: ");
    int day = sc.nextInt();
    if (day == 1) {
      System.out.println("Monday");
    } else if (day == 2) {
      System.out.println("Tuesday");
    } else if (day == 3) {
      System.out.println("Wednesday");
    } else if (day == 4) {
      System.out.println("Thursday");
    } else if (day == 5) {
      System.out.println("Friday");
    } else if (day == 6) {
      System.out.println("Saturday");
    } else if (day == 7) {
      System.out.println("Sunday");
    }
    System.out.println("");
    // OR
    System.out.print("Enter the no. of the day of the week: ");
    int day1 = sc.nextInt();
    switch (day1) {
      case 1:
        System.out.println("Monday");
        break;
      case 2:
        System.out.println("Tuesday");
        break;
      case 3:
        System.out.println("Wednesday");
        break;
      case 4:
        System.out.println("Thursday");
        break;
      case 5:
        System.out.println("Friday");
        break;
      case 6:
        System.out.println("Saturday");
        break;
      case 7:
        System.out.println("Sunday");
        break;
    }
    System.out.println("");

    // Problem 05
    System.out.println("Enter the year to find wheather it's a leap year or not");
    int year = sc.nextInt();
    if (year % 4 == 0 && (year % 400 == 0 || year % 100 != 0)) {
      System.out.println("It's a leap year\n");
    } else {
      System.out.println("It's not a leap year\n");
    }

    // Problem 06
    System.out.print("Enter the url of your website: ");
    String website = sc.next();
    if (website.endsWith(".org")) {
      System.out.println("This is an organizational website");
    } else if (website.endsWith(".com")) {
      System.out.println("This is a Commercial website");
    } else if (website.endsWith(".in")) {
      System.out.println("This is an Indian website");
    }
    int random = r.nextInt(100);
    System.out.println(random);
    sc.close();
  }
}
