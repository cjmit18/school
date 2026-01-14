package main.java.edu.jjc.summer2025.week6.homework6;// Dealer.java
// Author: Wayne Mitchell
// Program 5 - Dealer class for CIS 261
// Description

import java.text.NumberFormat;
import java.util.ArrayList;
import java.util.Scanner;

public class Dealer {

    public static void main(String[] args) {

        // create Arraylist of cars and call it inventory
        ArrayList<Car> inventory = new ArrayList<>();

        Scanner input = new Scanner(System.in);
        int choice;

        System.out.println("Welcome to the JJC Car Dealership Inventory Program\n");

        do {
            displayMenu();
            choice = input.nextInt();
            input.nextLine(); // consume newline

            switch (choice) {
                case 1:
                    addData(inventory, input);
                    break;
                case 2:
                    deleteData(inventory, input);
                    break;
                case 3:
                    printData(inventory);
                    break;
                case 4:
                    // exit - loop will terminate
                    break;
                default:
                    System.out.println("Invalid choice. Please try again.");
            }

        } while (choice != 4);

        input.close();
    }

    // Displays the menu
    public static void displayMenu() {
        System.out.println("1. Add a car to inventory");
        System.out.println("2. Delete a car from inventory");
        System.out.println("3. Print inventory");
        System.out.println("4. Exit");
        System.out.print("Your choice: ");
    }

    // Adds a car to the inventory
    public static void addData(ArrayList<Car> cars, Scanner input) {
        // Prompt user for make and price, create a Car, and add to list
        System.out.print("Type of car: ");
        String make = input.nextLine();
        System.out.print("Price of car: ");
        int price = 0;
        try {
            // read the whole line and parse to avoid leftover-newline issues
            price = Integer.parseInt(input.nextLine());
        } catch (NumberFormatException e) {
            // if invalid number entered, default to 0
            price = 0;
        }
        cars.add(new Car(make, price));
    }
    
    

    // Deletes a car from the inventory
    public static void deleteData(ArrayList<Car> cars, Scanner input) {
        // Prompt for the make to delete and remove the first matching Car
        System.out.print("Type of car to delete: ");
        String type = input.nextLine();

        boolean found = false;
        for (int i = 0; i < cars.size(); i++) {
            if (cars.get(i).getMake().equals(type)) {
                cars.remove(i);
                System.out.println(type + " deleted from inventory");
                found = true;
                break; // remove only the first match as required
            }
        }
        if (!found) {
            System.out.println("No such car in inventory");
        }
    }

    // Prints the inventory
    public static void printData(ArrayList<Car> cars) {
        // Print header
        System.out.printf("%-10s %10s%n", "Make", "Price");
        System.out.printf("%-10s %10s%n", "----", "  -----");

        NumberFormat nf = NumberFormat.getIntegerInstance();
        // iterate using enhanced for loop as required
        for (Car c : cars) {
            String priceStr = nf.format(c.getPrice());
            // left-align make in width 10, right-align price in width 10
            System.out.printf("%-10s %10s%n", c.getMake(), priceStr);
        }
    }
}
