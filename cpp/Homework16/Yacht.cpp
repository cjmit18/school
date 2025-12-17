// Yacht.cpp
// Implementation of Yacht: initializes cabins and formats output with length and cabin count.
#include "Yacht.h"
#include <sstream>
#include <iomanip>

// Construct a Yacht with a given length and number of cabins.
Yacht::Yacht(float len, int numCabins) : Boat(len), cabins(numCabins){}

// Set the number of cabins.
void Yacht::setCabins(int numCabins) {
    cabins = numCabins;
}
// Get the number of cabins.
int Yacht::getCabins() const {
    return cabins;
}

void Yacht::accelerate() {
   Boat::setSpeed(5.80 * getLength());
}

// Format yacht information including length and cabins, tab-aligned.
std::string Yacht::toString() const {
    std::ostringstream output;
    output << std::fixed << std::setprecision(2);
    output << "Yacht\t\t" << getSpeed() << "\t\t" << getLength() << "\t\t" << getCabins();
    return output.str();
}