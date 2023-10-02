package com.Learning_Java.Rough_Work;

class Node {
  int data;
  Node left, right = null;

  public Node(int data) {
    this.data = data;
  }
}

public class Class_For_Rough_Work_Part23 {
  public static Node push(Node root, int data) {
    if (root == null) {
      root = new Node(data);
      return root;
    }
    if (data < root.data) {
      root.left = push(root.left, data);
    } else if (data > root.data) {
      root.right = push(root.right, data);
    }
    return root;
  }

  public static void inOrderTraversal(Node root) {
    if (root != null) {
      inOrderTraversal(root.left);
      System.out.print(root.data + " ");
      inOrderTraversal(root.right);
    }
  }

  public static void main(String[] args) {
    Node l = null;
    l = push(l, 6);
    l = push(l, 5);
    l = push(l, 3);
    l = push(l, 1);
    l = push(l, 4);
    l = push(l, 2);
    l = push(l, 13);
    l = push(l, 12);
    l = push(l, 11);
    l = push(l, 10);
    l = push(l, 9);
    l = push(l, 7);
    l = push(l, 8);
    l = push(l, 14);
    l = push(l, 15);
    l = push(l, 16);
    l = push(l, 17);
    l = push(l, 18);
    l = push(l, 19);
    l = push(l, 20);
    l = push(l, 21);

    inOrderTraversal(l);
  }
}
