/*
Wayne Mitchell
CIS 246
Homework 1
This program prompts the user to enter two integers and then calculates and displays their sum, difference, and product.
*/

#include <iostream>

int main() {

    std::cout << "Type in an integer" << std::endl; // Prompt for first integer
        int userInput;
        std::cin >> userInput;


    std::cout << "Type in another integer " << std::endl; // Prompt for second integer
        int secondInput;
        std::cin >> secondInput;

    int sum = userInput + secondInput; /* Calculate the sum */
    int difference = userInput - secondInput; /* Calculate the difference */
    int product = userInput * secondInput; /* Calculate the product */

    //Printing Statments
    std::cout << "The sum of these two numbers is: " << sum << std::endl; 
    std::cout << "The difference of these two numbers is: " << difference << std::endl;
    std::cout << "The product of these two numbers is: " << product << std::endl;

    return 0;
}