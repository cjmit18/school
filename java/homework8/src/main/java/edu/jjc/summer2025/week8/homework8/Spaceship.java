package edu.jjc.summer2025.week8.homework8;
// Wayne Mitchell
// Program 8 - Spaceship class (Partially completed)
// Represents a generic spaceship with ID and coordinates

public class Spaceship {
    private int id;
    private int xCoordinate = 0;
    private int yCoordinate = 0;

    // One-argument constructor - takes ID and sets it
    public Spaceship(int id) {
        this.id = id;
    }

    // Getter methods
    public int getId() {
        return id;
    }

    public int getXCoordinate() {
        return xCoordinate;
    }

    public int getYCoordinate() {
        return yCoordinate;
    }

    // Setter methods
    public void setId(int id) {
        this.id = id;
    }

    public void setXCoordinate(int xCoordinate) {
        this.xCoordinate = xCoordinate;
    }

    public void setYCoordinate(int yCoordinate) {
        this.yCoordinate = yCoordinate;
    }

    // Override toString method - returns formatted string
    @Override
    public String toString() {
        return String.format("ID: %d, X: %d, Y: %d", id, xCoordinate, yCoordinate);
    }
}
