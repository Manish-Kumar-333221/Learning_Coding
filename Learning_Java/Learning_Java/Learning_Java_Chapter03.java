package com.Learning_Java;

public class Learning_Java_Chapter03 {

  public static void main(String[] args) {

    int a = 6;
    String b = "A";
    float c = 5.51f;
    char d = 'B';
    System.out.printf("The 1st no. = %d and The 2nd no. = %s\n", a, b);
    System.out.println("-------------");

    System.out.printf("The 1st no. = %1.1f and The 2nd no. = %c\n", c, d);
    System.out.println("-------------");
    //             H E L L O   W O R D
    //             1 2 3 4 5 6 7 8 9 10  (length)
    //             0 1 2 3 4 5 6 7 8 9   (index)
    //             | | | | | | | | | |
    String name = "Manish";
    int value = name.length();
    System.out.println(value + "\n-------------");

    System.out.println(name.toLowerCase());
    // or
    String lstring = name.toLowerCase();
    System.out.println(lstring + "\n-------------");

    System.out.println(name.toUpperCase());
    // or
    String ustring = name.toUpperCase();
    System.out.println(ustring + "\n-------------");

    String name1 = "       Manish Kumar    ";
    System.out.println(name1 + "\n-------------");

    System.out.println(name1.trim());
    // or
    String trim = name1.trim();
    System.out.println(trim + "\n-------------");

    System.out.println(name.substring(2));
    // or
    String start = name.substring(2);
    System.out.println(start + "\n-------------");

    System.out.println(name.substring(2, 5));
    // or
    String start_to_end = name.substring(2, 6);
    System.out.println(start_to_end + "\n-------------");

    System.out.println(name.replace("n", "h"));
    // or
    String replace = name.replace("i", "a");
    System.out.println(replace + "\n-------------");
    String hello = "manish";
    System.out.println(hello.replace("nis", "hes"));
    // or
    hello = hello.replace("hes", "nis");
    System.out.println(hello);
    // or
    String replace_more = hello.replace("nish", "p");
    System.out.println(replace_more + "\n-------------");
    // or
    String replace_wrong = hello.replace("isha", "is");
    System.out.println(replace_wrong + "\n-------------");

    System.out.println(name.startsWith("Ma"));
    // or
    boolean start_with = name.startsWith("ma");
    System.out.println(start_with + "\n-------------");

    System.out.println(name.endsWith("ish"));
    // or
    boolean end_with = name.endsWith("s");
    System.out.println(end_with + "\n-------------");

    System.out.println(name.charAt(3));
    // or
    char character_at = name.charAt(4);
    System.out.println(character_at + "\n-------------");

    System.out.println(name.indexOf("M"));
    // or
    int character_index = name.indexOf("h");
    System.out.println(character_index + "\n-------------");

    String name2 = "Harry";
    System.out.println(name2.indexOf("ry"));
    // or
    int double_character_index = name2.indexOf("r");
    System.out.println(double_character_index + "\n-------------");

    String name3 = "Harryrry";
    System.out.println(name3.indexOf("rry"));
    // or
    int more_double_character_index = name3.indexOf("rry", 2);
    System.out.println(more_double_character_index);
    more_double_character_index = name3.indexOf("rry", 3);
    System.out.println(more_double_character_index + "\n-------------");

    System.out.println(name2.lastIndexOf("rry"));
    // or
    int character_last_index = name2.lastIndexOf("rry", 2);
    System.out.println(character_last_index + "\n-------------");

    System.out.println(name.equals("Manish"));
    // or
    boolean equal = name.equals("manish");
    System.out.println(equal + "\n-------------");

    System.out.println(name.equalsIgnoreCase("maNisH"));
    // or
    boolean case_equal = name.equalsIgnoreCase("Manishabc");
    System.out.println(case_equal + "\n-------------");

    String str1 = "Hello World";
    String str2 = "Hello";
    boolean blnFound = str1.contains(str2);
    System.out.println("String contains another string? : " + blnFound);
    System.out.println("-------------");

    System.out.println("I am escape sequence \n double quote\n-------------");
    System.out.println("I am escape sequence \t double quote\n-------------");
    System.out.println("I am escape sequence \\ double quote\n-------------");
    System.out.println("I am escape sequence \b double quote\n-------------");
    System.out.println("I am escape sequence \r double quote\n-------------");
    System.out.println("I am escape sequence \" double quote\n-------------");
    System.out.println("I am escape sequence \' double quote\n-------------");
  }
}
