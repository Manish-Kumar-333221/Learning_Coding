package com.Learning_Java;

class NewMyThread1 extends Thread {
  public NewMyThread1(String str) {
    super(str);
  }

  public void run() {
    for (int i = 0; i < 100; i++) {
      System.out.println("New My Thread is running: " + i);
    }
  }
}

public class Learning_Java_Chapter13_Part04 {

  public static void main(String[] args) {

    NewMyThread1 t1 = new NewMyThread1("One");
    System.out.println("State of Thread NewMyThread1 is: " + t1.getState());
    t1.start();
    System.out.println("Id of Thread NewMyThread1 is: " + t1.getId());
    System.out.println("Name of Thread NewMyThread1 is: " + t1.getName());
    System.out.println("State of Thread NewMyThread1 is: " + t1.getState());
  }
}
