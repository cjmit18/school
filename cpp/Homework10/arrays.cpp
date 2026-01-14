#include <iostream>
#include <vector>
#include "car.h"
#include <iomanip>

void displayMenu();
bool addCar(std::vector<Car>& cars);
bool deleteCar(std::vector<Car>& cars);
void displayElements(const std::vector<Car>& cars);

int main() {

    std::vector<Car> cars; // Vector to hold Car objects

    std::string userInput; // Variable to hold user input

    do {

    displayMenu();

    std::cin >> userInput;

    if (userInput == "1") {
        addCar(cars);
    } 
    else if (userInput == "2") {
        deleteCar(cars);
    } 
    else if (userInput == "3") {
        displayElements(cars);
    } 
    else if (userInput == "4") {
        std::cout << "Exiting program." << std::endl;
    }
    else {
        std::cout << "Invalid input. Please try again." << std::endl;
    }    
}
    while (userInput != "4");
    return 0;
};
void displayMenu() {
        std::cout << "1. Add a car to inventory\n" << std::endl;
        std::cout << "2. Delete a car from the inventory\n" << std::endl;
        std::cout << "3. Print Inventory\n" << std::endl;
        std::cout << "4. Exit\n" << std::endl; 
        std::cout << "\nYour choice: " << std::endl;
    };

bool addCar(std::vector<Car>& cars){

        std::string make;
        int price;

        std::cout << "Enter the make of the car: " << std::endl;
        std::cin >> make;
        std::cout << "Enter the price of the car: " << std::endl;
        std::cin >> price;

        Car newCar(make, price);

        cars.push_back(newCar);
        std::cout << "Car added." << std::endl;

        return true;
};
bool deleteCar(std::vector<Car>& cars){

        std::string make;
        std::cout << "Enter the make of the car to delete: " << std::endl;
        std::cin >> make;

        for (int i = 0; i < cars.size(); i++) {
            if ((cars[i].getMake()).compare(make) == 0) {
                cars.erase(cars.begin() + i);
                std::cout << "Car deleted." << std::endl;
                return true;
            }
        }
            std::cout << "Car not found." << std::endl;
            return false;
};
void displayElements(const std::vector<Car>& cars){
    if (cars.empty()) {
        std::cout << "No cars in inventory." << std::endl;
    } 
    else {
        std::cout << std::left << std::setw(20) << "Make" << std::setw(10) << "Price" << std::endl;
        std::cout << "------------------------------" << std::endl;
        for (const auto& car : cars) {
            std::cout << std::left << std::setw(20) << car.getMake() << std::setw(10) << car.getPrice() << std::endl;
        }
    } 
};