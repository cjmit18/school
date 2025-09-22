/*
    Wayne Mitchell
    Homework 4
    CIS 246
    Week 4
    This program calculates the total purchase amount including tax and discounts based on whether spirit wear is included in the purchase.
*/

#include <iostream>
#include "cart.h"
#include <iomanip>

int main() {
    // Create a Cart object with initial values
    Cart myCart(0.0, false);
    
    // Get user input for purchase amount and spirit wear
    std::cout << "Enter a purchase amount: ";
    double amount;
    std::cin >> amount;
    myCart.setTotal(amount);

    // Ask user about spirit wear
    std::cout << "Does this purchase include spirit wear (Y/N)?: ";
    char userAnswer;
    std::cin >> userAnswer;

    // Set spirit wear status based on user input
    if (userAnswer == 'Y' || userAnswer == 'y') {
        myCart.setSpiritWear(true);
    } else {
        myCart.setSpiritWear(false);
    }

    // Display the total purchase amount and total with tax
    std::cout << std::fixed << std::setprecision(2);
    std::cout << std::left << std::setw(10) << "Purchase amount:" << std::right << std::setw(10) << "$" << myCart.getTotal() << std::endl;
    std::cout << std::left << std::setw(10) << "Total with tax:" << std::right << std::setw(11) << "$" << myCart.getTotalPurchase() << std::endl;

    return 0;
}