package com.Learning_Java;

 abstract class Parent {

  Parent() {
    System.out.println("I am a Constructor");
  }

  public void sayHello() {
    System.out.println("Hello");
  }

  public abstract void greet1();

  public abstract void greet2();
}

class Child extends Parent {
  @Override
  public void greet1() {
    System.out.println("greet1");
  }

  @Override
  public void greet2() {
      System.out.println("greet2");
  }

  public void sayBy() {
    System.out.println("By By");
  }
}

abstract class Child1 extends Parent {
  public void greet3() {
    System.out.println("I am good");
  }
}

public class Learning_Java_Chapter11_Part1 {

  public static void main(String[] args) {

    // Parent p = new Parent(); Not Allowed

    Parent parent = new Parent() { // Allowed
          @Override
          public void greet1() {
            System.out.println("Hello, Good Morning");
          }

          @Override
          public void greet2() {
            System.out.println("Hello, Good Evening");
          }
        };
    parent.sayHello();
    parent.greet1();
    parent.greet2();

    System.out.println();

    Child child = new Child();
    child.sayHello();
    child.greet1();
    child.greet2();
    child.sayBy();

    System.out.println();

    Parent parent_Child = new Child();
    parent_Child.sayHello();
    parent_Child.greet1();
    parent_Child.greet2();
    // parent_Child.sayBy(); // Not Allowed

    System.out.println();

    // Child1 ch = new Child1(); //  Not Allowed

    Child1 child1 = new Child1() { // Allowed
          @Override
          public void greet1() {
            System.out.println("Hello, Good Afternoon");
          }

          @Override
          public void greet2() {
            System.out.println("Hello, Good Night");
          }
        };
    child1.sayHello();
    child1.greet1();
    child1.greet2();
    child1.greet3();

    System.out.println();

    Parent parent_Child1 = new Child1() {
          @Override
          public void greet1() {
            System.out.println("Hello, Good Afternoon");
          }

          @Override
          public void greet2() {
            System.out.println("Hello, Good Night");
          }
        }; // Allowed
    parent_Child1.sayHello();
    parent_Child1.greet1();
    parent_Child1.greet2();
    // parent_Child1.greet3(); // Not Allowed
  }
}
