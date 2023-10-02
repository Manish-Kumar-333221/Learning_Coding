package Nothing; // My Compiler not compiling class file without package name

import Nothing.Using;

class n extends Using {
  public n () {
    meth2();
  }
  
  @Override
  public void meth1() {
    System.out.println("Inheriting Method meth1 in different Package (Nothing) and inheriting it (Nothing Package Custom Class) in same Package Custom Class and  Overriding it. (SUBCLASS)");
    System.out.println("Method Overrided");
    System.out.println("The value of w is: " + w);
    System.out.println("The value of x is: " + x);
    // System.out.println("The value of y is: " + y); // Cannot access default member in different package.
    // System.out.println("The value of z is: " + z); // Cannot access private member in same or in different package.
    System.out.println("\n\n");
  }

  void meth3() {
    System.out.println("Inheriting values in different package Custom Class or in SubClass.(SUBCLASS)");
    System.out.println("The value of w is: " + w);
    System.out.println("The value of x is: " + x);
    // System.out.println("The value of y is: " + y); // Cannot access default member in different package.
    // System.out.println("The value of z is: " + z); // Cannot access private member in same or in different package.
    System.out.println("\n\n");
  }
}

public class Learning_Java_Chapter12_Part08_02 {

  public static void main(String[] args) {

    n n1 = new n();
    n1.meth1(); // Inheriting Learning_Java_Chapter12_Part07_01 function of default class in Learning_Java_Chapter12_Part08_01 and Inheriting Learning_Java_Chapter12_Part08_01 in Learning_Java_Chapter12_Part08_02. (calling Learning_Java_Chapter12_Part07_01 function of default class without directly inheriting in Learing_Java_Chapter12_Part08_01. class).
    n1.meth2();
    n1.meth3();
  }
}
