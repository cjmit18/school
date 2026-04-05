/*Wayne Mitchell
CIS 269
Vehicle Inventory System
Driver File

NOTE ABOUT INEFFICIENCY:
This program reads the data file twice. The first pass counts the number of
lines so the array size can be determined. The second pass reads the data and
creates the objects. This is inefficient because the file must be opened and
processed two separate times instead of reading and storing the data in one pass.
*/

//Includes
#include <iostream>
#include <string>
#include <iomanip>
#include <sstream>
#include <fstream>
#include "vehicle.h"
#include "car.h"
#include "truck.h"
#include "BigO.h"

//Global Variables
typedef unsigned int uint;

Vehicle **globalArray;
BigO notate;
int user;

//Function Prototypes
int displayMenu();
void addVehicle();
void searchForVehicle();
void deleteVehicle();
void displayAllVehicles();

int countData();
void readData(int);

int arraySize = countData();


//Main
int main() {

    // Initialize array based on file line count
    globalArray = new Vehicle*[arraySize];
    for(int i = 0; i < arraySize; i++)
        globalArray[i] = nullptr;

    readData(arraySize);
    std::cout << "\n" <<notate.getBigO(arraySize) << std::endl;

    // Main menu loop
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
                std::cout << "\nGoodbye.\n" << std::endl;
                break;
            default:
                std::cout << "\nInvalid option.\n" << std::endl;
                break;
        }

    } while(user != 5);

return 0;
}


//Count lines in file
int countData(){
    
    std::ifstream file("07_vehicle_data.txt");
    std::string line;
    int count = 0;

    while(std::getline(file,line)){
        notate.updateTotalOperations(1);
        count++;
    }
    file.close();
    return count;
}


//Read data and create objects
void readData(int size){
    std::ifstream file("07_vehicle_data.txt");
    std::string line;

    int index = 0;

    // Parse each line and create appropriate vehicle object
    while(std::getline(file,line) && index < size){
        notate.updateTotalOperations(1);
        std::stringstream ss(line);
        std::string type;
        std::string vinStr;
        std::string make;
        std::string model;
        std::string extra;

        std::getline(ss,type,',');
        std::getline(ss,vinStr,',');
        std::getline(ss,make,',');
        std::getline(ss,model,',');
        std::getline(ss,extra,',');

        int vin = std::stoi(vinStr);

        if(type == "car"){

            Car *car = new Car(make,model,vin,extra);
            globalArray[index] = car;

        }
        else if(type == "truck"){

            int loadWeight = std::stoi(extra);
            Truck *truck = new Truck(make,model,vin,loadWeight);
            globalArray[index] = truck;

        }

        index++;
    }

    file.close();
}


//Menu
int displayMenu(){

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


//Add vehicle
void addVehicle(){

    std::string make;
    std::string model;
    std::string bodyStyle;
    std::string userResponse;

    BigO notation;

    int vin;
    bool found = false;

    std::cout << "What kind of vehicle would you like to add? (Car or Truck)\n";
    std::cin >> userResponse;

    if(userResponse == "car" || userResponse == "Car"){

        std::cout << "\nMake: ";
        std::cin >> make;

        std::cout << "\nModel: ";
        std::cin >> model;

        std::cout << "\nVIN: ";
        std::cin >> vin;

        std::cout << "\nBody Style: ";
        std::cin >> bodyStyle;

        Car *newCar = new Car(make,model,vin,bodyStyle);

        // Find first empty slot in array
        for(uint i=0;i<arraySize;i++){
            notation.updateTotalOperations(1);
            if(globalArray[i] == nullptr){
                globalArray[i] = newCar;
                found = true;
                break;
            }
        }

        if(found)
            std::cout << "\nVehicle added\n";
        else{
            std::cout << "\nInventory full\n";
            delete newCar;
        }
    }

    else if(userResponse == "truck" || userResponse == "Truck"){

        int loadWeight;

        std::cout << "\nMake: ";
        std::cin >> make;

        std::cout << "\nModel: ";
        std::cin >> model;

        std::cout << "\nVIN: ";
        std::cin >> vin;

        std::cout << "\nLoad Weight: ";
        std::cin >> loadWeight;

        Truck *newTruck = new Truck(make,model,vin,loadWeight);

        for(uint i=0;i<arraySize;i++){
            notation.updateTotalOperations(1);
            if(globalArray[i] == nullptr){
                globalArray[i] = newTruck;
                found = true;
                break;
            }
        }

        if(found)
            std::cout << "\nVehicle added\n";
        else{
            std::cout << "\nInventory full\n";
            delete newTruck;
        }
    }
    std::cout << "\n" << notation.getBigO(arraySize) << std::endl;
}


//Delete
void deleteVehicle(){

    BigO notation;

    bool found = false;
    int vin;
    std::cout << "\nVIN to delete: ";
    std::cin >> vin;

    // Search by VIN and free memory if found
    for(uint i=0;i<arraySize;i++){
        notation.updateTotalOperations(1);
        if(globalArray[i] != nullptr && globalArray[i]->getVin() == vin){

            delete globalArray[i];
            globalArray[i] = nullptr;
            found = true;
            break;
        }
    }

    if(found)
        std::cout << "\nVehicle deleted\n";
    else
        std::cout << "\nVehicle not found\n";

    std::cout << "\n" << notation.getBigO(arraySize) << std::endl;
}


//Search
void searchForVehicle(){

    BigO notation;

    bool found = false;
    int vin;
    std::cout << "VIN to display: ";
    std::cin >> vin;

    // Search array for matching VIN
    for(uint i=0;i<arraySize;i++){
        notation.updateTotalOperations(1);
        if(globalArray[i] != nullptr && globalArray[i]->getVin() == vin){

            std::cout << std::left
                      << std::setw(15) << "VIN"
                      << std::setw(15) << "Make"
                      << std::setw(15) << "Model"
                      << std::setw(15) << "Additional Info"
                      << std::endl;

            std::cout << globalArray[i]->toString() << std::endl;

            found = true;
            break;
        }
    }

    if(!found)
        std::cout << "\nVehicle not found\n";

    std::cout << "\n" << notation.getBigO(arraySize) << std::endl;
}


//Display all
void displayAllVehicles(){

    BigO notation;

    bool found = false;

    // Check if inventory has any vehicles
    for(uint i=0;i<arraySize;i++){
        notation.updateTotalOperations(1);
        if(globalArray[i] != nullptr){
            found = true;
            break;
        }
    }

    if(!found){
        std::cout << "\nNo vehicles in inventory\n";
        return;
    }

    std::cout << std::left
              << std::setw(15) << "VIN"
              << std::setw(15) << "Make"
              << std::setw(15) << "Model"
              << std::setw(15) << "Additional Info"
              << std::endl;

    for(uint i=0;i<arraySize;i++){
        notation.updateTotalOperations(1);
        if (globalArray[i] != nullptr)
            std::cout << globalArray[i]->toString() << std::endl;
    }
    std::cout << "\n" << notation.getBigO(arraySize) << std::endl;
}