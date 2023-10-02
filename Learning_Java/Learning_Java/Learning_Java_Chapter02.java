package com.Learning_Java;

public class Learning_Java_Chapter02 {

  public static void main(String[] args) {

    // 1. Arithmetic Operators
    int a = 4;
    int b = 6;
    System.out.printf("%d %% %d = %d\n", b, a, b % a);
    System.out.println("-------------");
    // Modulo Operator
    // 4.8%1.1 --> Returns Decimal Remainder

    // 2. Assignment Operators
    int c = 9;
    int c1 = 3;
    System.out.printf("%d * %d = %d\n", c, c1, c * c1);
    System.out.println("-------------");

    // 3. Comparison Operators
    System.out.println("64 < 6: " + (64 < 6));
    System.out.println("-------------");

    // 4. Logical Operators
    System.out.println("64 > 5 and 64 > 98: " + (64 > 5 && 64 > 98));
    System.out.println("-------------");
    System.out.println("64 > 5 or 64 > 98: " + (64 > 98 || 64 > 5));
    System.out.println("-------------");

    // 5. Bitwise Operators
    System.out.println(2 & 3);
    System.out.println("-------------");
    //        10110110
    //        11101101
    //        --------
    //        10100100

    // Precedence & Associativity
    int d = 6 * 5 - 34 / 2;
    /*
    Highest precedence goes to * and /. Then they are 
  evaluated on the basis of left to right associativity
    =30-34/2
    =30-17
    =13
    */
    System.out.println(d);
    System.out.println("-------------");

    int d1 = ((6 * 5) - 34) / 2; // Through BOD-MAS of mathematics
    System.out.println(d1);
    System.out.println("-------------");

    int e = 60 / 5 - 34 * 2;
    /*
    = 12-34*2
    =12-68
    =-56
    */
    System.out.println(e);
    System.out.println("-------------");

    float e1 = 60f / (5 - (34 * 2f)); // <-----Through BOD-MAS of mathematics.
    System.out.println(e1);
    System.out.println("-------------");

    // Quick Quiz 01
    int x = 28;
    int y = 56;
    int eqn = (x - y) / 2;
    System.out.println(eqn);
    System.out.println("-------------");

    // Quick Quiz 02
    float A = 3;
    float B = 4;
    float C = 5;
    float eqn1 = ((B * B) - (4 * A * C)) / (2 * A);
    System.out.println(eqn1);
    System.out.println("-------------");

    // Quick Quiz 03
    float v = 2f;
    float u = 4f;
    float a1 = 6f;
    float s = 8f;
    float h = ((v * v) - (u * u)) / (2 * a1 * s);
    System.out.println(h);
    System.out.println("-------------");

    // Quick Quiz 04
    int a2 = 7;
    int b1 = 6;
    int d3 = 4;
    System.out.println(a2 * b1 - d3);
    System.out.println("-------------");

    // Quick Quiz 05
    int a3 = 10;
    System.out.println(a3++);
    System.out.println(++a3);
    System.out.println("-------------");

    // Quick Quiz 06
    int y1 = 7;
    int x1 = ++y1 + 8;
    System.out.println(x1);
    System.out.println("-------------");

    // Quick Quiz 06
    char a4 = 'A';
    System.out.println(++a4);
    System.out.println("-------------");
  }
}
