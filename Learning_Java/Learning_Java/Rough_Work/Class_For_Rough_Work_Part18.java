package com.Learning_Java.Rough_Work;

public class Class_For_Rough_Work_Part18 {

  public static void main(String[] args) {

    try {
      int y = 10 / 0;
      System.out.println(y);
    } catch (ArithmeticException e) {
      System.out.println("ArithmeticException: " + e);
    } catch (Exception e) {
      System.out.println("Exception: " + e);
    }
  }
}
