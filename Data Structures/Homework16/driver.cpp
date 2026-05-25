#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include "vehicle.h"
#include "BigO.h"
/*Wayne Mitchell
CIS 269
Vehicle Sorting Driver
Week 16 Homework
This assignment reads vehicle data from a file, stores it in an array of Vehicle pointers, and sorts the vehicles by VIN using selection sort. 
The program also tracks the number of operations performed during sorting to estimate the asymptotic complexity.
*/
BigO bigO;
Vehicle **globalArray = new Vehicle*[12];
void readData(int);
void selectionsort(Vehicle* globalArray[], int n);
void printArray(Vehicle* globalArray[], int n);
int main() {
    readData(12); 
    std::cout << "Original Vehicle List:" << std::endl;
    std::cout << std::left << std::setw(15) << "VIN" << std::setw(15) << "Make" << std::setw(15) << "Model" << std::endl;
    std::cout << "---------------------------------------------" << std::endl;
    printArray(globalArray, 12);
    selectionsort(globalArray, 12);
    std::cout << "Selection Sorted Vehicles by VIN:" << std::endl;
    std::cout << "---------------------------------------------" << std::endl;
    printArray(globalArray, 12);
    // Clean up memory
    for (int i = 0; i < 12; i++) {
        delete globalArray[i];
    }
    delete[] globalArray;
    std::cout << bigO.getBigO(12) << std::endl;
    return 0;

    
}

void readData(int size){

    std::ifstream file("07_vehicle_data.txt");
    std::string line;

    int index = 0;

    // Parse each line and create appropriate vehicle object
    while(std::getline(file,line) && index < size){

        std::stringstream ss(line);
        std::string type;
        std::string vinStr;
        std::string make;
        std::string model;


        std::getline(ss, type,',');
        std::getline(ss,vinStr,',');
        std::getline(ss,make,',');
        std::getline(ss,model,',');

        int vin = std::stoi(vinStr);

        Vehicle* vehicle = new Vehicle(make, model, vin);
        globalArray[index] = vehicle;

        index++;
    }

    file.close();
}

void selectionsort(Vehicle* globalArray[], int n) {
    for (int i = 0; i < n - 1; i++) {
        bigO.updateTotalOperations(1); // i-loop comparison
        int least = i;
        bigO.updateTotalOperations(1); // assignment least = i

        for (int j = i + 1; j < n; j++) {
            bigO.updateTotalOperations(1); // j-loop comparison
            if (globalArray[j] != nullptr && globalArray[least] != nullptr) {
                bigO.updateTotalOperations(1); // VIN comparison
                if (globalArray[j]->getVin() < globalArray[least]->getVin()) {
                    least = j;
                    bigO.updateTotalOperations(1); // assignment least = j
                }
            }
        }

        // swap pointers (3 assignments)
        Vehicle* temp = globalArray[least]; bigO.updateTotalOperations(1);
        globalArray[least] = globalArray[i]; bigO.updateTotalOperations(1);
        globalArray[i] = temp; bigO.updateTotalOperations(1);
    }
}

void printArray(Vehicle* globalArray[], int n){
    for (int i = 0; i < n; i++) {
        if (globalArray[i] != nullptr) {
            std::cout << globalArray[i]->toString() << std::endl; // toString method handles formatting
        }
    }
}