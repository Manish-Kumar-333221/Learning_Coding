package sample;
/*
  Iterate through elements of Java HashSet example
  This Java Example shows how to iterate through elements Java HashSet object.
*/

import java.util.HashSet;
import java.util.Iterator;

public class IterateThroughElementsOfHashSetExample {

    public static void main(String[] args) {

        //create object of HashSet
        HashSet<Integer> hSet = new HashSet<Integer>();

        //add elements to HashSet object
        hSet.add(new Integer("1"));
        hSet.add(new Integer("2"));
        hSet.add(new Integer("3"));

        //get the Iterator
        Iterator<Integer> itr = hSet.iterator();

        System.out.println("HashSet contains : ");
        while (itr.hasNext()) System.out.println(itr.next());
    }
}

/*
 Output would be
 HashSet contains :
 3
 2
 1
 */
