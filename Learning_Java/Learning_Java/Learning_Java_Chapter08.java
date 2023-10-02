package com.Learning_Java;

class Employee {
  int id;
  int salary;
  String name;

  public void printDetails() {
    System.out.print("\nMy id is " + id);
    System.out.print(",\nmy name is " + name);
  }

  public int getSalary() {
    return salary;
  }
}

public class Learning_Java_Chapter08 {

  public static void main(String[] args) {
    System.out.println("This is our custom class");
    Employee harry = new Employee(); // Instantiating a new Employee Object
    Employee john = new Employee(); // Instantiating a new Employee Object

    // Setting Attributes for Harry
    harry.id = 12;
    harry.salary = 34;
    harry.name = "CodeWithHarry";

    // Setting Attributes for John
    john.id = 17;
    john.salary = 12;
    john.name = "John Khandelwal";

    // Printing the Attributes
    harry.printDetails();
    System.out.println(" and\nmy salary is " + harry.getSalary());
    
    john.printDetails();
    int salary = john.getSalary();
    System.out.println(" and\nmy salary is " + salary);
    // System.out.println(harry.id);
    // System.out.println(harry.name);

  }
}
