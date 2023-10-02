package com.Learning_Java;

class Employee1 {
  int salary;
  String name;

  public int getSalary() {
    return salary;
  }

  public String getName() {
    return name;
  }

  public void setName(String n) {
    name = n;
  }
}

class CellPhone {
  public void ring() {
    System.out.println("Ringing...");
  }

  public void vibrate() {
    System.out.println("Vibrating...");
  }

  public void callFriend() {
    System.out.println("Calling Mukul...");
  }
}

class Square {
  int side;

  public int area() {
    return side * side;
  }

  public int perimeter() {
    return 4 * side;
  }
}

class rectangle {
  int length;
  int width;

  public int area() {
    return length * width;
  }

  public int perimeter() {
    return 2 * (length + width);
  }
}

class Tommy {
  public void hit() {
    System.out.println("Hitting the enemy");
  }

  public void run() {
    System.out.println("Running from the enemy");
  }

  public void fire() {
    System.out.println("Firing on the enemy");
  }
}

class Circle {
  int radius;

  public int area() {
    return radius;
  }

  public int perimeter() {
    return radius;
  }
}

public class Learning_Java_Chapter08_Practice {

  public static void main(String[] args) {

    // Problem 01
    Employee1 harry = new Employee1();
    harry.setName("CodeWithHarry");
    harry.salary = 233;
    System.out.println(harry.getSalary());
    System.out.println(harry.getName());

    System.out.println();

    // Problem 02
    CellPhone asus = new CellPhone();
    asus.callFriend();
    asus.vibrate();
    asus.ring();

    System.out.println();

    // Problem 03
    Square sq = new Square();
    sq.side = 3;
    System.out.println(sq.area());
    System.out.println(sq.perimeter());

    System.out.println();

    // Problem 04
    rectangle rect = new rectangle();
    rect.length = 1;
    rect.width = 3;
    System.out.println(rect.area());
    System.out.println(rect.perimeter());

    System.out.println();

    // Problem 05
    Tommy player1 = new Tommy();
    player1.fire();
    player1.run();
    player1.hit();

    System.out.println();

    // Problem 06
    Circle circle = new Circle();
    circle.radius = 6;
    System.out.println(circle.area());
    System.out.println(circle.perimeter());
  }
}
