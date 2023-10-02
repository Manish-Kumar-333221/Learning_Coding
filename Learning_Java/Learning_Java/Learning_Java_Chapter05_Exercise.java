package com.Learning_Java.shape;

class Rectangle {
  int Length, Width;

  public void setData(int w, int... l) {
    this.Width = w;
    // variable = (condition) ? expressionTrue :  expressionFalse;
    Length = (l.length > 0) ? l[0] : 0;
  }

  public void getData() {
    if (this.Length != 0) {
      System.out.printf("Value of length is: %d\n", Length);
    }
    System.out.printf("Value of width is: %d\n", Width);
  }

  public void getArea() {
    if (this.Length == 0) {
      System.out.println("Area of Square is: " + (this.Width * this.Width));
    } else {
      System.out.println("Area of Rectangle is: " + (this.Length * this.Width));
    }
  }

  public void getParameter() {
    if (this.Length == 0) {
      System.out.println("Parameter of Square is: " + (4 * this.Width));
    } else {
      System.out.println("Parameter of Rectangle is: " + (2 * (this.Length + this.Width)));
    }
  }
}

class Square extends Rectangle {
  public Square() {
    System.out.println();
  }
}

class Circle {}

class Cylinder {}

class Sphere {}

public class Learning_Java_Chapter05_Exercise {

  public static void main(String[] args) {

    /*
    01) You have to create a package named
        com.Learning_Java.shape.
    02) This package should have individual classes for
        Rectangle, Square, Circle, Cylinder, Sphere.
    03) These classes should use inheritance to
        properly manage the code!.
    04) Include methods like volume, surface area and
        getters/setters for dimensions.
    */

    Rectangle R = new Rectangle();
    R.setData(4, 2);
    R.getData();
    R.getArea();
    R.getParameter();

    Square S = new Square();
    S.setData(6);
    S.getData();
    S.getArea();
    S.getParameter();
  }
}
