package com.Learning_Java;

public class Learning_Java_Chapter14_Part01 {

  public static void main(String[] args) {

    // Logical Error.
    // int a = 3 // Error: no semicolon;
    // b = 3 // Error: type is not declared;
    // System.out.println(s + 8); // Error: s is not declared here;

    // Logical Error.
    // Write a program to print prime no. between 1 to 10;
    System.out.println(2);
    for (int i = 1; i < 5; i++) {
      System.out.println(i * 2 + 1);
    } // It's a Logical error because is a programm it's a program of printing odd no.;

    // Runtime Error.
    int c = 2;
    System.out.println(c / 0); // This will throw an error because c / 0 is not possible.;
  }
}
