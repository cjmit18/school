package edu.jjc.summer2025.week1.homework;/*

 * Name: Wayne Mitchell
 * Course Number: 261
 * Program: 1
 * Description: This class prompts the user to enter a car name, stores it, and prints it back.
 */

import java.util.Scanner;

public class Car {
    public static void main(String[] args) {
        // Create a Scanner object for user input
        Scanner scanner = new Scanner(System.in);

        // Prompt the user to enter the name of a car
        System.out.print("Enter the name of a car: ");

        // Read user input and store it in a String variable
        String carName;
        carName = scanner.nextLine();

        // Output the entered car name using formatted output
        System.out.printf("The name of the car is: %s%n", carName);

        // Close the Scanner
        scanner.close();
    }
}
