package com.Learning_Java.Rough_Work;

import com.Learning_Java.Learning_Java_Chapter07;

public class Class_For_Rough_Work_Part01 {
  @SuppressWarnings("all")
  public static void main(String[] args) {

    System.out.println(Learning_Java_Chapter07.bar(5, 5)); // WITH inherting (importing).
    System.out.println(Learning_Java_Chapter07.fo(555, 55, 5)); // WITH inherting (importing).

    Learning_Java_Chapter07 l = new Learning_Java_Chapter07(); // WITH inherting (importing).
    System.out.println(l.bar(5, 5));
    System.out.println(l.fo(555, 55, 5));
    System.out.println(
        com.Learning_Java.Learning_Java_Chapter07.bar(5, 5)); // WITHOUT inheriting (importing).
    System.out.println(
        com.Learning_Java.Learning_Java_Chapter07.fo(
            555, 55, 5)); // WITHOUT inheriting (importing).

    com.Learning_Java.Learning_Java_Chapter07 n =
        new com.Learning_Java.Learning_Java_Chapter07(); // WITHOUT inheriting (importing).
    System.out.println(n.bar(5, 5));
    System.out.println(n.fo(555, 55, 5));
  }
}
