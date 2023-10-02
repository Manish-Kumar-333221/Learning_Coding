package com.Learning_Java;

class Thre1 extends Thread {
  public void run() {
    for (int i = 0; i <= 100; i++) {
      System.out.println("(Name = " + getName() + ", ID = " + getId() + ") Thre1 is cooking..." + i);
    }
  }
}

class Thre2 extends Thread {
  public void run() {
    for (int i = 0; i <= 100; i++) {
      System.out.println("(Name = " + getName() + ", ID = " + getId() + ") Thre2 is Chatting..." + i);
    }
  }
}

public class Learning_Java_Chapter13_Part06 {

  public static void main(String[] args) {
    Thre1 t1 = new Thre1();
    Thre1 t2 = new Thre1();
    Thre2 t3 = new Thre2();

    t1.start();
    try {
      t1.join();
    } catch (Exception e) {
      System.out.println(e);
    }

    t2.start();
    try {
      t2.join();
    } catch (Exception e) {
      System.out.println(e);
    }

    t3.start();
  }
}
