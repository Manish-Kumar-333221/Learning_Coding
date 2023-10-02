package Nothing; // My Compiler not compiling class file without package name

import Learning_Java.Learning_Java_Chapter12_Part07_01;

class Using extends Learning_Java_Chapter12_Part07_01 {
  void meth2() {
    System.out.println("Inheriting values of different Package of Public Class in different Package of Custom Class or (in SubClass). (SUBCLASS)");
    System.out.println("The value of w is: " + w);
    System.out.println("The value of x is: " + x);
    // System.out.println("The value of y is: " + y); // Cannot access default member in different package.
    // System.out.println("The value of z is: " + z); // Cannot access private member in same or in different package.
    System.out.println("\n\n");

  }
}

class Hello {
  public Hello(String name) {
  System.out.println("Hello " + name);
    System.out.println("\n\n");
  }
}

public class Learning_Java_Chapter12_Part08_01 {
  public static void main(String[] args) {

    Learning_Java_Chapter12_Part07_01 a = new Learning_Java_Chapter12_Part07_01();
    System.out.println("Calling values in different package without inheriting to Class or (in World). (WORLD)");
    System.out.println("The value of w is: " + a.w);
    // System.out.println("The value of x is: " + a.x); // Cannot access protected member in world.
    // System.out.println("The value of y is: " + a.y); // Cannot access default member in different package.
    // System.out.println("The value of z is: " + a.z); // Cannot access private member in same or in different package.
    System.out.println("\n\n");

    Using b = new Using();
    b.meth1();
    b.meth2();
  }
}
