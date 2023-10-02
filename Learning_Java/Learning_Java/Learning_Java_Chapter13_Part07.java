package com.Learning_Java;

class NewThre1 extends Thread {
  public void run() {
    for (int i = 0; i <= 1000; i++) {
      System.out.println(
          "(Name = " + getName() + ", ID = " + getId() + ") NewThre1 is cooking..." + i);
      try {
        Thread.sleep(500);
      } catch (InterruptedException e) {
        e.printStackTrace();
      }
    }
  }
}

class NewThre2 extends Thread {
  public void run() {
    for (int i = 0; i <= 1000; i++) {
      System.out.println(
          "(Name = " + getName() + ", ID = " + getId() + ") NewThre2 is Chatting..." + i);
    }
  }
}

public class Learning_Java_Chapter13_Part07 {

  public static void main(String[] args) {
    NewThre1 t1 = new NewThre1();
    NewThre2 t2 = new NewThre2();

    t1.start();
    t2.start();
  }
}
