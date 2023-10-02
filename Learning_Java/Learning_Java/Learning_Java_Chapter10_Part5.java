package com.Learning_Java;

class Animal {
  Animal() {
    System.out.println("Animals are cute.\n");
  }

  public void animals() {
    System.out.println("There is a large variety of animals.\n");
  }

  public void move() {
    System.out.println("Animals can walk and run.\n");
  }
}

class Cat extends Animal {
  @Override
  public void move() {
    System.out.println("Cats can walk and run.\n");
  }

  public void eat() {
    System.out.println("Cats are omnivorous.\n");
  }
}

class phone {
  public void play_music() {
    System.out.println("Playing music...");
  }

  public void stop_music() {
    System.out.println("Stoping music...");
  }
}

class smartphone extends phone {
  @Override
  public void stop_music() {
    System.out.println("music has been stoped...");
  }

  public void play_video() {
    System.out.println("Video is playing...");
  }
}

public class Learning_Java_Chapter10_Part5 {

  public static void main(String[] args) {
    Animal A = new Animal();

    Cat c = new Cat();
    c.move();
    c.animals();
    c.eat(); // Allowed
    c.animals();

    Animal a = new Cat(); // Allowed
    a.move();
    a.animals();
    // a.eat(); Not Allowed

    phone p = new phone(); // Allowed
    smartphone sp = new smartphone(); // Allowed
    p.play_music();

    phone ph = new smartphone(); // Yes it is allowed
    // smartphone d = new phone(); Not Allowed
    ph.play_music();
    ph.stop_music();
    // ph.play_video(); Not Allowed
  }
}
