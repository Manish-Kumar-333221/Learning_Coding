package com.Learning_Java;

import java.util.Scanner;

public class Learning_Java_Chapter02_Exercise_Part02 {

  static String rename(int a) {
    return (a == 1) ? "Rock" : ((a == 2) ? "Paper" : "Scissor");
  }

  static void score(int User_score, int Computer_score, int Draw, int i) {
    String round = (i < 5) ? " (only in " + i + " rounds)." : ".";
    String result = "”You Won” the whole match";
    if (User_score < Computer_score) {
      result = result.replace("You", "Computer");
    } else if (User_score == Computer_score) {
      result = "match is ”Draw”";
    }
    System.out.printf(
        "\nOverall result is %s%s\nYou      ≈ %d\nComputer ≈ %d\nDraw\t    ≈ %d",
        result, round, User_score, Computer_score, Draw);
  }

  public static void main(String[] args) throws InterruptedException {

    // Exercise 02
    Scanner sc = new Scanner(System.in);
    wh:
    while (true) {

      int Computer_score = 0, User_score = 0, Draw = 0;
      System.out.println("Enter ~~⟩\nRock    ≈ 1\nPaper   ≈ 2\nScissor ≈ 3 (3 or more than 3");

      for (int i = 1; i <= 5; i++) {

        System.out.println("\nRound " + i + "/5");
        int computer = (int) (Math.random() * 3) + 1;
        int user = sc.nextInt();
        System.out.printf("You      ≈ %s\nComputer ≈ %s\n", rename(user), rename(computer));

        if (rename(computer) == rename(user)) {
          System.out.println("It's Draw");
          Draw++;
        } else if ((computer == 1 && user == 3)
            || (computer == 2 && user == 1)
            || (computer == 3 && user == 2)) {
          System.out.println("You lose!");
          Computer_score++;
        } else {
          System.out.println("You Win!");
          User_score++;
        }

        if ((User_score == 3 || Computer_score == 3)
            || (Draw == 2 && (Computer_score == 2 || User_score == 2))
            || (i == 5)) {
          Thread.sleep(1000);
          score(User_score, Computer_score, Draw, i);
          break;
        }
      }
      Thread.sleep(1500);
      System.out.println("\n\nDo You want to play again?\nYes ≈ 1\nNo  ≈ 2 (or any number)");
      int play = sc.nextInt();
      if (play != 1) {
        Thread.sleep(500);
        System.out.println("\nYou Quite the Game.\n Thanks For Playing");
        break;
      }
    }
    sc.close();
  }
}
