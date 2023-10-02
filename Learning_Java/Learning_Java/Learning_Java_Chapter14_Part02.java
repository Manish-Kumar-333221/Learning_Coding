package com.Learning_Java;

public class Learning_Java_Chapter14_Part02 {

  public static void main(String[] args) {

    try {
      int a = 5 / 0;
      System.out.println(a);
    } catch (Exception e) {
      System.out.println("Error: Bad Expression. " + e);
      System.out.println(e.toString());
      System.out.println(e.getMessage());
      e.printStackTrace();
    }
    System.out.println("Finished");
  }
}
