package com.Learning_Java;

import java.util.Scanner;

public class Learning_Java_Chapter01 {

  public static void main(String[] args) {

    Scanner sc = new Scanner(System.in);

    // Adding the Non-decimal No.(From -128 to 127)
    byte num1 = 56;
    byte num2 = 66;
    int sum1 = num1 + num2;
    System.out.printf("The sum of these numbers is: %d \n", sum1);
    System.out.println("-----------------------");

    // Adding the Non-decimal No.(From -32768 to 32767)
    short num3 = 4684;
    short num4 = 5248;
    int sum2 = num3 + num4;
    System.out.printf("The sum of these numbers is: %d \n", sum2);
    System.out.println("-----------------------");

    // Adding the Non-decimal No.(From -2147483648 to 2147483647)
    int num5 = 28168455;
    int num6 = -8268425;
    int sum3 = num5 + num6;
    System.out.printf("The sum of these numbers is: %d \n", sum3);
    System.out.println("-----------------------");

    // Adding the Non-decimal No.(From -9223372036854775808  to 9223372036854775807)
    long num7 = 9223372036854775807L;
    long num8 = -426828452L;
    long sum4 = num7 + num8;
    System.out.printf("The sum of these numbers is: %d \n", sum4);
    System.out.println("-----------------------");

    // Adding the Decimal No.
    float num9 = 525453842.6865f;
    float num10 = -455545354.5756f;
    float sum5 = num9 + num10;
    System.out.printf("The sum of these numbers is: %f \n", sum5);
    System.out.println("-----------------------");

    // Adding the Decimal No.
    double num11 = 55982.556;
    double num12 = 45328.83;
    double sum6 = num11 + num12;
    System.out.printf("The sum of these numbers is: %f \n", sum6);
    System.out.println("-----------------------");
    
    char ch = 'A';
    System.out.println(ch);
    ch++;
    System.out.println(ch);
    System.out.println("-----------------------");

    System.out.print("Enter Your name: ");
    String num13 = sc.nextLine();
    System.out.printf("Hello, %s! \nHELLO, %S! \n", num13, num13);
    System.out.println("-----------------------");

    int a, b, c;
    a = 5;
    b = 6;
    c = 7;
    System.out.println(a + " + " + b + " + " + c + " = " + (a + b + c));
    System.out.println("-----------------------");

    int a1 = 5, b1 = 6, c1 = 7;
    System.out.println(a1 + " " + b1 + " " + c1);
    System.out.println("-----------------------");

    // Quick Quiz 01
    int one = 6;
    int two = 8;
    int three = 37;
    System.out.printf("%d + %d + %d = %d\n", one, two, three, one + two + three);
    System.out.println("-------------");
    sc.close();
  }
}
