package com.Learning_Java;

import java.util.Hashtable;
import java.util.Enumeration;
// import java.util.Iterator;
import java.util.Map;

public class Learning_Java_Chapter15_Part08 {

  public static void main(String[] args) {
    Hashtable<Integer, String> hTable = new Hashtable<Integer, String>();
    hTable.put(1, "Hello");
    hTable.put(2, "Java");
    hTable.put(3, "Good");
    hTable.put(4, "Morning");

    System.out.println(hTable);

    Enumeration<Integer> e = hTable.keys();
    while (e.hasMoreElements()) {
      System.out.print(e.nextElement() + ", ");
    }

    System.out.println();
    /*
    Iterator<Integer> it = hTable.keys().asIterator();
    while (it.hasNext()) {
      System.out.print(it.next());
    }
    */
    System.out.println();

    System.out.println(hTable.values());

    for (Map.Entry<Integer, String> entry : hTable.entrySet()) {
      System.out.print(entry.getKey() + " = " + entry.getValue() + ", ");
    }

    System.out.println();

    System.out.println(hTable.size());

    hTable.remove(2);

    System.out.println(hTable);

    System.out.println("hTable containsKey 1 ? " + hTable.containsKey(1));
    System.out.println("hTable containsKey 2 ? " + hTable.containsKey(2));

    System.out.println("hTable contains Hello ? " + hTable.contains("Hello"));
    System.out.println("hTable contains Java ? " + hTable.contains("Java"));

    System.out.println("hTable containsValue Hello ? " + hTable.containsValue("Hello"));
    System.out.println("hTable containsValue Java ? " + hTable.containsValue("Java"));

    System.out.println();

    System.out.println(hTable.get(1));
    System.out.println(hTable.get(2));

    System.out.println("is Empty ? " + hTable.isEmpty());

    hTable.clear();

    System.out.println("is Empty ? " + hTable.isEmpty());

    System.out.println(hTable);
  }
}
