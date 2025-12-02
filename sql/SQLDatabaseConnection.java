package edu.jjc;

import java.sql.*;

public class SQLDatabaseConnection {
    // Connect to your database.
    // Replace server name, username, and password with your credentials
    static String connectionUrl =
            "jdbc:sqlserver://M-T2025-01-7A\\SQLEXPRESS;"
                    + "database=AdventureWorks2019;"
                    + "integratedSecurity=true;";
//    static String connectionUrl =
//            "jdbc:sqlserver://M-T2025-01-7A\\SQLEXPRESS;"
//                    + "database=AdventureWorks2019;"
//                    + "integratedSecurity=false; user=JOLIET\\studentt2025; password=Classro0m;";

    public static void main(String[] args) {


        try (Connection connection = DriverManager.getConnection(connectionUrl);) {
           System.out.println("connection: " + connection.getCatalog());

           queryDB();

           System.out.println("===============================================");

        }
        // Handle any errors that may have occurred.
        catch (SQLException e) {
            e.printStackTrace();
        }

    }

    public static void queryDB() throws SQLException {

        // Connect to your database.
        // Replace server name, username, and password with your credentials

            ResultSet resultSet = null;


            System.out.println("===============================================");
            try (Connection connection = DriverManager.getConnection(connectionUrl);
                 Statement statement = connection.createStatement();) {

                // Create and execute a SELECT SQL statement.
                String selectSql = "SELECT * from Person.Person";
                resultSet = statement.executeQuery(selectSql);

                // Print results from select statement
                while (resultSet.next()) {
                    System.out.println(resultSet.getString(1) + " " + resultSet.getString(5) + " " + resultSet.getString(6)
                    + " " + resultSet.getString(7));
                }
            }
            catch (SQLException e) {
                e.printStackTrace();
            }
        }
}