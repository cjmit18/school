package edu.jjc.fall2025.week16.db;

/**
 * CIS 261 – Java Database Connection Project (Starter)
 * File: DisplayEmployees.java
 * Purpose:
 *   Skeleton program that connects to SQL Server, executes a SELECT against
 *   the Employees table, and prints the results.
 *
 * Student Tasks:
 *   1) Ensure the Microsoft JDBC driver JAR is on the classpath.
 *   2) Update DBConnectionConfig with HOST and DATABASE_NAME.
 *   3) Implement the database code inside showEmployees().
 *   4) Run and verify the output.
 */
import java.sql.Connection;
import java.sql.DriverManager;
import java.sql.PreparedStatement;
import java.sql.ResultSet;
import java.sql.SQLException;

public class DisplayEmployees {

    public static void main(String[] args) {
        printHeader();
        try {
            // Optional: load the SQL Server driver explicitly.
            Class.forName("com.microsoft.sqlserver.jdbc.SQLServerDriver");
        } catch (ClassNotFoundException e) {
            System.err.println("Microsoft JDBC Driver for SQL Server not found on classpath.");
            System.err.println("Add the mssql-jdbc JAR and rerun.");
            return;
        }

        try {
            showEmployees();
        } catch (UnsupportedOperationException uoe) {
            System.err.println("TODO: Implement showEmployees() to complete this assignment.");
        } catch (SQLException se) {
            System.err.println("Database error while retrieving employees.");
            System.err.println("SQLState: " + se.getSQLState());
            System.err.println("ErrorCode: " + se.getErrorCode());
            System.err.println("Message: " + se.getMessage());
        }
    }

    /**
     * TODO: Implement this method using try-with-resources.
     * Steps:
     *   1) Get a Connection using DBConnectionConfig.CONNECTION_URL.
     *   2) Create a PreparedStatement using DBConnectionConfig.SELECT_QUERY.
     *   3) Execute the query to obtain a ResultSet.
     *   4) Loop through the ResultSet and call printRow(...) for each record.
     *
     * Hints:
     *   try (
     *       Connection conn = DriverManager.getConnection(DBConnectionConfig.CONNECTION_URL);
     *       PreparedStatement ps = conn.prepareStatement(DBConnectionConfig.SELECT_QUERY);
     *       ResultSet rs = ps.executeQuery()
     *   ) {
     *       while (rs.next()) {
     *           int id = rs.getInt("employeeID");
     *           String first = rs.getString("firstName");
     *           String last = rs.getString("lastName");
     *           String position = rs.getString("position");
     *           printRow(id, first, last, position);
     *       }
     *   }
     */
    private static void showEmployees() throws SQLException {
        // Use try-with-resources to automatically close Connection, PreparedStatement, and ResultSet
        try (
            // Establish connection to SQL Server using the configured connection URL
            Connection conn = DriverManager.getConnection(DBConnectionConfig.CONNECTION_URL);
            // Create a prepared statement with the SELECT query
            PreparedStatement ps = conn.prepareStatement(DBConnectionConfig.SELECT_QUERY);
            // Execute the query and get the result set
            ResultSet rs = ps.executeQuery()
        ) {
            // Iterate through each row in the result set
            while (rs.next()) {
                // Extract employee data from the current row
                int id = rs.getInt("employeeID");
                String first = rs.getString("firstName");
                String last = rs.getString("lastName");
                String position = rs.getString("position");
                // Print the employee information in formatted columns
                printRow(id, first, last, position);
            }
        }
    }

    private static void printHeader() {
        String title = "EmployeeID   FirstName       LastName        Position";
        System.out.println(title);
        System.out.println(repeat('-', title.length()));
    }

    private static void printRow(int id, String first, String last, String position) {
        String row = String.format("%-12d %-15s %-15s %-25s", id, first, last, position);
        System.out.println(row);
    }

    private static String repeat(char ch, int count) {
        StringBuilder sb = new StringBuilder(count);
        for (int i = 0; i < count; i++) {
            sb.append(ch);
        }
        return sb.toString();
    }
}
