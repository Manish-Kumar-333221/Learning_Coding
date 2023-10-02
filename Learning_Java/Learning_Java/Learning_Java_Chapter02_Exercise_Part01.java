package com.Learning_Java;

import java.util.Scanner;

public class Learning_Java_Chapter02_Exercise_Part01 {

  public static void main(String[] args) {

    // Exercise 02
    while (true) {
      Scanner sc = new Scanner(System.in);
      System.out.println("Enter \n1 = rock \n2 = paper \n3 = scissor");
      int user_score = 0;
      int comp_score = 0;
      int draw = 0;

      for (int i = 1; i <= 5; i++) {
        int comp = (int) (Math.random() * 3) + 1;
        String Computer;
        // variable = (condition) ? expressionTrue :  expressionFalse;
        Computer = (comp == 1) ? "rock" : ((comp == 2) ? "paper" : "scissor");

        System.out.println("\nRound 0" + i);
        int user = sc.nextInt();
        String User;
        // variable = (condition) ? expressionTrue :  expressionFalse;
        User = (user == 1) ? "rock" : ((user == 2) ? "paper" : "scissor");

        System.out.printf("You      = %s\nComputer = %s\n", User, Computer);
        if (comp == user) {
          System.out.println("It's Draw");
          draw = draw + 1;
        } else if ((user == 1 && comp == 3)
            || (user == 2 && comp == 1)
            || (user == 3 && comp == 2)) {
          System.out.println("You win!");
          user_score = user_score + 1;
        } else {
          System.out.println("You lose!");
          comp_score = comp_score + 1;
        }

        if (i == 5) {
          String result = "\nOverall result is ”You Won” the whole match.";
          if (user_score < comp_score) {
            result = result.replace("You", "Computer");
          } else {
            result = result.replace("”You Won” the whole match", "match is ”Draw”");
          }
           System.out.printf(result + "\nYou      = %d\nComputer = %d\nDraw     = %d", user_score, comp_score, draw);
        }
      }
      System.out.println("\n\nDo you want to play again? \nYes = 1 \nNo  = 2");
      int play = sc.nextInt();
      sc.close();
      if (play != 1) {
        System.out.println("You Quite the game!");
        break;
      }
    }
  }
}