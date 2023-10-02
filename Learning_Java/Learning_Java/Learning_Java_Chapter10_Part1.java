package com.Learning_Java;

class Base {
  public int x;

  public int getX() {
    return x;
  }

  public void setX(int x) {
    this.x = x;
    System.out.println("I am in base and setting x now as: " + x);
  }

  public void printMe() {
    System.out.println("I am not a constructor");
  }
}

class Derived extends Base {
  public int y;

  public int getY() {
    return y;
  }

  public void setY(int y) {
    this.y = y;
    System.out.println("I am in derived and setting y now as: " + y);
  }
}

public class Learning_Java_Chapter10_Part1 {

  public static void main(String[] args) {

    // Creating an Object of base class
    Base b = new Base();
    b.setX(4);
    System.out.println(b.getX());

    System.out.println();

    // Creating an object of derived class
    Derived d = new Derived();
    d.setX(43);
    d.setY(56);
    System.out.println(d.getX());
    System.out.println(d.getY());
  }
}
