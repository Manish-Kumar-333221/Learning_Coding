package Learning_Java;

import Learning_Java.Learning_Java_Chapter12_Part07_01;
import Learning_Java.c1;

class Same extends c1 {
  void meth2() {
    System.out.println("Inheriting values of same package in different class. (Of Custom Class) (PACKAGE)");
    System.out.println("The value of w is: " + w);
    System.out.println("The value of x is: " + x);
    System.out.println("The value of y is: " + y);
    // System.out.println("The value of z is: " + z); // Cannot access private member in same package.
    System.out.println("\n\n");
  }
}

class Using extends Learning_Java_Chapter12_Part07_01 {
  void meth2() {
    System.out.println("Inheriting values of same package in different class. (Of Public Class) (PACKAGE)");
    System.out.println("The value of w is: " + w);
    System.out.println("The value of x is: " + x);
    System.out.println("The value of y is: " + y);
    // System.out.println("The value of z is: " + z); // Cannot access private member in same package.
    System.out.println("\n\n");
  }
}

public class Learning_Java_Chapter12_Part07_02 {

  public static void main(String[] args) {

    Learning_Java_Chapter12_Part07_01 a = new Learning_Java_Chapter12_Part07_01();
    System.out.println("Inheriting values from same package in different class. (Of default class) (PACKAGE)");
    System.out.println("The value of w is: " + a.w);
    System.out.println("The value of x is: " + a.x);
    System.out.println("The value of y is: " + a.y);
    // System.out.println("The value of z is: " + a.z); // Cannot access private member in same package.
    System.out.println("\n\n");

    Same b = new Same();
    b.meth1();
    b.meth2();

    Using c = new Using();
    c.meth1();
    c.meth2();
  }
}
