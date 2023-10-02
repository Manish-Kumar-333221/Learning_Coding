package com.Learning_Java.Rough_Work;

import java.util.Scanner;
import java.util.HashMap;

class Bowling {
  HashMap<String, Integer> players;

  Bowling() {
    players = new HashMap<String, Integer>();
  }

  public void addPlayer(String name, int p) {
    players.put(name, p);
  }

  public void getWinner(int a) {

    String[] nameArr = new String[players.size()];
    players.keySet().toArray(nameArr);
    String arr = nameArr[0];
    for (int i = 1; i < a; i++) {
      if (players.get(arr) < players.get(nameArr[i])) {
        arr = nameArr[i];
      }
    }
    System.out.println(arr);
  }
}

public class Class_For_Rough_Work_Part08 {

  public static void main(String[] args) {

    Bowling game = new Bowling();
    Scanner s = new Scanner(System.in);
    Scanner sc = new Scanner(System.in);
    System.out.println("How much data do you want to store: ");
    int a = s.nextInt();
    for (int i = 1; i <= a; i++) {
      System.out.println("Enter the value: ");
      String input = sc.nextLine();
      String[] values = input.split(" ");
      String name = values[0];
      int points = Integer.parseInt(values[1]);

      game.addPlayer(name, points);
    }
    game.getWinner(a);
    s.close();
    sc.close();
  }
}
