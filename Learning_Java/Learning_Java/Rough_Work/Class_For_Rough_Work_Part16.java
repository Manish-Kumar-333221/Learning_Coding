package  com.Learning_Java.Rough_Work;

import java.util.Arrays;

public class Class_For_Rough_Work_Part16 {

  public static void main(String[] args) {

    String a = "Hello World";
    char[] b = new char[a.length()];
    a.getChars(0, a.length(), b, 0);

    System.out.println(b);
    
    String[] c = {"1234567890"};
    System.out.println(Arrays.hashCode(c));
  }
}
