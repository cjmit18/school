/*
 * CIS 246 - C++ Programming
 * Homework 5 - Repetition
 * Student Name: Wayne Mitchell
 * 
 * This program calculates total retail values for a series of sales transactions.
 * It uses a Product class to track sales for 5 different products and displays
 * the total sales for each product after all transactions are entered.
 */

#include <iostream>
#include "Product.h"
#include <iomanip>

int main() {
    bool 
    // Create products with their prices
    Product product1(8.17);
    Product product2(5.45);
    Product product3(10.11);
    Product product4(18.48);
    Product product5(11.30);
    
    int response = 1; // Initialize to non-zero to enter the loop

    while (response != 0) {

    // Prompt user for product number
    std::cout << "Product number:" << std::endl;
    std::cin >> response;
    if (response == 0) break;

    // Quantity sold
    std::cout << "Quantity sold:" << std::endl;
    int quantity;
    std::cin >> quantity;

    // Update the appropriate product based on user input
    switch (response) {
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
    }
    };
    
    // Display all product sales
    std::cout << std::fixed << std::setprecision(2);
    std::cout << "\nTotal Sales: " << std::endl;
    std::cout << "=============" << std::endl;
    std::cout << "Product 1: $" << std::setw(10) << std::right << product1.getTotalSales() << std::endl;
    std::cout << "Product 2: $" << std::setw(10) << std::right << product2.getTotalSales() << std::endl;
    std::cout << "Product 3: $" << std::setw(10) << std::right << product3.getTotalSales() << std::endl;
    std::cout << "Product 4: $" << std::setw(10) << std::right << product4.getTotalSales() << std::endl;
    std::cout << "Product 5: $" << std::setw(10) << std::right << product5.getTotalSales() << std::endl;

    return 0;
}