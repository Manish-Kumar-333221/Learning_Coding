package com.Learning_Java;

public class Learning_Java_Chapter14_Part07 {

  public static int division() {

    try {
      int a = 10;
      int b = 10;
      int c = a / b;
      return c;
    } catch (Exception e) {
      System.out.println(e);
    } finally {
      System.out.println("Programme is finished 02.");
    }
    return -1;
  }

  public static void main(String[] args) {

    try {
      int a = 10;
      int b = 0;
      int c = a / b;
      System.out.println(c);
    } catch (Exception e) {
      System.out.println(e);
    } finally {
      System.out.println("Programme is finished 01.");
    }

    System.out.println();

    int k = division();
    System.out.println("k = " + k);

    System.out.println();

    int a = 10;
    int b = 5;
    while (true) {
      try {
        int c = a / b;
        System.out.println(c);
      } catch (Exception e) {
        System.out.println(e);
        break;
      } finally {
        System.out.println("This is finally, and value of b = " + b);
      }
      b--;
    }

    System.out.println();

    try {
      System.out.println(5 / 0);
    } finally {
      System.out.println("Yes this is finally.");
    }
  }
}
