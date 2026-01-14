package edu.jjc.database.controller;
//import edu.jjc.database.config.DatabaseConfig;
//import edu.jjc.database.dbo.DatabaseRepository;

import edu.jjc.database.model.User;
import io.swagger.annotations.Api;
import io.swagger.annotations.ApiOperation;
import org.springframework.web.bind.annotation.GetMapping;
import org.springframework.web.bind.annotation.RequestMapping;
import org.springframework.web.bind.annotation.RestController;

import java.sql.*;
import java.util.ArrayList;
import java.util.List;

@RestController
@RequestMapping("/api")
@Api(value = "User Management System")
public class UserController {

    static String connectionUrl =
            "jdbc:sqlserver://DESKTOP-E6OIR7N\\SQLEXPRESS;"
                    + "database=AdventureWorks2019;"
                    + "integratedSecurity=true;";

    static String sql = "select * from Person.Person";


    @GetMapping("/users")
    @ApiOperation(value = "View a list of all users", response = List.class)
    public List<User> getUsers() throws SQLException {
        List<User> userList = new ArrayList<>();
//        //Statement stmt = conn.createStatement();
//        String sql = "SELECT BusinessEntityID, FirstName, FROM Person.Person";
//        SqlRowSet rs = jdbcTemplate.queryForRowSet(sql);
//        while (rs.next()) {
//            int id = rs.getInt("BusinessEntityID");
//            String name = rs.getString("FirstName");
////                String email = rs.getString("email");
//            User user = new User(id, name);
//            userList.add(user);
//        }

        //stmt.close();
//        return new ResponseEntity<>(userList, HttpStatus.OK);
        Connection connection = DriverManager.getConnection(connectionUrl);
        Statement statement = connection.createStatement();

        ResultSet resultSet = statement.executeQuery(sql);

        User user = new User();

        //ResultSet resultset = statement.executeQuery(sql);
        while (resultSet.next()){

            System.out.println(resultSet.getInt(1) + " " + resultSet.getString(5));
            user.setId(resultSet.getInt(1));
            user.setName(resultSet.getString(5));
            user.setLastName((resultSet.getString(7)));
            userList.add(user);


        }

        return userList;

        //return databaseRepository.getUsers(jdbcTemplate);
    }
}