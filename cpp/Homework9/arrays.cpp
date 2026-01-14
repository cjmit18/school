#include <iostream>
#include <array>
#include "car.h"
#include <iomanip>

void displayMenu();
bool addCar(std::array<Car, 10>& cars);
bool deleteCar(std::array<Car, 10>& cars);
void displayElements(const std::array<Car, 10>& cars);

int main() {
    std::array<Car, 10> cars;
    std::string userInput;
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

bool addCar(std::array<Car, 10>& cars){
        std:: string make;
        int price;
        std::cout << "Enter the make of the car: " << std::endl;
        std::cin >> make;
        std::cout << "Enter the price of the car: " << std::endl;
        std::cin >> price;
        Car newCar(make, price);
        for (int i = 0; i < cars.size(); i++) {
            if ((cars[i].getMake()).compare("") == 0) {
                cars[i] = newCar;
                std::cout << "Car added." << std::endl;
                return true;
            }
        }
            std::cout << "Inventory full. Cannot add more cars." << std::endl;
            return false;
};
bool deleteCar(std::array<Car, 10>& cars){
        std:: string make;
        std::cout << "Enter the make of the car to delete: " << std::endl;
        std::cin >> make;
        for (int i = 0; i < cars.size(); i++) {
            if ((cars[i].getMake()).compare(make) == 0) {
                cars[i] = Car();
                std::cout << "Car deleted." << std::endl;
                return true;
            }
        }
            std::cout << "Car not found." << std::endl;
            return false;
};
void displayElements(const std::array<Car, 10>& cars){
    for (const auto& car : cars) {
        if ((car.getMake()).compare("") != 0) {
            std::cout << std::left << std::setw(10) << "Make:" << std::right << std::setw(10) << "Price:" << std::endl;
            std::cout << std::left << std::setw(10) << "----" << std::right << std::setw(10) << "------" << std::endl;
            std::cout << std::left << std::setw(10) << car.getMake() << std::right << std::setw(10) << car.getPrice() << std::endl;
        }
        else 
            std::cout << "No car in inventory." << std::endl;
    } 
};