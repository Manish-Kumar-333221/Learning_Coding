package com.Learning_Java.Rough_Work;

import java.io.File;
import java.io.FileWriter;
import java.io.FileInputStream;
import java.io.FileNotFoundException;
import java.io.IOException;

public class Class_For_Rough_Work_Part03 {

  public static void main(String[] args) {

    File myFile =
        new File(
            "/storage/emulated/0/Learning_Coding/Learning_JAVA/Learning_JAVA/app/src/main/java/com/Learning_Java/Rough_Work/Creating_New_File.txt");
    try {
      myFile.createNewFile();
      System.out.println("File created successfully.");
    } catch (IOException e) {
    System.out.println("Unable to create file.");
      // e.printStackTrace();
      System.out.println(e);
    }
    int i = 58;
    String table = "";
    for (int j = 0; j < 10; j++) {
      table += i + " X " + (j + 1) + " = " + i * (j + 1);
      table += "\n";
    }
    System.out.println(table);
    try {
      FileWriter fileWriter =
          new FileWriter(
              "/storage/emulated/0/Learning_Coding/Learning_JAVA/Learning_JAVA/app/src/main/java/com/Learning_Java/Rough_Work/MultiplicationTable.txt");
      fileWriter.write(table);
      fileWriter.close();
    } catch (IOException e) {
      // e.printStackTrace();
      System.out.println(e);
    }

    File file =
        new File(
            "/storage/emulated/0/Learning_Coding/Learning_JAVA/Learning_JAVA/app/src/main/java/com/Learning_Java/Rough_Work/inputfile.txt");
    FileInputStream fin = null;
    try {
      // create FileInputStream object
      fin = new FileInputStream(file);

      byte fileContent[] = new byte[(int) file.length()];

      // Reads up to certain bytes of data from this input stream into an array of bytes.
      fin.read(fileContent);
      // create string from byte array
      String s = new String(fileContent);
      System.out.println("File content: " + s);
    } catch (FileNotFoundException e) {
      System.out.println("File not found " + e);
    } catch (IOException ioe) {
      System.out.println("Exception while reading file " + ioe);
    } finally {
      // close the streams using close method
      try {
        if (fin != null) {
          fin.close();
        }
      } catch (IOException ioe) {
        System.out.println("Error while closing stream: " + ioe);
      }
    }

    System.out.println(myFile.toURI());
    
    try {
      System.out.println(myFile.toURL());
    } catch (Exception e) {
      System.out.println(e);
    }
  }
}
