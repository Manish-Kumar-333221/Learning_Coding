package com.Learning_Java;

class MyException extends Exception {
  private static final long serialVersionUID = 1L;

  @Override
  public String toString() {
    // return super.toString() + " This is toString";
    return "This is toString()";
  }

  @Override
  public String getMessage() {
    // return super.getMessage() + " This is getMessage";
    return "This is getMessage()";
  }
}

public class Learning_Java_Chapter14_Part05 {

  public static void main(String[] args) {
    int a = 1;
    if (a <= 10) {
      try {
        throw new MyException();
      } catch (Exception e) {
        System.out.println(e.toString() + "\n" + e.getMessage() + "\n" + e);
        e.printStackTrace();
        System.out.println("Finished");
      }
      System.out.println("Now Finished\n");
    } else {
      System.out.println("a is greater than 10.");
    }

    int b = 0;
    if (b == 0) {
      try {
        throw new ArithmeticException();
      } catch (Exception e) {
        System.out.println(e.toString() + "\n" + e.getMessage() + "\n" + e);
        e.printStackTrace();
        System.out.println("Finished");
      }
      System.out.println("Now Finished");
    } else {
      System.out.println("a / b = " + a / b);
    }
  }
}
