package com.Learning_Java.Rough_Work;

import static java.lang.System.out;
import java.sql.DriverManager;
import java.sql.Statement;
import java.sql.Connection;
import java.sql.SQLException;
import java.sql.ResultSet;
import java.text.NumberFormat;

public class Class_For_Rough_Work_Part22 {

  public static void main(String[] args) {
    NumberFormat currency = NumberFormat.getCurrencyInstance();
    final String DRIVER = "org.apache.derby.jdbc.EmbeddedDriver";
    final String CONNECTION = "jdbc:derby:AccountDatabase";
    try {
      Class.forName(DRIVER).newInstance();
    } catch (InstantiationException e) {
      System.out.println("a " + e);// e.printStackTrace();
    } catch (IllegalAccessException e) {
      System.out.println("b " + e);// e.printStackTrace();
    } catch (ClassNotFoundException e) {
      System.out.println("c " + e);// e.printStackTrace();
    }
    try (Connection connection = DriverManager.getConnection(CONNECTION);
        Statement statement = connection.createStatement();
        ResultSet resultset = statement.executeQuery("select * from ACCOUNTS")) {
      while (resultset.next()) {
        out.print(resultset.getString("NAME"));
        out.print(", ");
        out.print(resultset.getString("ADDRESS"));
        out.print(" ");
        out.println(currency.format(resultset.getFloat("BALANCE")));
      }
    } catch (SQLException e) {
      System.out.println("d " +e);// e.printStackTrace();
    }
  }
}
