package com.Learning_Java.Rough_Work;

import java.io.FileWriter;
import java.io.IOException;

public class Class_For_Rough_Work_Part24 {

  public static void main(String[] args) {

    String file_Path = "/storage/emulated/0/New Folder/";

    String file_Name = ".html";

    String file_Content =
        "<!DOCTYPE html>\n<html lang=\"en\">\n\n<head>\n    <meta charset=\"UTF-8\">\n    <meta http-equiv=\"X-UA-Compatible\" content=\"IE=edge\">\n    <meta name=\"viewport\" content=\"width=device-width, initial-scale=1.0\">\n    <meta name=\"description\" content=\"Seo is like this is a nice article on seo\">\n    <meta name=\"keywords\" content=\"seo, search, seo 2021\">\n        <title>SEO in 2022: A beginners guide</title>\n</head>\n\n<body>\n    <header>\n        <nav>\n            <ul>\n                <li>Home</li>\n                <li>About</li>\n                <li>Contact Us</li>\n            </ul>\n        </nav>\n    </header>\n    <main>\n        <section>\n            <div>\n                <p>Lorem ipsum dolor, sit amet consectetur adipisicing elit. Maiores quo obcaecati delectus,\n                    voluptatibus laudantium tempora consequatur. Aspernatur magnam, quam sapiente illum, qui voluptatem\n                    tempore totam aut numquam aperiam explicabo ab ex magni iusto sit?</p>\n            </div>\n        </section>\n    </main>\n</body>\n\n</html>";

    try {
      for (int i = 1; i <= 10; i++) {
        FileWriter fileWriter = new FileWriter(file_Path + i + file_Name);

        fileWriter.write(file_Content);
        System.out.println("File created and modified successfully." + i);
        fileWriter.close();
      }
    } catch (IOException e) {
      e.printStackTrace();
    }
  }
}
