package com.Learning_Java;

// import java.io.File;
import java.io.FileWriter;
import java.io.IOException;

public class Class_For_Create_New_File {

  public static void main(String[] args) {

    String file_Path =
        "/storage/emulated/0/Learning_Coding/Learning_JAVA/Learning_JAVA/app/src/main/java/com/Learning_Java/";

    String file_Name = "Learning_Java_Chapter15_Part15.java";

    String file_Content =
        "package com.Learning_Java;\n\npublic class "
            + file_Name.substring(0, file_Name.lastIndexOf("."))
            + " {\n\n  public static void main(String[] args) {\n    \n  }\n}";
    /*
        File myFile = new File(file_Path + file_Name);
        try {
          myFile.createNewFile();
      System.out.println("File created successfully.");
        } catch (IOException e) {
          e.printStackTrace();
        }
    */
    try {
      FileWriter fileWriter = new FileWriter(file_Path + file_Name);

      fileWriter.write(file_Content);
      System.out.println("File created and modified successfully.");
      fileWriter.close();
    } catch (IOException e) {
      e.printStackTrace();
    }
  }
}
