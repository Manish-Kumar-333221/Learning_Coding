package com.Learning_Java;

class MyThread1 extends Thread {
  @Override
  public void run() {

    for (long i = 1; i <= 1000000; i++) {
      System.out.println("Thread1 is cooking..." + i);
    }
  }
}

class MyThread2 extends Thread {
  @Override
  public void run() {

    for (long i = 1; i <= 1000000; i++) {
      System.out.println("Thread2 is Chatting..." + i);
    }
  }
}

class MyNewThread1 implements Runnable {
  @Override
  public void run() {
    for (int i = 1; i <= 10000; i++) {
      System.out.println("My New Thread1 is cooking..." + i);
    }
  }
}

class MyNewThread2 implements Runnable {
  @Override
  public void run() {
    for (int i = 1; i <= 10000; i++) {
      System.out.println("My New Thread2 is Chatting..." + i);
    }
  }
}

public class Learning_Java_Chapter13_Part03 {

  public static void main(String[] args) {

    MyThread1 a1 = new MyThread1();
    MyThread2 a2 = new MyThread2();
    a1.start();
    a2.start();

    MyNewThread1 bullet1 = new MyNewThread1();
    Thread gun1 = new Thread(bullet1);

    MyNewThread2 bullet2 = new MyNewThread2();
    Thread gun2 = new Thread(bullet2);

    gun1.start();
    gun2.start();
  }
}
