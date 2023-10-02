package com.Learning_Java;

class EkClass {
  int a;

  EkClass(int a) {
    this.a = a;
  }

  public int getA() {
    return a;
  }

  public int returnone() {
    return 1;
  }

  public void helo() {
    System.out.println("Hello");
  }

  public void by(int a) {
    System.out.println("Ok,Bye bye");
  }
}

class DoClass extends EkClass {
  DoClass(int c) {
    super(50 - c);
    super.helo();
    helo();
    System.out.println("I am a constructor");
    super.by(c);
  }
}

public class Learning_Java_Chapter10_Part3 {

  public static void main(String[] args) {
    EkClass e = new EkClass(65);
    DoClass d = new DoClass(5);
    System.out.println(e.getA());
  }
}
