package com.Learning_Java.Rough_Work;

public class Class_For_Rough_Work_Part29 {

  public static boolean check(int i) {
    System.out.println(i);
    if (i == 1) return false;
    return true;
  }

  public static void main(String[] args) {
    System.out.println(check(0) && check(1) && check(2));
    System.out.println(check(1) && check(2) || check(3));
  }
}
