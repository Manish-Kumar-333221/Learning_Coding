package com.Learning_Java;

public class Learning_Java_Chapter06_Part1 {

  public static void main(String[] args) {
    // There are three main ways to create an array in Java
    // 1. Declaration and memory allocation
    int[] marks = new int[5];
    // Initialization
    marks[0] = 10;
    marks[1] = 20;
    marks[2] = 30;
    marks[3] = 40;
    marks[4] = 50;

    // 2. Declaration and then memory allocation
    int[] marks1;
    marks1 = new int[5];
    // Initialization
    marks1[0] = 100;
    marks1[1] = 60;
    marks1[2] = 70;
    marks1[3] = 90;
    marks1[4] = 86;

    // 3. Declaration, memory allocation and initialization together
    int[] marks2 = {98, 45, 79, 99, 80};

    // marks[5] = 96; - throws an error
    System.out.println(marks2[4]);

    System.out.println("");

    float[] marks3 = {98.5f, 45.5f, 79.5f, 99.5f, 80.5f};
    System.out.println(marks3[4]);

    System.out.println("");

    String[] students = {"Harry", "Rohan", "Shubham", "Lovish"};
    System.out.println(students.length);
    System.out.println(students[2]);

    System.out.println("");

    int[] marks4 = {98, 45, 79, 99, 80};

    System.out.println(marks4.length);
  }
}
