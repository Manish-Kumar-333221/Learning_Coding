package com.Learning_Java;

abstract class pen {
  public abstract void write();

  public abstract void refill();
}

class fountain extends pen {
  public void write() {
    System.out.println("Writing...");
  }

  public void refill() {
    System.out.println("Refilling the pen...");
  }

  public void changeNib() {
    System.out.println("Changing the Nib...");
  }
}

interface basicAnimal {
  void eat();

  void sleep();
}

class monkey {
  public void jump() {
    System.out.println("Jumping...");
  }

  public void bite() {
    System.out.println("Biting...");
  }
}

class human extends monkey implements basicAnimal {
  public void eat() {
    System.out.println("Eating...");
  }

  public void sleep() {
    System.out.println("Sleeping...");
  }
}

abstract class telephone {
  public abstract void ring();

  public abstract void lift();

  public abstract void disconnected();
}

class smarttelephone extends telephone {
  public void ring() {
    System.out.println("Telephone is rinnging....");
  }

  public void lift() {
    System.out.println("lift the call....");
  }

  public void disconnected() {
    System.out.println("Call is disconnected....");
  }
}

interface smartTVremote {}

interface TVremote extends smartTVremote {}

class TV implements TVremote {}

public class Learning_Java_Chapter11_Practice {

  public static void main(String[] args) {
    /*
    01) Create an abstract class pen with methods
        write() and refill() as abstract methods.
    02) Use the pen class from Q1 to create a concrete
        class fountain pen with additional method
        changeNib().
    03) Create a class monkey with methods jump() and
        bite(). Create a class human which inherits
        this monkey class and implements basicanimal
        interface with eat() and sleep() methods.
    04) Create a class telephone with ring(), lift()
        and disconnected() methods as abstract methods.
        Create another class smarttelephone and
        demonstrate polymorphism.
    05) Demonstrate polymorphism using monkey
        class from Q3.
    06) Create an interface TVremote and use it to
        inherit another interface smartTVremote.
    07) Create a class TV which implements TVremote
        interface from Q6.
    */
    // Problem 01 & 02
    fountain Fountain = new fountain();
    Fountain.write();
    Fountain.refill();
    Fountain.changeNib();

    System.out.println();

    // Problem 03
    human Human = new human();
    Human.jump();
    Human.bite();
    Human.eat();
    Human.sleep();

    System.out.println();

    // Problem 04
    telephone Phone = new smarttelephone();
    Phone.ring();
    Phone.lift();
    Phone.disconnected();

    System.out.println();

    // Problem 05
    monkey Animal = new human();
    Animal.jump();
    Animal.bite();

    System.out.println();
    
  }
}
