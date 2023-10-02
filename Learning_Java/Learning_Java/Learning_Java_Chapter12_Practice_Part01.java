package calc;

class Calculator {
  public void calculate(int a, int b) {
    System.out.println("Your result is: " + (a + b));
  }
}

class ScCalculator {
  public void calculate(int a, int b) {
    System.out.println("Your result is: " + Math.sin(a + b));
  }
}

class HyCalculator {
  public void calculate(int a, int b) {
    System.out.println("Your result is: " + (a + b));
    System.out.println("Your result is: " + Math.sin(a + b));
  }
}

public class Learning_Java_Chapter12_Practice_Part01 {

  public static void main(String[] args) {
    System.out.println("I am main method!");
    Calculator Cal = new Calculator();
    Cal.calculate(5, 7);

    ScCalculator ScCal = new ScCalculator();
    ScCal.calculate(60, 30);

    HyCalculator HyCal = new HyCalculator();
    HyCal.calculate(90, 90);
  }
}
