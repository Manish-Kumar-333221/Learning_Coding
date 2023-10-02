package com.Learning_Java;

import java.util.LinkedList;

public class Learning_Java_Chapter15_Part02 {

  public static void main(String[] args) {
    LinkedList<Integer> a1 = new LinkedList<Integer>();

    System.out.println("adding 57 in the linkedlist: " + a1.add(57));
    a1.add(38);
    a1.add(97);
    a1.add(26);
    a1.add(28);
    a1.add(0, 86);
    a1.add(0, 69);
    System.out.println("adding 48 at the first position in the linkedlist: ");
    a1.addFirst(48);
    System.out.println("adding 38 at the last position in the linkedlist: ");
    a1.addLast(38);
    System.out.println("adding 64 at the first position in the linkedlist: " + a1.offer(64));
    System.out.println("adding 99 at the first position in the linkedlist: " + a1.offerFirst(99));
    System.out.println("adding 96 at the last position in the linkedlist: " + a1.offerLast(96));

    System.out.print("\nValues in linkedlist a1 are: ");
    for (int item : a1) {
      System.out.print(item + ", ");
    }

    System.out.println("\n\nSize Of LinkedList a1 is: " + a1.size() + "\n");

    LinkedList<Integer> a2 = new LinkedList<Integer>();
    a2.add(679);
    a2.add(865);
    a2.add(258);
    a2.add(579);
    a2.add(688);
    a2.add(0, 368);
    a2.add(3, 489);
    a2.addFirst(580);
    a2.addLast(170);
    a2.offer(699);
    a2.offerFirst(269);
    a2.offerLast(690);

    System.out.println("Values in linkedlist a2 are: " + a2 + "\n");

    System.out.println("Size Of LinkedList a2 is: " + a1.size() + "\n");

    System.out.println(
        "adding all the elements of linkedlist a2 in linkedlist a1: " + a1.addAll(a2) + "\n");

    System.out.println("Values in linkedlist a1 are: " + a1 + "\n");

    System.out.println("Size Of LinkedList a1 is: " + a1.size() + "\n");

    System.out.println("pushing element 69 in the linkedlist: ");
    a1.push(69);
    System.out.println(a1 + "\n");

    System.out.println("Value at 0th index is: " + a1.get(0) + "\n");

    System.out.println("Value at first position is: " + a1.element() + "\n");

    System.out.println("setting value 57 at index 0: " + a1.set(0, 57) + "\n" + a1 + "\n");

    System.out.println("Value at peek is: " + a1.peek() + "\n");

    System.out.println("Value at first is: " + a1.getFirst() + "\n");

    System.out.println("Value at last is: " + a1.getLast() + "\n");

    System.out.println("a1 contains 57: " + a1.contains(57));
    System.out.println("a1 contains 47: " + a1.contains(47) + "\n");

    System.out.println(a1 + "\n");

    System.out.println("index of 57 in linkedlist is: " + a1.indexOf(57) + "\n");

    System.out.println("index of 57 in linkedlist from last is: " + a1.lastIndexOf(57) + "\n");

    System.out.println("hashCode of linkedlist a1 is: " + a1.hashCode() + "\n");

    System.out.println("is linkedlist is empty?: " + a1.isEmpty() + "\n");

    System.out.println(a1 + "\n");

    System.out.println("removing first element from the linked list: " + a1.remove());
    System.out.println(a1 + "\n");

    System.out.println("removing 0th element from the linked list: " + a1.remove(0));
    System.out.println(a1 + "\n");

    System.out.println("removing first element from the linked list: " + a1.removeFirst());
    System.out.println(a1 + "\n");

    System.out.println("removing last element from the linked list: " + a1.removeLast());
    System.out.println(a1 + "\n");

    System.out.println("removing all the element of a2 in a1: " + a1.removeAll(a2));
    System.out.println(a1 + "\n");

    System.out.println("polling from the linkedlist: " + a1.poll());
    System.out.println(a1 + "\n");

    System.out.println("polling first element from the linkedlist: " + a1.pollFirst());
    System.out.println(a1 + "\n");

    System.out.println("polling last element from the linkedlist: " + a1.pollLast());
    System.out.println(a1 + "\n");

    System.out.println("pop from the linkedlist: " + a1.pop());
    System.out.println(a1 + "\n");

    System.out.println("Clearing the linkedlist");
    a1.clear();

    try {
      System.out.println("polling last element from the linkedlist: " + a1.pollFirst());
    } catch (Exception e) {
      System.out.println(e);
    }

    try {
      System.out.println("polling from the linkedlist: " + a1.poll());
    } catch (Exception e) {
      System.out.println(e);
    }

    try {
      System.out.println("Value at peek is: " + a1.peek() + "\n");
    } catch (Exception e) {
      System.out.println(e);
    }

    try {
      System.out.println(a1.getFirst());
    } catch (Exception e) {
      System.out.println(e);
    }

    System.out.println("\nSize Of LinkedList a1 is " + a1.size());
  }
}
