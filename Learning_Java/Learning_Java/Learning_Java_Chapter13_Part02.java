package com.Learning_Java;

class NewThread1 implements Runnable {
  @Override
  public void run() {
    for (int i = 1; i <= 10000; i++) {
      System.out.println("New Thread1 is cooking..." + i);
    }
  }
}

class NewThread2 implements Runnable {
  @Override
  public void run() {
    for (int i = 1; i <= 10000; i++) {
      System.out.println("New Thread2 is Chatting..." + i);
    }
  }
}

public class Learning_Java_Chapter13_Part02 {

  public static void main(String[] args) {

    NewThread1 bullet1 = new NewThread1();
    Thread gun1 = new Thread(bullet1);
    NewThread2 bullet2 = new NewThread2();
    Thread gun2 = new Thread(bullet2);
    gun1.start();
    gun2.start();
  }
}
