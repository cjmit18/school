package edu.jjc.database.model;

public class User {
    private int businessEntityID;
    private String firstName;

    public String getLastName() {
        return lastName;
    }

    public void setLastName(String lastName) {
        this.lastName = lastName;
    }

    private String lastName;


    public int getBusinessEntityID() {
        return businessEntityID;
    }

    public void setId(int businessEntityID) {
        this.businessEntityID = businessEntityID;
    }

    public String getFirstName() {
        return firstName;
    }

    public void setName(String firstName) {
        this.firstName = firstName;
    }

}