package Learning_Java;

class c1 {
  public int w = 761;
  protected int x = 569;
  int y = 952;
  private int z = 865;

  public void meth1() {
    System.out.println("Values from same package in same class (CLASS)");
    System.out.println("The value of w is: " + w);
    System.out.println("The value of x is: " + x);
    System.out.println("The value of y is: " + y);
    System.out.println("The value of z is: " + z);
    System.out.println("\n\n");
  }
}

public class Learning_Java_Chapter12_Part07_01 {
  public int w = 5;
  protected int x = 45;
  int y = 6;
  private int z = 78;

  public void meth1() {
    System.out.println("Values from same package in same class (CLASS)");
    System.out.println("The value of w is: " + w);
    System.out.println("The value of x is: " + x);
    System.out.println("The value of y is: " + y);
    System.out.println("The value of z is: " + z);
    System.out.println("\n\n");
  }

  public static void main(String[] args) {

    Learning_Java_Chapter12_Part07_01 a = new Learning_Java_Chapter12_Part07_01();
    a.meth1();
    System.out.println("Values from same package in same class  (CLASS)");
    System.out.println("The value of w is: " + a.w);
    System.out.println("The value of x is: " + a.x);
    System.out.println("The value of y is: " + a.y);
    System.out.println("The value of z is: " + a.z); // Cannot access private member in same package.
    System.out.println("\n\n");

    c1 b = new c1();
    b.meth1();
    System.out.println("Values from same package in different class (PACKAGE)");
    System.out.println("The value of w is: " + b.w);
    System.out.println("The value of x is: " + b.x);
    System.out.println("The value of y is: " + b.y);
    // System.out.println("The value of z is: " + b.z); // Cannot access private member in same package.
    System.out.println("\n\n");
  }
}
