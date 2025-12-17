package edu.jjc.database.dbo;

import edu.jjc.database.model.User;
import org.springframework.jdbc.core.RowMapper;

import java.sql.ResultSet;
import java.sql.SQLException;

public class DBRowMapper implements RowMapper<User> {

    @Override
    public User mapRow(ResultSet rs, int rowNum) throws SQLException{
        User user = new User();

        user.setId(rs.getInt("BusinessEntityID"));
        user.setName(rs.getString("FirstName").trim());
        return user;
    }
}
