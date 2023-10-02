package com.Learning_Java;

class state1 extends Thread {
  public void run() {
    for (int i = 0; i < 100; i++) System.out.println('(' + getName() + ") Priority1! " + i);
  }
}

class state2 extends Thread {
  public void run() {
    for (int i = 0; i < 100; i++) System.out.println('(' + getName() + ") Priority2! " + i);
  }
}

public class Learning_Java_Chapter13_Practice_Part03 {
  @SuppressWarnings("all")
  public static void main(String[] args) {

    // Problem 04
    state1 p1 = new state1();
    state2 p2 = new state2();

    System.out.println("State of state1 is: " + p1.getState());
    System.out.println("State of state2 is: " + p2.getState());

    p1.start();
    p2.start();

    System.out.println("State of state1 is: " + p1.getState());
    System.out.println("State of state2 is: " + p2.getState());

    // Problem 05
    System.out.print(p1.currentThread());
    System.out.print(Thread.currentThread());
    System.out.println(" " + p1.currentThread().getState());
    System.out.println(" " + Thread.currentThread().getState());
  }
}
