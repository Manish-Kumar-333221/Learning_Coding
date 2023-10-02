package com.Learning_Java;

class Cylinder {
  private int radius;
  private int height;

  public Cylinder() {
    this.radius = 1;
    this.height = 0;
  }

  public Cylinder(int height, int radius) {
    this.height = height;
    this.radius = radius;
  }

  public int getRadius() {
    return radius;
  }

  public void setRadius(int radius) {
    this.radius = radius;
  }

  public int getHeight() {
    return height;
  }

  public void setHeight(int height) {
    this.height = height;
  }

  public double surfaceArea() {
    return 2 * Math.PI * radius * radius + 2 * Math.PI * radius * height;
  }

  public double volume() {
    return Math.PI * radius * radius * height;
  }
}

class Rectangle {
  private int length;
  private int breadth;

  public Rectangle() {
    this.length = 4;
    this.breadth = 5;
  }

  public Rectangle(int length, int breadth) {
    this.length = length;
    this.breadth = breadth;
  }

  public int getLength() {
    return length;
  }

  public int getBreadth() {
    return breadth;
  }
}

class Sphere {
  private int radius;

  public int getRadius() {
    return radius;
  }

  public void setRadius(int radius) {
    this.radius = radius;
  }

  public double surfaceArea() {
    return 4 * Math.PI * radius * radius;
  }

  public double volume() {
    return (4 / 3) * Math.PI * radius * radius * radius;
  }
}

public class Learning_Java_Chapter09_Practice {

  public static void main(String[] args) {
    /*1.create a class cylinder and use getter and setters to set its radius and height
    2.use ➊ to calculate surface area and volume of the cylinder
    3.Use a constructor and repeat ➊
    4.Overload a constructor used to initialize a rectangle of length 4 and breath 5 or using custom parameters
    5.Repeat ➊ for a sphere*/

    // Problem 01
    Cylinder myCylinder = new Cylinder();
    myCylinder.setHeight(12);
    System.out.println(myCylinder.getHeight());
    myCylinder.setRadius(9);
    System.out.println(myCylinder.getRadius());

    System.out.println();

    // Problem 02
    System.out.println(myCylinder.surfaceArea());
    System.out.println(myCylinder.volume());

    System.out.println();

    // Problem 03
    Cylinder MyCylinder = new Cylinder(24, 10);
    System.out.println(MyCylinder.getHeight());
    System.out.println(MyCylinder.getRadius());

    System.out.println();

    // Problem 04
    Rectangle r = new Rectangle(12, 56);
    System.out.println(r.getLength());
    System.out.println(r.getBreadth());

    System.out.println();

    // Problem 05
    Sphere sp = new Sphere();
    sp.setRadius(5);
    System.out.println(sp.getRadius());
    System.out.println(sp.surfaceArea());
    System.out.println(sp.volume());
  }
}
