package edu.jjc.database;

public class DBConnectionConfig {


    public static final String connectionUrl =
            "jdbc:sqlserver://DESKTOP-E6OIR7N\\SQLEXPRESS;"
                    + "database=AdventureWorks2019;"
                    + "integratedSecurity=true;";

    public static final String SELECT_QUERY =
            "SELECT authorID, firstName, lastName FROM authors";
}
