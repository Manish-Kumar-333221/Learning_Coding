package com.Learning_Java.Rough_Work;

import java.sql.DriverManager;
import java.sql.Statement;
import java.sql.Connection;
import java.sql.SQLException;

public class Class_For_Rough_Work_Part21 {

  public static void main(String[] args) {
    final String DRIVER = "com.mysql.jdbc.Driver"; // "org.apache.derby.jdbc.EmbeddedDriver";
    final String CONNECTION = "jdbc:mysql://localhost/AccountDatabase;create=true"; // "jdbc:derby:AccountDatabase;create=true";
    try {
      Class.forName(DRIVER).newInstance();
    } catch (InstantiationException e) {
      e.printStackTrace();
    } catch (IllegalAccessException e) {
      e.printStackTrace();
    } catch (ClassNotFoundException e) {
      e.printStackTrace();
    }
    try (Connection connection = DriverManager.getConnection(CONNECTION);
        Statement statement = connection.createStatement()) {
      statement.executeUpdate(
          "create table ACCOUNTS "
              + " (NAME VARCHAR(32) NOT NULL PRIMARY KEY, "
              + " ADDRESS VARCHAR(32), "
              + " BALANCE FLOAT) ");
      statement.executeUpdate(
          "insert into ACCOUNTS values " + " ('Barry Burd', '222 Cyber Lane', 24.02)");
      statement.executeUpdate(
          "insert into ACCOUNTS values " + " ('Joe Dow', '111 Luddite Street', 55.63)");
    } catch (SQLException e) {
      e.printStackTrace();
    }
  }
}
