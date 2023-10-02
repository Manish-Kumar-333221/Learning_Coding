package com.Learning_Java;

class NegativeRadiusException extends Exception {
  private static final long serialVersionUID = 1L;

  @Override
  public String toString() {
    return "Radius Cannot be Negative";
  }

  @Override
  public String getMessage() {
    return "Redius Cannot be Negative";
  }
}

public class Learning_Java_Chapter14_Part06 {

  public static int divide(int a, int b) throws ArithmeticException {
    return a / b;
  }

  public static double area(int r) throws NegativeRadiusException {
    if (r < 0) {
      throw new NegativeRadiusException();
    }
    return Math.PI * r * r;
  }

  public static void main(String[] args) {

    try {
      int a = divide(2, 0);
      System.out.println("a = " + a);
    } catch (Exception e) {
      System.out.println(e);
    }

    try {
      double ar = area(-10);
      System.out.println("area = " + ar);
    } catch (Exception e) {
      System.out.println(e);
    }
  }
}
