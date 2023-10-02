package com.Learning_Java;

class A {
  public int harry() {
    return 1;
  }

  public void meth1() {
    System.out.println("I am method 2 of class A");
  }
}

class B extends A {
  @Override
  public void meth1() {
    System.out.println("I am method 2 of class B");
  }

  public void meth3() {
    System.out.println("I am method 3 of class B");
  }
}

public class Learning_Java_Chapter10_Part4 {

  public static void main(String[] args) {
    A a = new A();
    a.meth1();

    B b = new B();
    b.meth1();
  }
}
