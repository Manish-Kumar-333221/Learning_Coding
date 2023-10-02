package com.Learning_Java;

class priority1 extends Thread {
  public void run() {
    for (int i = 0; i < 100; i++) System.out.println("Priority1! " + i);
  }
}

class priority2 extends Thread {
  public void run() {
    for (int i = 0; i < 100; i++) System.out.println("Priority2! " + i);
  }
}

public class Learning_Java_Chapter13_Practice_Part02 {

  public static void main(String[] args) {

    // Problem 03
    priority1 p1 = new priority1();
    priority2 p2 = new priority2();

    p1.setPriority(3);
    p2.setPriority(9);

    p1.start();
    p2.start();

    System.out.println("Priority of priority1 is: " + p1.getPriority());
    System.out.println("Priority of priority2 is: " + p2.getPriority());
  }
}
