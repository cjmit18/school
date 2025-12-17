//Wayne Mitchell
//CIS 246
// Harbor simulation entry point
// Prints a simple table of randomly generated boats (Rowboats and Yachts)
// demonstrating polymorphic toString() output including length and oars/cabins.
#include "Boat.h"      // Base class providing length and shared interface
#include "Rowboat.h"   // Derived class with oars
#include "Yacht.h"     // Derived class with cabins
#include <iostream>
#include <fstream>
#include <array>
#include <string>


int main(){

    // Attempt to open the input data file containing boat definitions
    std::string fileText;
    std::fstream dataFile("16DataFile.txt", std::ios::in);
    if (!dataFile.is_open()){
        std::cerr << "File couldnt be opened" << std::endl;
        exit(EXIT_FAILURE);
    };

    // Prepare the output file that will store both the original and updated lists
    std::fstream updatedFile("Homework16Data.txt", std::ios::out);
    if (!updatedFile.is_open()){
        std::cerr << "File couldnt be opened" << std::endl;
        exit(EXIT_FAILURE);
    }
    std::array<Boat*, 20> shipArray;
    std::string type;
    float length;
    float speed;
    int xtra;
    int index = 0;

    // Read at most 20 boats from the file and construct the correct derived type
    while (dataFile >> type >> length >> speed >> xtra && index < 20)
    {
        // Create the appropriate boat type based on the record read
        if (type == "Rowboat"){
            shipArray[index] = new Rowboat(length, xtra);
        }

        if (type == "Yacht"){
            shipArray[index] = new Yacht(length, xtra);
        }
        index++;
}
    // Print and persist the initial list as read from the file
    std::cout << "Boat\t\tSpeed\t\tLength\t\tOars/Cabins" << std::endl;
    std::cout << "====\t\t=====\t\t======\t\t===========" << std::endl;
    updatedFile << "Boat\t\tSpeed\t\tLength\t\tOars/Cabins" << std::endl;
    updatedFile << "====\t\t=====\t\t======\t\t===========" << std::endl;
    for (unsigned int i = 0; i < index; i++){
        std::cout << shipArray[i]->toString() << std::endl;
        updatedFile << shipArray[i]->toString() << std::endl;
    }  

    // Accelerate each boat and output the updated state
    std::cout << "\nUpdated List\n" << std::endl;
    std::cout << "Boat\t\tSpeed\t\tLength\t\tOars/Cabins" << std::endl;
    std::cout << "====\t\t=====\t\t======\t\t===========" << std::endl;

    updatedFile << "\nUpdated List\n" << std::endl;
    updatedFile << "Boat\t\tSpeed\t\tLength\t\tOars/Cabins" << std::endl;
    updatedFile << "====\t\t=====\t\t======\t\t===========" << std::endl;

    for (unsigned int i = 0; i < index; i++){
        shipArray[i]->accelerate();
        std::cout << shipArray[i]->toString() << std::endl;
        updatedFile << shipArray[i]->toString() << std::endl;
    }
    updatedFile.close();
    dataFile.close();
    return 0;
}