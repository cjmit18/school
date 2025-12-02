// Rowboat.cpp
// Implementation of Rowboat: initializes oars and formats output with length and oar count.
#include "Rowboat.h"
#include <sstream>
#include <iomanip>

// Construct a Rowboat with a given length and number of oars.
Rowboat::Rowboat(float len, int numOars ) : Boat(len), oars(numOars){}

// Set the number of oars.
void Rowboat::setOars(int numOars) {
    oars = numOars;
}
// Get the number of oars.
int Rowboat::getOars() const {
    return oars;
}
// Format rowboat information including length and oars, tab-aligned.
std::string Rowboat::toString() const {
    std::ostringstream output;
    output << std::fixed << std::setprecision(2);
    output << "Rowboat\t\t" << getLength() << "\t\t" << getOars();
    return output.str();
}