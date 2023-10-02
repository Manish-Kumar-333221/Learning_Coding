package com.Learning_Java;

import java.util.HashSet;
import java.util.Iterator;

public class Learning_Java_Chapter15_Part06 {

  public static void main(String[] args) {
    HashSet<Integer> hSet = new HashSet<Integer>();
    hSet.add(7);
    hSet.add(3);
    hSet.add(38);
    hSet.add(73);
    hSet.add(78);
    hSet.add(738);

    System.out.println(hSet);

    System.out.println(hSet.size());

    hSet.remove(73);

    System.out.println(hSet);

    System.out.println("hSet contains 3 ? " + hSet.contains(3));
    System.out.println("hSet contains 8 ? " + hSet.contains(8));

    Iterator<Integer> it = hSet.iterator();

    while (it.hasNext()) {
      System.out.println(it.next());
    }

    System.out.println();

    System.out.println(hSet.iterator().next());
    System.out.println(hSet.iterator().next());

    hSet.clear();

    System.out.println(hSet);
  }
}
