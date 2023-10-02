package com.Learning_Java;

import java.util.Scanner;

public class Learning_Java_Chapter04_Part2 {

  public static void main(String[] args) {
    Scanner sc = new Scanner(System.in);

    System.out.print("Enter your age: ");
    int age = sc.nextInt();
    if (age >= 60) {
      System.out.println("You are well experienced!");
    } else if (age >= 45) {
      System.out.println("You are experienced!");
    } else if (age >= 30) {
      System.out.println("You are semi experienced!");
    } else if (age >= 18) {
      System.out.println("You are semi-semi experienced!");
    } else {
      System.out.println("You are not experienced!");
    }
    System.out.println("-----------------------");
    sc.close();

    // variable = (condition) ? expressionTrue :  expressionFalse;

    System.out.println("Using short hand condition");

    // if condition only;
    String a = (age >= 18) ? "You are eligible to vote!" : "";

    System.out.println(a);

    System.out.println("-----------------------");

    // if else condition;
    String a1 = (age >= 18) ? "You are eligible to vote!" : "You are not eligible to vote yet!";

    System.out.println(a1);

    System.out.println("-----------------------");

    // if else-if condition;
    String a2 =
        (age >= 18)
            ? "You are eligible to vote!"
            : (age < 16) ? "You should study now don't think about it" : "";

    System.out.println(a2);

    System.out.println("-----------------------");

    // variable = (condition) ? expressionTrue :  ((condition) ? expressionTrue : expressionFalse);

    // if else-if else condition;
    String b =
        (age >= 18) /*if condition*/
            ? "You are eligible to vote!"
            : ((age >= 15) /*else if condition*/
                ? "You are not eligible to vote yet!"
                : "You are a kid now, you go to your school!"); /*else condition*/
    System.out.println(b);

    System.out.println("-----------------------");

    /* variable = (condition) ? expressionTrue : ((condition) ? expressionTrue : ((condition) ? expressionTrue : ((condition) ? expressionTrue : expressionFalse)));
    */

    // if else-if else-if else-if else condition;
    String c =
        (age >= 60) /*if condition*/
            ? "You are well experienced!"
            : ((age >= 45) /*else if condition*/
                ? "You are experienced!"
                : ((age >= 30) /*else if condition*/
                    ? "You are semi experienced!"
                    : ((age >= 18) /*else if condition*/
                        ? "You are semi-semi experienced!"
                        : "You are not experienced!"))); /*else condition*/
    System.out.println(c);

    System.out.println("-----------------------");
  }
}