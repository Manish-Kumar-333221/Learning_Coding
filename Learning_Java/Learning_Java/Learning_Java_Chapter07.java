package com.Learning_Java;

public class Learning_Java_Chapter07 {
  static int logic(int x, int y) {
    int z;
    if (x >= y) {
      z = x + y;
    } else {
      z = (x + y) * 5;
    }
    return z;
  }

  static void tellJoke() {
    System.out.println("I invented a new word!\n" + "Plagiarism!\n");
  }

  static void change(int a) {
    a = 98;
  }

  static void change2(int[] arr) {
    arr[0] = 98;
  }

  static void foo() {
    System.out.println("Good Morning bro!\n");
  }

  static void foo(int a) {
    System.out.println("Good morning " + a + " bro!\n");
  }

  static void foo(int a, int b) {
    System.out.println("Good morning " + a + " bro!");
    System.out.println("Good morning " + b + " bro!\n");
  }

  public static int fo(int... arr) {
    int sum = 0;
    for (int a : arr) {
      sum = sum + a;
    }
    return sum;
  }

  public static int bar(int a, int... arr) {
    int sum = a;
    System.out.print(a + ", ");
    for (int i = 0; i <= arr.length; i++) {
      if (i < arr.length) {
        sum = sum + arr[i];
        if (i < arr.length - 1) {
          System.out.print(arr[i] + ", ");
        } else {
          System.out.print(arr[i]);
        }
      } else {
        System.out.print("\nThe sum of the value in the array is: ");
      }
    }
    return sum;
  }

  // Using Recursion
  static long factorial(int n) {
    if (n == 0 || n == 1) {
      return 1;
    } else {
      return n * factorial(n - 1);
    }
  }

  // factorial(0) = 1
  // factorial(5) = 5 * 4 * 3 * 2 * 1 = 120
  // factorial(n) = n * n-1 *....1
  // factorial(n) = n * factorial(n-1)

  // factorial (5) = 5 * factorial(4)
  // factorial (5) = 5 * 4 * factorial(3)
  // factorial (5) = 5 * 4 * 3 * factorial(2)
  // factorial (5) = 5 * 4 * 3 * 2 * factorial(1)
  // factorial (5) = 5 * 4 * 3 * 2 * 1
  // factorial (5) = 120

  // Using Loop
  static long factorial_iterative(int n) {
    if (n == (0 | 1)) {
      return 1;
    } else {
      long product = 1;
      for (int i = 1; i <= n; i++) {
        product = product * i;
      }
      return product;
    }
  }

  public static void main(String[] args) {

    int a = 5;
    int b = 7;
    int c = logic(a, b);
    if (c == a + b) {
      System.out.printf("The sum of %d and %d is: %d\n", a, b, c);
    } else {
      System.out.printf("The multiplication of %d and %d is: %d\n", a, b, c);
    }
    System.out.println();
    // Method invocation using Object creation
    // LearningJava07 obj = new LearningJava07();
    // c = obj.logic(a, b);

    int a1 = 7;
    int b1 = 5;
    int c1 = logic(a1, b1);
    if (c1 == a1 + b1) {
      System.out.printf("The sum of %d and %d is: %d\n", a1, b1, c1);
    } else {
      System.out.printf("The multiplication of %d and %d is: %d\n", a1, b1, c1);
    }
    System.out.println();
    // Method invocation using Object creation
    // method obj = new LearningJava07();
    // c = obj.logic(a, b);

    tellJoke();

    // Case 1: Changing the Integer
    int x = 45;
    change(x);
    System.out.println("The value of { int x } after  running change is: " + x);
    System.out.println();

    // Case 2: Changing the Array
    int[] marks = {52, 73, 77, 89, 98, 94};
    change2(marks);
    System.out.println("The value of { marks[0] } after running change is: " + marks[0]);
    System.out.println();

    // Method Overloading
    foo();
    foo(3000);
    foo(3000, 4000);
    // Arguments are actual!
    int fo = fo(577, 367, 357, 37, 67);
    System.out.printf("The sum of the value is: %d\n", fo);
    System.out.println(" ");

    int bar = bar(1, 2, 3, 4, 5, 6, 7, 8, 9);
    System.out.println(bar);
    System.out.println();
    int y = 15;
    System.out.printf("The value of factorial %d is: %d\n", y, factorial(y));
    System.out.printf("The value of factorial %d is: %d\n", y, factorial_iterative(y));
  }
}
