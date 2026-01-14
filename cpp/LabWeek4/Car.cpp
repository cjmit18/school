/*Wayne Mitchell
 *CIS 246 
 * Week 4 Lab 1
 * This program defines a Car class with methods to set and get the number of doors,
 * and to determine the car type based on the number of doors.
*/
#include <iostream>
#include "Car.h"

int main() { //Main function begins program execution
    Car myCar; //Create a Car object
    int doors;

    std::cout << "How many doors does the car have? " << std::endl;
    std::cin >> doors; //Get user input for number of doors

    myCar.setDoors(doors); //Set the number of doors in the Car object


    //Output the car type and number of doors
    std::cout << "The car is a " << myCar.GetCarType() << " with " << myCar.getDoors() << " doors." << std::endl;
    return 0;
}