package Another;

class Another1 {
  public Another1() {
    Learning_Java.Learning_Java_Chapter12_Part07_01 New =
        new Learning_Java.Learning_Java_Chapter12_Part07_01();
    System.out.println("The value of w is: " + New.w);
    // System.out.println("The value of x is: " + New.x); // cannot access protected member in
    // World.
    // System.out.println("The value of y is: " + New.y); // Cannot access default member in
    // different package.
    // System.out.println("The value of z is: " + New.z); // Cannot access private member in same or
    // in different package.
    System.out.println("\n\n");

    New.meth1();
  }
}

public class Learning_Java_Chapter12_Part08_04 {

  public static void main(String[] args) {
    Another1 Another1 = new Another1();

    Learning_Java.Learning_Java_Chapter12_Part07_01 New =
        new Learning_Java.Learning_Java_Chapter12_Part07_01();
    System.out.println("The value of w is: " + New.w);
    // System.out.println("The value of x is: " + New.x); // cannot access protected member in World.
    // System.out.println("The value of y is: " + New.y); // Cannot access default member in different package.
    // System.out.println("The value of z is: " + New.z); // Cannot access private member in same or in different package.
    System.out.println("\n\n");

    New.meth1();
  }
}
