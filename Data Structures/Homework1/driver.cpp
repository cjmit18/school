/*Wayne Mitchell
CIS 269
Vehicle Searching Program
*/
#include <iostream>
#include <string>
#include "vehicle.h"
typedef unsigned int uint;

Vehicle globalArray[5];
uint displayMenu();
void addVehicle();
void searchForVehicle();
void deleteVehicle();
void displayAllVehicles();

int main()
{
    uint user;
    do {
        user = displayMenu();
        switch(user){
            case 1:
                addVehicle();
                break;
            case 2:
                deleteVehicle();
                break;
            case 3:
                searchForVehicle();
                break;
            case 4:
                displayAllVehicles();
                break;
            case 5:
                std::cout << "\nGoodbye\n" << std::endl;
                break;
            default:
                std::cout << "\nInvalid option\n" << std::endl;
                break;
        }
    } while (user != 5);
return 0;
}

uint displayMenu() {

std::cout << "\nWelcome to the Vehicle Management Program\n" << std::endl;
std::cout << "1. Add Vehicle" << std::endl;
std::cout << "2. Delete Vehicle" << std::endl;
std::cout << "3. Search for a vehicle" << std::endl;
std::cout << "4. Display all Vehicles" << std::endl;
std::cout << "5. Exit" << std::endl;
std::cout << "\nYour choice: ";

uint choice;
std::cin >> choice;

return choice;
}

void addVehicle() {
    std::string make;
    std::string model;
    uint vin;
    bool found = false;

    std::cout << "\nMake: " << std::endl;
    std::cin >> make;
    std::cout << "\nModel: " << std::endl;
    std::cin >> model;
    std::cout << "\nVIN: " << std::endl;
    std::cin >> vin;

    for (uint i{0}; i < 5; i++){
        if (globalArray[i].getVin() == 0){
            globalArray[i] = Vehicle(make, model, vin);
            std::cout << globalArray[i].toString() << std::endl;
            found = true;
            break;
        }
    }
    if (found){
        std::cout << "\nVehicle added to inventory" << std::endl;
    }
    else {
        std::cout << "\nInventory slot is full" << std::endl;
    }
}

void deleteVehicle() {

    bool found = false;
    std::cout << "\nVIN to delete: " << std::endl;
    uint vin;
    std::cin >> vin;

    for (uint i{0}; i < 5; i++){
        if (globalArray[i].getVin() == vin){
            globalArray[i].setVin(0);
            found = true;
            break;
        }
    }
        if (found){
            std::cout << "\nVehicle deleted" << std::endl;
        }
        else {
            std::cout << "\nVehicle does not exist in inventory" << std::endl;
        }

}

void searchForVehicle(){
    bool found = false;
    uint vin;
    std::cout << "VIN to display: ";
    std::cin >> vin;
    for (uint i{0}; i < 5; i++){
        if (globalArray[i].getVin() == vin){
            std::cout << "\nVIN\t\tMake\t\tModel\n" << std::endl;
            std::cout << globalArray[i].toString() << std::endl;

            found = true;
            break;
        }
    }
    if (!found){
        std::cout << "\nVehicle not found" << std::endl;
    }
    
}

void displayAllVehicles() {
    bool found = false;
    std::cout << "VIN\t\tMake\t\tModel" << std::endl;
    for (uint i{0}; i < 5; i++){
            if (globalArray[i].getVin() != 0){
                std::cout << globalArray[i].toString();
                std::cout << std::endl;
                found = true;
            }                    
    }
}
