package com.Learning_Java;

import java.util.List;
import java.util.ArrayList;
import java.util.LinkedList;

public class Learning_Java_Chapter15_Part04 {

  public static void main(String[] args) {
    List<Integer> l1 = new ArrayList<Integer>();
    l1.add(82);
    l1.add(56);
    l1.add(48);
    l1.add(13);
    System.out.println(l1);

    List<Integer> l2 = new LinkedList<Integer>();
    l2.add(36);
    l2.add(98);
    l2.add(15);
    l2.add(65);
    l2.add(59);
    System.out.println(l2);
  }
}
