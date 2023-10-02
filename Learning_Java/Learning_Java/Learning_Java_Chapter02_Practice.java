package com.Learning_Java;

public class Learning_Java_Chapter02_Practice {

  public static void main(String[] args) {

    // Problem 01
    float a = 7 / 4f * 9 / 2f;
    System.out.println(a);
    System.out.println("-------------");

    // Problem 02
    char grade = 'B';
    grade = (char) (grade + 8);
    System.out.println(grade);

    // Decrypting the grade
    grade = (char) (grade - 8);
    System.out.println(grade);
    System.out.println("-------------");

    // Problem 03
    int a1 = 6;
    System.out.println(a1 > 8);
    System.out.println("-------------");

    // Problem 04
    float v = 2f;
    float u = 4f;
    float a2 = 6f;
    float s = 2f;
    float eqn = ((v * v) - (u * u)) / (2 * a2 * s);
    System.out.println(eqn);
    System.out.println("-------------");

    // Problem 05
    System.out.println(7 * 49 / 7 + 35 / 7);
  }
}
