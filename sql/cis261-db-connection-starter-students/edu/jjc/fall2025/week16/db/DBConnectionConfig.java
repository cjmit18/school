package edu.jjc.fall2025.week16.db;

/**
 * CIS 261 – Java Database Connection Project (Starter)
 * File: DBConnectionConfig.java
 * Purpose:
 *   Provide placeholders for the JDBC connection string and the SELECT query.
 *   Students must replace the placeholders with their environment values.
 *
 * Notes:
 *   - We are using Microsoft SQL Server with Windows Integrated Security.
 *   - Add the Microsoft JDBC driver JAR to the project classpath.
 *   - For integratedSecurity=true, ensure the sqljdbc_auth DLL is available on PATH
 *     or specify -Djava.library.path to its folder at runtime.
 */
public final class DBConnectionConfig {

    /**
     * TODO: Replace with your machine name or SQL Server host.
     * Examples:
     *   "YOUR-HOSTNAME"
     *   "YOUR-HOSTNAME\\SQLEXPRESS"
     */
    public static final String HOST = "support\\SQLEXPRESS";

    /**
     * TODO: Replace with the database name you created in SSMS.
     * Example: "cis260"
     */
    public static final String DATABASE_NAME = "cis260";

    /**
     * JDBC connection string for SQL Server using Windows Integrated Security.
     * Students do not need to modify this unless instructed.
     */
    public static final String CONNECTION_URL =
            "jdbc:sqlserver://" + HOST + ";" +
            "databaseName=" + DATABASE_NAME + ";" +
            "integratedSecurity=true;" +
            "encrypt=false;";

    /**
     * TODO: Replace or keep as is based on your Employees table.
     * The column names must match your table schema.
     */
    public static final String SELECT_QUERY =
            "SELECT employeeID, firstName, lastName, position FROM Employees";

    private DBConnectionConfig() { }
}
