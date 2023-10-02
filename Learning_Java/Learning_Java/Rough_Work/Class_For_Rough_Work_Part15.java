package com.Learning_Java.Rough_Work;

import java.util.Arrays;

class BlockChainAlgorithm {

  private int previousHashCode;
  private String[] transaction;
  private int currentHashCode;

  BlockChainAlgorithm(int previousHashCode, String[] transaction) {
    this.previousHashCode = previousHashCode;
    this.transaction = transaction;

    Object[] contens = {previousHashCode, Arrays.hashCode(transaction)};
    this.currentHashCode = Arrays.hashCode(contens);
  }

  int getPreviousHashCode() {
    return previousHashCode;
  }

  int getCurrentHashCode() {
    return currentHashCode;
  }

  String[] gettransaction() {
    return transaction;
  }
}

public class Class_For_Rough_Work_Part15 {

  public static void main(String[] args) {
    String printP = "Previous Hash Code is: ";
    String printC = "Current  Hash Code is: ";

    String[] a = {"First transaction"};
    BlockChainAlgorithm a1 = new BlockChainAlgorithm(0, a);
    System.out.print("A1 " + printP);
    System.out.println(a1.getPreviousHashCode());
    System.out.print("A1 " + printC);
    System.out.println(a1.getCurrentHashCode());

    String[] b = {"Second transaction"};
    BlockChainAlgorithm b1 = new BlockChainAlgorithm(a1.getCurrentHashCode(), b);
    System.out.print("B1 " + printP);
    System.out.println(b1.getPreviousHashCode());
    System.out.print("B1 " + printC);
    System.out.println(b1.getCurrentHashCode());

    String[] c = {"Third transaction"};
    BlockChainAlgorithm c1 = new BlockChainAlgorithm(b1.getCurrentHashCode(), c);
    System.out.print("C1 " + printP);
    System.out.println(c1.getPreviousHashCode());
    System.out.print("C1 " + printC);
    System.out.println(c1.getCurrentHashCode());

    String[] d = {"Fourth transaction"};
    BlockChainAlgorithm d1 = new BlockChainAlgorithm(c1.getCurrentHashCode(), d);
    System.out.print("D1 " + printP);
    System.out.println(d1.getPreviousHashCode());
    System.out.print("D1 " + printC);
    System.out.println(d1.getCurrentHashCode());
  }
}
