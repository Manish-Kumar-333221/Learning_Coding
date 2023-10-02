package com.Learning_Java;

class Library {
  String[] library = new String[100];

  public void addBook(String add) {
    for (int i = 0; i < this.library.length; i++) {
      if (library[i] == null) {
        this.library[i] = add;
        System.out.printf("The book ”%s” has been added.\n\n", add);
        break;
      }
    }
  }

  public void issueBook(String issue) {
    for (int i = 0; i < this.library.length; i++) {
      if (this.library[i] == issue) {
        System.out.printf("The book ”%s” have been issued.\n\n", issue);
        this.library[i] = null;
        break;
      }
    }
  }

  public void returnBook(String returns) {
    addBook(returns);
  }

  public void showAvailailableBooks() {
    if (library[0] != null) {
      System.out.println("The Available Books are: ");
      for (int i = 0; i < this.library.length; i++) {
        if (this.library[i] != null) {
          if (i < 9) {
            System.out.println("0" + (i + 1) + ") " + this.library[i]);
          } else {
            System.out.println((i + 1) + ") " + this.library[i]);
          }
        }
      }
      System.out.println();
    } else {
      System.out.println("No Books Found in the library.\n");
    }
  }
}

public class Learning_Java_Chapter04_Exercise {

  public static void main(String[] args) {
    /*
    • You have to implement a library using Java Class
      "Library"
    • Methods: addBook, issueBook, returnBook,
      showAvailableBooks
    • Properties: Array to store the available books,
      Array to store the issued books
    */

    // to solve we get noting on showAvailableBooks 
    // if we issue the 1st book from the library;

    Library library = new Library();
    library.addBook("Physics Class 12th");

    library.addBook("Chemistry Class 12th");

    library.addBook("Biology Class 12th");

    library.showAvailailableBooks();

    library.issueBook("Biology Class 12th");

    library.showAvailailableBooks();

    library.returnBook("Biology Class 12th");

    library.showAvailailableBooks();
  }
}
