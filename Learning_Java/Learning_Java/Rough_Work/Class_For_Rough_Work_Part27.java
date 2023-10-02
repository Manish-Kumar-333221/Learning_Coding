package com.Learning_Java.Rough_Work;

public class Class_For_Rough_Work_Part27 {

  public static void main(String[] args) {
    String a, b;
    a = b = Integer.toString(1) + Integer.toString(2);
    System.out.println(a == b);
    
    String c, d;
    c = Integer.toString(1) + Integer.toString(2);
    d = Integer.toString(1) + Integer.toString(2);
    System.out.println(c == d);
  }
}
