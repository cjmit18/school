// Boat.cpp
// Implementation of the Boat base class: stores and formats boat length.
#include "Boat.h"
#include <sstream>
#include <iomanip>

// Construct a boat with a given length (feet/meters as desired by caller).
Boat::Boat(float len) : length(len) {}

void Boat::setLength(float len) {
    length = len;
}
float Boat::getLength() const {
    return  length;
}

// Format boat information as a string with two decimal places for length.
std::string Boat::toString() const {
    std::ostringstream output;
    output << std::fixed << std::setprecision(2);
    output << "Boat length: " << getLength();
    return output.str();
}