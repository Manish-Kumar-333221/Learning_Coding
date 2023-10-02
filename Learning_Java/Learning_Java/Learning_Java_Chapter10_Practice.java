package com.Learning_Java;

class Circle1 {
  int radius;

  Circle1(int r) {
    this.radius = r;
  }

  public double getAreaOfCircle() {
    return Math.PI * this.radius * this.radius;
  }
}

class Cylinder1 extends Circle1 {
  int height;

  Cylinder1(int r, int h) {
    super(r);
    this.height = h;
  }

  public double getAreaOfCylinder() {
    return (2 * Math.PI * this.radius * this.height) + (2 * Math.PI * this.radius * this.radius);
  }

  public double getVolumeOfCylinder() {
    return Math.PI * this.radius * this.radius * this.height;
  }
}

class Rectangle1 {
  int length;
  int width;

  Rectangle1(int l, int w) {
    this.length = l;
    this.width = w;
  }

  public int getParameterOfRectangle() {
    return 2 * (this.length + this.width);
  }

  public int getAreaOfRectangle() {
    return this.length * this.width;
  }
}

class Cuboid extends Rectangle1 {
  int height;

  Cuboid(int l, int w, int h) {
    super(l, w);
    this.height = h;
  }

  public int gettotalSurfaceArea() {
    return 2
        * ((this.length * this.width) + (this.width * this.height) + (this.length * this.height));
  }

  public int getlateralSurfaceArea() {
    return 2 * this.height * (this.length + this.width);
  }

  public int getVolumeOfCuboid() {
    return this.length * this.width * this.height;
  }
}

public class Learning_Java_Chapter10_Practice {

  public static void main(String[] args) {

    // Problem 01 and 03
    Cylinder1 a = new Cylinder1(5, 10);
    System.out.println("The Area of Circle is: " + a.getAreaOfCircle());
    System.out.println("The area of Cylinder is: " + a.getAreaOfCylinder());
    System.out.println("The Volume of Cylinder is: " + a.getVolumeOfCylinder());

    System.out.println();

    // Problem 02 and 04
    Cuboid c = new Cuboid(12, 15, 10);
    System.out.println("The parameter of Rectangle is: " + c.getParameterOfRectangle());
    System.out.println("The area of Rectangle is: " + c.getAreaOfRectangle());
    System.out.println("The Total Surface Area of Cuboid is: " + c.gettotalSurfaceArea());
    System.out.println("The Latetal Surface Area of cuboid is: " + c.getlateralSurfaceArea());
    System.out.println("The Volume of cuboid is: " + c.getVolumeOfCuboid());
  }
}
