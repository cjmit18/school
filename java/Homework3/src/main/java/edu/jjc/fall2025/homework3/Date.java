/*
 * Wayne Mitchell
 * CIS 261
 * Homework 3
 * Description: Date class and driver using private instance variables
 */
package main.java.edu.jjc.fall2025.homework3;
public class Date {
    private int month;
    private int day;
    private int year;

    // Constructor
    public Date(int month, int day, int year) {

    }

    // Setters
    public void setMonth(int month) {
        this.month = month;
    }

    public void setDay(int day) {
        this.day = day;
    }

    public void setYear(int year) {
        this.year = year;
    }

    // Getters
    public int getMonth() {
        return month;
    }

    public int getDay() {
        return day;
    }

    public int getYear() {
        return year;
    }



    // Method to display the date in mm/dd/yyyy format
    public String displayDate() {
        return String.format("%02d/%02d/%04d", month, day, year);
    }

}
