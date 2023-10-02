package com.Learning_Java;

class goodMorning extends Thread {
  public void run() {
    while (true) System.out.println("Good Morning!");
  }
}

class welcome extends Thread {
  public void run() {
    while (true) {
      System.out.println("Welcome!");
      try {
        Thread.sleep(200);
      } catch (InterruptedException e) {
        e.printStackTrace();
      }
    }
  }
}

public class Learning_Java_Chapter13_Practice_Part01 {

  public static void main(String[] args) {
    // Problem 01
    goodMorning g = new goodMorning();
    welcome w = new welcome();

    g.start();
    w.start();

    // Problem 02
    // Adding sleep method in welcome thread in Q.01 to delay its execution for 200ms

    // Problem 03
    priority1 p1 = new priority1();
    priority2 p2 = new priority2();

    p1.setPriority(3);
    p2.setPriority(9);

    p1.start();
    p2.start();

    System.out.println("Priority of Priority1 is: " + p1.getPriority());
    System.out.println("Priority of Priority2 is: " + p2.getPriority());
  }
}
