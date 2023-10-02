package com.Learning_Java.Rough_Work;

import java.util.Map;
import java.util.HashMap;
import java.util.Scanner;
// import java.util.stream.Stream;
// import java.util.Collection;
import java.util.Collections;

class Bowling_New {
  HashMap<String, Integer> players;

  Bowling_New() {
    players = new HashMap<String, Integer>();
  }

  public void addPlayer(String name, int p) {
    players.put(name, p);
  }

  /*
  public void getWinner() {
    System.out.println(players.entrySet().stream().max((entry1, entry2) -> entry1.getValue() > entry2.getValue() ? 1 : -1).get().getKey());
  }
  */

  public void getWinner() {
    int maximum = Collections.max(players.values());
    String maxPlayer = " ";
    for (Map.Entry<String, Integer> entry : players.entrySet()) {
      if ((int) entry.getValue() == maximum) {
        maxPlayer = (String) entry.getKey();
      }
    }
    System.out.println(maxPlayer + " " + maximum);
  }
}

public class Class_For_Rough_Work_Part28 {

  public static void main(String[] args) {
    Bowling_New game = new Bowling_New();
    Scanner sc = new Scanner(System.in);

    for (int i = 0; i < 3; i++) {
      System.out.println("Enter the Value: ");
      String input = sc.nextLine();
      String[] values = input.split(" ");
      String name = values[0];
      int points = Integer.parseInt(values[1]);
      game.addPlayer(name, points);
    }
    game.getWinner();
    sc.close();
  }
}
