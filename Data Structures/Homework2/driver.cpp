/*Wayne Mitchell
CIS 269
Vehicle Inventory System
Driver File
*/

//Includes
#include <iostream>
#include <string>
#include "vehicle.h"
#include "car.h"
#include "truck.h"

//Global Variables
typedef unsigned int uint;
Vehicle globalArray[5];

//Function Prototypes
int displayMenu();
void addVehicle();
/* void searchForVehicle();
void deleteVehicle();
void displayAllVehicles(); */

int main() {
    //Main control loop
    int user;
    do {
        user = displayMenu();
        switch(user){
            case 1:
                addVehicle();
                break;
            case 2:
                //deleteVehicle();
                break;
            case 3:
                //searchForVehicle();
                break;
            case 4:
                //displayAllVehicles();
                break;
            case 5:
                std::cout << "\nGoodbye.\n" << std::endl;
                break;
            default:
                std::cout << "\nInvalid option.\n" << std::endl;
                break;
        }
    } while (user != 5);
return 0;
}

//Functions
int displayMenu() {

std::cout << "\nWelcome to the Vehicle Management Program\n" << std::endl;
std::cout << "1. Add Vehicle" << std::endl;
std::cout << "2. Delete Vehicle" << std::endl;
std::cout << "3. Search for a vehicle" << std::endl;
std::cout << "4. Display all Vehicles" << std::endl;
std::cout << "5. Exit" << std::endl;
std::cout << "\nYour choice: ";

int choice;
std::cin >> choice;

return choice;
}

void addVehicle() {
    //Local Variables
    std::string make;
    std::string model;
    std::string bodyStyle;
    std::string userResponse;
    int vin;
    bool found = false;

    std::cout << "What kind of vehicle would you like to add? (Car or Truck)" << std::endl;
    std::cin >> userResponse;
    //Input vehicle information based on type
    if (userResponse == "car" || userResponse == "Car"){
        std::cout << "\nMake: " << std::endl;
        std::cin >> make;
        std::cout << "\nModel: " << std::endl;
        std::cin >> model;
        std::cout << "\nVIN: " << std::endl;
        std::cin >> vin;
        std::cout << "\nBody Style: " << std::endl;
        std::cin >> bodyStyle;

        Car newCar(make, model, vin, bodyStyle);
        std::cout << "VIN\t\tMake\t\tModel\t\tBody Style" << std::endl;
        std::cout << newCar.toString() << std::endl;
    }

    else if (userResponse == "truck" || userResponse == "Truck"){
        std::cout << "\nMake: " << std::endl;
        std::cin >> make;
        std::cout << "\nModel: " << std::endl;
        std::cin >> model;
        std::cout << "\nVIN: " << std::endl;
        std::cin >> vin;
        int loadWeight;
        std::cout << "\nLoad Weight: " << std::endl;
        std::cin >> loadWeight;

        Truck newTruck(make, model, vin, loadWeight);
        std::cout << "VIN\t\tMake\t\tModel\t\tLoad Weight" << std::endl;
        std::cout << newTruck.toString() << std::endl;
    }

    else {
        std::cout << "\nInvalid vehicle type." << std::endl;
        return;
    }
}

/*     for (uint i{0}; i < 5; i++){
        Vehicle &vehicle = globalArray[i]; //Reference to avoid copying
        if (vehicle.getVin() == 0){
            vehicle = Vehicle(make, model, vin);
            std::cout << vehicle.toString() << std::endl;
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
    int vin;
    std::cin >> vin;

    for (uint i{0}; i < 5; i++){
        Vehicle &vehicle = globalArray[i]; //Reference to avoid copying
        if (vehicle.getVin() == vin){
            vehicle.setVin(0);
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
    int vin;
    std::cout << "VIN to display: ";
    std::cin >> vin;
    for (uint i{0}; i < 5; i++){
        Vehicle &vehicle = globalArray[i]; //Reference to avoid copying
        if (vehicle.getVin() == vin){
            std::cout << "\nVIN\t\tMake\t\tModel\n" << std::endl;
            std::cout << vehicle.toString() << std::endl;

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
        Vehicle &vehicle = globalArray[i]; //Reference to avoid copying
        if (vehicle.getVin() != 0){
            std::cout << vehicle.toString();
            std::cout << std::endl;
            found = true;
        }                    
    }
        */

