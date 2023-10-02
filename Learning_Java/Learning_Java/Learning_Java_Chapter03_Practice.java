package com.Learning_Java;

public class Learning_Java_Chapter03_Practice {

  public static void main(String[] args) {

    // Problem 01
    String name = "Manish Kumar";
    name = name.toLowerCase();
    System.out.println(name);
    System.out.println("-------------");

    // Problem 02
    String name1 = "Manish  Kumar";
    name1 = name1.replace(" ", "_");
    System.out.println(name1);
    System.out.println("-------------");

    // Problem 03
    String name2 = "Dear <|name|> , Thanks a lot.";
    name2 = name2.replace("<|name|>", "Harry");
    System.out.println(name2);
    System.out.println("-------------");

    // Problem 04
    String name3 = "Manish   kumar";
    int index = name3.indexOf("  ");
    int index1 = name3.indexOf("   ");
    System.out.println(index);
    System.out.println(index1);
    System.out.println("-------------");

    // Problem 05
    String letter = "Dear Harry,\n\t This Java Course is nice.\nThanks";
    System.out.println(letter);
    System.out.println("-------------");
  }
}
