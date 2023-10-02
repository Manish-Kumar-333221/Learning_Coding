package com.Learning_Java.Rough_Work;

class Base {
  int a = 1;

  public void printMe() {
    System.out.println("I am not a constructor");
  }
}

public class Class_For_Rough_Work_Part10 {

  public static void main(String[] args) {

    // Array of objects;
    Base[] b = new Base[10];
    b[0] = new Base();
    b[0].a = 5;
    System.out.println("Value of a is: " + b[0].a);
    b[0].printMe();

    b[1] = new Base();
    System.out.println("Value of a is: " + b[1].a);
    b[1].printMe();
  }
}