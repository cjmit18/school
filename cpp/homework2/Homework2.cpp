/* Wayne Mitchell
 * CIS 246
 * Week 2 Homework 2
*/
#include <iostream>
#include "Date.h"

int main() {
    Date today(8, 25, 2025); // Create a Date object for today

    today.displayDate(); // Display the current date

    // Prompt user for new date
    std::cout << "Enter the month ";
        int month;
        std::cin >> month;
        today.setMonth(month);

    std::cout << "Enter the day ";
        double day;
        std::cin >> day;
        today.setDay(day);

    std::cout << "Enter the year ";
        int year;
        std::cin >> year;
        today.setYear(year);

    // Display the updated date
    today.displayDate();

    return 0;
}
