package com.Learning_Java;

class Thread1 extends Thread {
  public void run() {
    for (int i = 0; i <= 10000; i++) {
      System.out.println("Thread1 is cooking..." + i);
    }
  }
}

class Thread2 extends Thread {
  public void run() {
    for (int i = 0; i <= 10000; i++) {
      System.out.println("Thread2 is Chatting..." + i);
    }
  }
}

public class Learning_Java_Chapter13_Part01 {

  public static void main(String[] args) {
    Thread1 t1 = new Thread1();
    Thread2 t2 = new Thread2();
    t1.start();
    t2.start();
  }
}
