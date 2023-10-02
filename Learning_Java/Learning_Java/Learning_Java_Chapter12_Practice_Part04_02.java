package Nothing2;

class c1 extends Nothing1.Learning_Java_Chapter12_Practice_Part04_01 {
  void problem4() {
    System.out.println("The value of proInt is: " + proInt);
    // System.out.println("The value of defInt is: " + defInt); // You cannot access default argument in SubClass
  }
}

public class Learning_Java_Chapter12_Practice_Part04_02 {

  public static void main(String[] args) {
    c1 c = new c1();
    c.problem4();
  }
}
