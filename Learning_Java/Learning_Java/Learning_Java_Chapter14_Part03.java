package com.Learning_Java;

import java.util.Scanner;
import java.util.InputMismatchException;

public class Learning_Java_Chapter14_Part03 {

  public static void main(String[] args) {
    Scanner sc = new Scanner(System.in);

    int[] array = {14, 28, 42};

    System.out.print("Enter the index of the array: ");
    int ind = sc.nextInt();
    System.out.print("Enter the number to divide with the value at array index: ");
    int num = sc.nextInt();
    try {
      System.out.println("Value of array-index / number = " + array[ind] / num);
    } catch (ArrayIndexOutOfBoundsException e) {
      System.out.println("ArrayIndexOutOfBoundsException Occurred.");
    } catch (ArithmeticException e) {
      System.out.println("ArithmeticException Occurred.");
    } catch (Exception e) {
      System.out.println("Some Other Exception Occured. " + e);
    }

    int index, number;
    try {
      System.out.print("Enter the index of the array: ");
      index = sc.nextInt();
      System.out.print("Enter the number to divide with the value at array index: ");
      number = sc.nextInt();
      System.out.println("Value of array-index / number = " + array[index] / number);
    } catch (ArrayIndexOutOfBoundsException e) {
      System.out.println("ArrayIndexOutOfBoundsException Occurred.");
    } catch (ArithmeticException e) {
      System.out.println("ArithmeticException Occurred.");
    } catch (InputMismatchException e) {
      System.out.println("InputMismatchException Occurred.");
    } catch (Exception e) {
      System.out.println("Some Other Exception Occured.\n" + e);
    }
    sc.close();
  }
}
