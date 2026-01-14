package edu.jjc.summer2025.week4.homework4;

// Name: Wayne Mitchell
// Program: Homework 4
// Description: Sales tracking program for five products.

import java.text.NumberFormat;
import java.util.Locale;
import java.util.Scanner;

public class SalesDriver {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);

        // Create product objects with hardcoded prices - complete the objects for the rest of the price
        Product product1 = new Product(2.98);
        Product product2 = new Product(4.50);
        Product product3 = new Product(9.98);
        Product product4 = new Product(14.99);
        Product product5 = new Product(19.99);

        int productNumber;
        int quantity;

        // Begin sentinel-controlled loop
        System.out.println("Enter product number (1-5) and quantity sold (or 0 to quit):");
    
        // complete the while statement or write your own.
        while (true) {
            System.out.print("Product number (0 to quit): ");
            productNumber = input.nextInt();
            if (productNumber == 0) {
                break;
            }
            System.out.print("Quantity sold: ");
            quantity = input.nextInt();

            // Update total sales for the selected product
            switch (productNumber) {
                case 1:
                    product1.updateTotalSales(quantity);
                    break;
                case 2:
                    product2.updateTotalSales(quantity);
                    break;
                case 3:
                    product3.updateTotalSales(quantity);
                    break;
                case 4:
                    product4.updateTotalSales(quantity);
                    break;
                case 5:
                    product5.updateTotalSales(quantity);
                    break;
                default:
                    System.out.println("Invalid product number.");
            }
        }

        // Display the results with formatting - complete the rest of the output
        NumberFormat currency = NumberFormat.getCurrencyInstance(Locale.US);
        System.out.printf("%n%-15s%15s%n", "Product", "Total Sales");
        System.out.printf("%-15s%15s%n", "-------", "------------");
        System.out.printf("%-15s%15s%n", "Product 1", currency.format(product1.getTotalSales()));
        System.out.printf("%-15s%15s%n", "Product 2", currency.format(product2.getTotalSales()));
        System.out.printf("%-15s%15s%n", "Product 3", currency.format(product3.getTotalSales()));
        System.out.printf("%-15s%15s%n", "Product 4", currency.format(product4.getTotalSales()));
        System.out.printf("%-15s%15s%n", "Product 5", currency.format(product5.getTotalSales()));

        input.close();
    }
}
