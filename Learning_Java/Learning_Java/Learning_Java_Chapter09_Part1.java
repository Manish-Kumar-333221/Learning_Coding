package com.Learning_Java;

class MyEmployee {
  private int id;
  private String name;

  public void setId(int i) {
    this.id = i;
  }

  public void setName(String n) {
    this.name = n;
  }

  public String getName() {
    return name;
  }

  public int getId() {
    return id;
  }
}

public class Learning_Java_Chapter09_Part1 {

  public static void main(String[] args) {
    MyEmployee harry = new MyEmployee();
    // harry.id = 45;
    // harry.name = "CodeWithHarry"; --> Throws an error due to private access modifier
    harry.setId(234);
    harry.setName("CodeWithHarry");
    System.out.println(harry.getName());
    System.out.println(harry.getId());
  }
}
