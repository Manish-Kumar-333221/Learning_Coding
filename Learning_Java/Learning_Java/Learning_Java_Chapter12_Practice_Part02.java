package com.Learning_Java;

import java.util.Scanner;

public class Learning_Java_Chapter12_Practice_Part02 {

  public static void main(String[] args) {
    Scanner sc = new Scanner(System.in);
    System.out.print("Enter Your Name: ");
    String s = sc.nextLine();
    System.out.println("Hello " + s);
    sc.close();
  }
}
