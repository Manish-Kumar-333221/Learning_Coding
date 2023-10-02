package com.Learning_Java;

class Candy {
  Candy() {
    System.out.println("Candy is made");
  }

  int id;
  String name;

  Candy(int i, String n) {
    id = i;
    name = n;
  }

  void display() {
    System.out.println(id + " " + name);
  }
}

class MyMainEmployee {
  private int id;
  private String name;

  MyMainEmployee() {
    id = 0;
    name = "Your-Name-Here";
  }

  MyMainEmployee(String myName, int myId) {
    id = myId;
    name = myName;
  }

  MyMainEmployee(String myName) {
    id = 1;
    name = myName;
  }

  public void setName(String n) {
    this.name = n;
  }

  public String getName() {
    return name;
  }

  public void setId(int i) {
    this.id = i;
  }

  public int getId() {
    return id;
  }
}

public class Learning_Java_Chapter09_Part2 {

  public static void main(String[] args) {

    Candy candy = new Candy();
    Candy s1 = new Candy(1, "Harry");
    // calling constructor
    Candy s2 = new Candy(2, "CodeWithHarry");
    s1.display();
    s2.display();

    System.out.println();

    MyMainEmployee harry_code = new MyMainEmployee();
    System.out.println(harry_code.getId());
    System.out.println(harry_code.getName());

    System.out.println();

    MyMainEmployee code_with_harry = new MyMainEmployee("CodeWithHarry");
    System.out.println(code_with_harry.getId());
    System.out.println(code_with_harry.getName());

    System.out.println();

    MyMainEmployee code_harry = new MyMainEmployee("ProgrammingWithHarry", 12);

    System.out.println(code_harry.getId());
    System.out.println(code_harry.getName());

    System.out.println();

    harry_code.setName("Harry's code");
    harry_code.setId(34);
    System.out.println(harry_code.getId());
    System.out.println(harry_code.getName());

    System.out.println();

    code_with_harry.setName("CodeWithHarry");
    code_with_harry.setId(59);
    System.out.println(code_with_harry.getId());
    System.out.println(code_with_harry.getName());

    System.out.println();

    code_harry.setName("ProgrammingWithHarry");
    code_harry.setId(54);
    System.out.println(code_harry.getId());
    System.out.println(code_harry.getName());
  }
}
