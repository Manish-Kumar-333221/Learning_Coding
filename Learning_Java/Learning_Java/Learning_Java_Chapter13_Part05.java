package com.Learning_Java;

class Thr extends Thread {
  public Thr(String str) {
    super(str);
  }

  public void run() {
    for (int i = 0; i < 100; i++) {
      System.out.println(getName() + " is running: " + i);
    }
  }
}

public class Learning_Java_Chapter13_Part05 {

  public static void main(String[] args) {

    Thr t1 = new Thr("Thr1");
    Thr t2 = new Thr("Thr2");
    Thr t3 = new Thr("Thr3");
    Thr t4 = new Thr("Thr4");
    Thr t5 = new Thr("Thr5");

    t1.setPriority(Thread.MIN_PRIORITY);
    t2.setPriority(Thread.MIN_PRIORITY);
    t3.setPriority(Thread.NORM_PRIORITY);
    t4.setPriority(Thread.MIN_PRIORITY);
    t5.setPriority(Thread.MAX_PRIORITY);

    System.out.println("State of Thread Thr1 is: " + t1.getState());
    System.out.println("State of Thread Thr2 is: " + t2.getState());
    System.out.println("State of Thread Thr3 is: " + t3.getState());
    System.out.println("State of Thread Thr4 is: " + t4.getState());
    System.out.println("State of Thread Thr5 is: " + t5.getState());

    System.out.println("Id of Thread Thr1 is: " + t1.getId());
    System.out.println("Id of Thread Thr2 is: " + t2.getId());
    System.out.println("Id of Thread Thr3 is: " + t3.getId());
    System.out.println("Id of Thread Thr4 is: " + t4.getId());
    System.out.println("Id of Thread Thr5 is: " + t5.getId());

    System.out.println("Name of Thread Thr1 is: " + t1.getName());
    System.out.println("Name of Thread Thr2 is: " + t2.getName());
    System.out.println("Name of Thread Thr3 is: " + t3.getName());
    System.out.println("Name of Thread Thr4 is: " + t4.getName());
    System.out.println("Name of Thread Thr5 is: " + t5.getName());

    System.out.println("Priority of Thread Thr1 is: " + t1.getPriority());
    System.out.println("Priority of Thread Thr2 is: " + t2.getPriority());
    System.out.println("Priority of Thread Thr3 is: " + t3.getPriority());
    System.out.println("Priority of Thread Thr4 is: " + t4.getPriority());
    System.out.println("Priority of Thread Thr5 is: " + t5.getPriority());

    t1.start();
    t2.start();
    t3.start();
    t4.start();
    t5.start();

    System.out.println("State of Thread Thr1 is: " + t1.getState());
    System.out.println("State of Thread Thr2 is: " + t2.getState());
    System.out.println("State of Thread Thr3 is: " + t3.getState());
    System.out.println("State of Thread Thr4 is: " + t4.getState());
    System.out.println("State of Thread Thr5 is: " + t5.getState());
  }
}
