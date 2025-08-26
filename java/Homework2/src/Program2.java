package edu.jjc.fall2025.week2.homework;
// Name: Wayne Mitchell
// Assignment: Program 2
// Program Summary: This program prompts the user for a date (month, day, year)
// and then displays it in a formatted manner.

import java.util.Scanner;
// import the Scanner Class

public class Program2 {
    public static void main(String[] args) {
        // Create a Scanner object to read input from the keyboard
        Scanner scanner = new Scanner(System.in);

        // Declare variables for month, day, and year
        int month;
        int day;
        int year;

        // Prompt the user to enter the month
        System.out.print("Enter the month: ");
        month = scanner.nextInt();

        // Prompt the user to enter the day
        System.out.print("Enter the day: ");
        day = scanner.nextInt();

        // Prompt the user to enter the year
        System.out.print("Enter the year: ");
        year = scanner.nextInt();

        // Display the formatted date using printf
        System.out.printf("The date is %d/%d/%d%n", month, day, year);

        // Close the Scanner object
        scanner.close();
    }
}

