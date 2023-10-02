package com.Learning_Java;

public class Learning_Java_Chapter05_Part2 {

  public static void main(String[] args) {

    // Break and continue using loops!
    for (int i = 0; i < 50; i++) {
      System.out.println(i + "  Java is great");
      if (i == 2) {
        System.out.println("Ending the loop");
        break;
      }
    }

    System.out.println("-------------");

    int i = 0;
    do {
      System.out.println(i + "  Java is great");
      if (i == 2) {
        System.out.println("Ending the loop");
        break;
      }
      i++;
    } while (i < 5);
    System.out.println("Loop ends here");

    System.out.println("-------------");

    for (int j = 0; j <= 5; j++) {
      if (j == 2) {
        System.out.println("Ending the loop");
        continue;
      }
      System.out.println(j + "  Java is great");
    }

    System.out.println("-------------");

    int k = 0;
    do {
      k++;
      if (k == 2) {
        System.out.println("Ending the loop");
        continue;
      }
      System.out.println(k + "  Java is great");

    } while (k < 5);
    System.out.println("Loop ends here");
  }
}
