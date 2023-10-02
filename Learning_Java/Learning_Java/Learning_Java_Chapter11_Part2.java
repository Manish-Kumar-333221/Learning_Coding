package com.Learning_Java;

interface Bicycle {
  int a = 45;

  void applyBrake(int decrement);

  void speedUp(int increment);
}

interface HornBicycle {
  int x = 35;

  void blowHorn1();

  void blowHorn2();
}

class AvonCycle implements Bicycle, HornBicycle {
  // public int a = 4;
  // public int x = 3;

  @Override
  public void applyBrake(int decrement) {
    System.out.println("Applying Brake");
  }

  @Override
  public void speedUp(int increment) {
    System.out.println("Increasing Speed by " + increment);
  }

  @Override
  public void blowHorn1() {
    System.out.println("Kabhi khushi kabhi gum pee pee pee pee");
  }

  @Override
  public void blowHorn2() {
    System.out.println("Main hoon naa po po po po");
  }

  void blowHorn() {
    System.out.println("Pee Pee Poo Poo");
  }
}

public class Learning_Java_Chapter11_Part2 {
  @SuppressWarnings("all")
  public static void main(String[] args) {
    AvonCycle cycle = new AvonCycle();
    cycle.applyBrake(1);
    cycle.speedUp(1);
    cycle.blowHorn();
    cycle.blowHorn1();
    cycle.blowHorn2();

    // You can create properties in Interfaces
    System.out.println(Bicycle.a);
    System.out.println(HornBicycle.x);
    System.out.println(cycle.a);
    System.out.println(cycle.x);

    // You cannot modify the properties in Interfaces as they are final
    // cycle.a = 454; // Not Allowed
    // System.out.println(cycle.a);

    /*
    Bicycle Bicycle1 = new AvonCycle();
    Bicycle1.blowHorn();
    Bicycle1.blowHorn1();
    Bicycle1.blowHorn2();
    */
  }
}
