package com.Learning_Java;

import java.util.ArrayList;

public class Learning_Java_Chapter15_Part01 {

  public static void main(String[] args) {
    ArrayList<Integer> a1 = new ArrayList<Integer>();
    a1.add(57);
    a1.add(38);
    a1.add(97);
    a1.add(26);
    a1.add(28);
    a1.add(0, 86);
    a1.add(0, 69);

    ArrayList<Integer> a2 = new ArrayList<Integer>(4);
    a2.add(679);
    a2.add(865);
    a2.add(258);
    a2.add(579);
    a2.add(688);
    a2.add(0, 368);
    a2.add(3, 489);

    a1.addAll(a2);

    for (int item : a1) {
      System.out.print(item + ", ");
    }
    System.out.println("\n\nSize Of ArrayList a1 is " + a1.size());

    System.out.println("a1 contains 57: " + a1.contains(57));
    System.out.println("a1 contains 47: " + a1.contains(47));

    System.out.println(a1.remove(0));
    System.out.println(a1);

    System.out.println(a1.removeAll(a2));
    System.out.println(a1);

    a1.set(0, 57);
    System.out.println(a1);

    System.out.println(a1.isEmpty());

    System.out.println(a1.indexOf(57));

    System.out.println(a1.lastIndexOf(57));

    System.out.println(a1.hashCode());

    a1.trimToSize();

    System.out.println(a1);

    System.out.println(a1.get(0));

    a1.clear();
    
    System.out.println("\nSize Of ArrayList a1 is " + a1.size());
  }
}
