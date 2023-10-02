package com.Learning_Java;

public class Learning_Java_Chapter04_Part1 {

  public static void main(String[] args) {

    int age = 20;
    if (age > 18) {
      System.out.println("Yes boy you can drive!");
    } else {
      System.out.println("No boy you cannot drive yet!");
    }
    System.out.println("-----------------------");
    // OR
    int age1 = 18;
    boolean cond = (age1 > 18);
    if (cond) {
      System.out.println("Yes boy you can drive!");
    } else {
      System.out.println("No boy you cannot drive yet!");
    }
    System.out.println("-----------------------");

    System.out.println("For Logical AND");
    boolean a = true;
    boolean b = false;
    if (a == true && b == false) {
      System.out.println("Yes");
    } else {
      System.out.println("Not");
    }
    System.out.println("-----------------------");

    boolean a1 = true;
    boolean b1 = false;
    if (a1 == true && b1 == true) {
      System.out.println("Yes");
    } else {
      System.out.println("Not");
    }
    System.out.println("-----------------------");

    boolean a2 = true;
    boolean b2 = true;
    boolean c2 = true;
    if (a2 && b2 && c2) {
      System.out.println("Yes");
    } else {
      System.out.println("Not");
    }
    System.out.println("-----------------------");
    boolean a3 = true;
    boolean b3 = false;
    boolean c3 = true;
    if (a3 && b3 && c3) {
      System.out.println("Yes");
    } else {
      System.out.println("Not");
    }
    System.out.println("-----------------------");

    System.out.println("For Logical OR");
    boolean d = true;
    boolean e = false;
    boolean f = true;
    if (d || e || f) {
      System.out.println("Yes");
    } else {
      System.out.println("Not");
    }
    System.out.println("-----------------------");

    boolean d1 = false;
    boolean e1 = false;
    boolean f1 = false;
    if (d1 || e1 || f1) {
      System.out.println("Yes");
    } else {
      System.out.println("Not");
    }
    System.out.println("-----------------------");

    System.out.println("For Logical NOT");
    boolean g = false;
    System.out.printf("g = %b\n", g);
    boolean h = true;
    System.out.printf("h = %b\n", h);
    System.out.print("Not g is: " + !g);
    System.out.println("Not h is: " + !h);
  }
}
