package com.Learning_Java;

import java.util.ArrayDeque;

public class Learning_Java_Chapter15_Part03 {

  public static void main(String[] args) {
    ArrayDeque<Integer> a1 = new ArrayDeque<Integer>();
    System.out.println("adding 57 in the ArrayDeque: " + a1.add(57));
    a1.add(38);
    a1.add(97);
    a1.add(26);
    a1.add(28);
    System.out.println("adding 48 at the first position in the ArrayDeque: ");
    a1.addFirst(48);
    System.out.println("adding 38 at the last position in the ArrayDeque: ");
    a1.addLast(38);
    System.out.println("adding 64 at the first position in the ArrayDeque: " + a1.offer(64));
    System.out.println("adding 99 at the first position in the ArrayDeque: " + a1.offerFirst(99));
    System.out.println("adding 96 at the last position in the ArrayDeque: " + a1.offerLast(96));

    System.out.print("\nValues in ArrayDeque a1 are: ");
    for (int item : a1) {
      System.out.print(item + ", ");
    }

    System.out.println("\n\nSize Of ArrayDeque a1 is: " + a1.size() + "\n");

    ArrayDeque<Integer> a2 = new ArrayDeque<Integer>();
    a2.add(679);
    a2.add(865);
    a2.add(258);
    a2.add(579);
    a2.add(688);
    a2.addFirst(580);
    a2.addLast(170);
    a2.offer(699);
    a2.offerFirst(269);
    a2.offerLast(690);

    System.out.println("Values in ArrayDeque a2 are: " + a2 + "\n");

    System.out.println("Size Of ArrayDeque a2 is: " + a1.size() + "\n");

    System.out.println(
        "adding all the elements of ArrayDeque a2 in ArrayDeque a1: " + a1.addAll(a2) + "\n");

    System.out.println("Values in ArrayDeque a1 are: " + a1 + "\n");

    System.out.println("Size Of ArrayDeque a1 is: " + a1.size() + "\n");

    System.out.println("pushing element 69 in the ArrayDeque: ");
    a1.push(69);
    System.out.println(a1 + "\n");

    System.out.println("Value at first position is: " + a1.element() + "\n");

    System.out.println("Value at peek is: " + a1.peek() + "\n");

    System.out.println("Value at first is: " + a1.getFirst() + "\n");

    System.out.println("Value at last is: " + a1.getLast() + "\n");

    System.out.println("a1 contains 57: " + a1.contains(57));
    System.out.println("a1 contains 47: " + a1.contains(47) + "\n");

    System.out.println(a1 + "\n");

    System.out.println("hashCode of ArrayDeque a1 is: " + a1.hashCode() + "\n");

    System.out.println("is ArrayDeque is empty?: " + a1.isEmpty() + "\n");

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

    System.out.println("polling from the ArrayDeque: " + a1.poll());
    System.out.println(a1 + "\n");

    System.out.println("polling first element from the ArrayDeque: " + a1.pollFirst());
    System.out.println(a1 + "\n");

    System.out.println("polling last element from the ArrayDeque: " + a1.pollLast());
    System.out.println(a1 + "\n");

    System.out.println("pop from the ArrayDeque: " + a1.pop());
    System.out.println(a1 + "\n");

    System.out.println("Clearing the ArrayDeque");
    a1.clear();

    System.out.println("\nSize Of ArrayDeque a1 is " + a1.size());
  }
}
