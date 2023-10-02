package com.Learning_Java.Rough_Work;

import java.util.Scanner;

public class Class_For_Rough_Work_Part02 {

  static String rename(int a) {
     return (a == 1) ? "Rock" : ((a == 2) ? "Paper" : "Scissor");
  }

  static void score(int User_score, int Computer_score, int Draw, int i) {
    String round = (i < 5) ? " (only in " + i + " rounds)." : ".";
    String result = "”You Won” the whole match";
    if (User_score < Computer_score) {
      result = "”Computer Won” the whole match";
    } else if (User_score == Computer_score) {
      result = "match is ”Draw”";
    }
    System.out.printf(
        "\nOverall result is %s%s\nYou      ≈ %d\nComputer ≈ %d\nDraw     ≈ %d",
        result, round, User_score, Computer_score, Draw);
  }

  public static void main(String[] args) throws InterruptedException {

    // Exercise 02
    Scanner sc = new Scanner(System.in);
    while (true) {

      int Computer_score = 0, User_score = 0, Draw = 0;
      System.out.println("Enter ~~⟩\nRock    ≈ 1\nPaper   ≈ 2\nScissor ≈ 3 (3 or more than 3)");

      for (int i = 1; i <= 5; i++) {

        System.out.println("\nRound " + i + "/5");
        int computer = (int) (Math.random() * 3) + 1;
        int user = sc.nextInt();
        String User_Choice = rename(user);
        String Comp_Choice = rename(computer); 
        System.out.printf("You      ≈ %s\nComputer ≈ %s\n", User_Choice, Comp_Choice);
        
        if (Comp_Choice == User_Choice) {
          System.out.println("It's Draw");
          Draw += 1;
        } else if ((Comp_Choice == "Rock" && User_Choice == "Scissor") || (Comp_Choice == "Paper" && User_Choice == "Rock") || (Comp_Choice == "Scissor" && User_Choice == "Paper")) {
          System.out.println("You lose!");
          Computer_score += 1;
        } else {
          System.out.println("You Win!");
          User_score += 1;
        }
        
        if ((i == 5) || (User_score == 3 || Computer_score == 3) || (Draw == 2 && (Computer_score == 2 || User_score == 2))) {
          Thread.sleep(1000);
          score(User_score, Computer_score, Draw, i);
          break;
        }
      }
      Thread.sleep(1500);
      System.out.println("\n\nDo You want to play again?\nYes ≈ 1\nNo  ≈ 2 (2 or more than 2)");
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
