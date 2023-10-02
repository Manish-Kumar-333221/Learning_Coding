package com.Learning_Java;

import java.util.Scanner;

import static java.lang.Thread.sleep;

class Game {
  public String name;
  public int Random_Number;
  public int User_Input;
  public int No_Of_Guesses;
  public boolean isCorrect = true;
  static String name_High_Score = "";
  static int high_score = 0;

  public Game() {
    this.Random_Number = (int) (Math.random() * 100) + 1;
  }

  public void take_User_Name(){
    Scanner user_Name = new Scanner(System.in);
    System.out.print("Enter Your Name: ");
    this.name = user_Name.nextLine();
    System.out.println("(Guess the number between 1 to 100)\n");
  }

  public void takeUserInput() {
    No_Of_Guesses++;
    if (No_Of_Guesses <= 10) {
      Scanner sc = new Scanner(System.in);
      System.out.printf("Round %d/10\nGuess the number\n", No_Of_Guesses);
      this.User_Input = sc.nextInt();
      isCorrectNumber();
    } else {
      System.out.printf(
          "\nYou lose!\n  The correct number is %d\n    Your Score is: 0\n", this.Random_Number);
      this.isCorrect = false;
    }
  }

  public void isCorrectNumber() {
    if (User_Input == Random_Number) {
      int score = (100 - ((this.No_Of_Guesses * 10) - 10));
      System.out.printf(
          "You Guessed the number,it was %d\nYou Guess it in %d attempts.\nYour Score is: %d\n",
          this.Random_Number, this.No_Of_Guesses, score);
      if (score > high_score) {
        name_High_Score = name;
        high_score = score;
      }

      this.isCorrect = false;
    } else if (User_Input < Random_Number) {
      System.out.println("too low...\n");
    } else {
      System.out.println("too high...\n");
    }
  }
}

public class Learning_Java_Chapter03_Exercise {

  public static void main(String[] args) throws InterruptedException {
    /*
    Create a class Game, which allows a user to play
    "Guess the Number" game.

    • Game should have the following methods:
    • Constructor to generate the random number.
    • takeUserInput() to take a user input of number.
    • isCorrectNumber() to detect whether the number
      entered by the user is true or not.
    • if the no. entered by the user is not correct then print
      the number is lower or higher than the computer number.
    • Etc.

    Use properties such as noOfGuesses(int), etc. to get
    this task done!
    */

    while (true) {
      Game game = new Game();
      game.take_User_Name();
      while (game.isCorrect) {
        game.takeUserInput();
      }
      System.out.printf("\n\"%S\" has high scored of \"%d\".\n", Game.name_High_Score, Game.high_score);
      sleep(1500);
      System.out.println("\nDo you want to play again? \nYes = 1 \nNo  = 2");
      Scanner user = new Scanner(System.in);
      int play = user.nextInt();
      if (play != 1) {
        System.out.print("You Quite the game!.\n\tThanks for playing\n");
        break;
      }
    }
  }
}
