// Boat.h
// Base class representing a generic boat with a length.
// Provides common interface used by derived types (Rowboat, Yacht).
#ifndef BOAT_H
#define BOAT_H
#include <string>

class Boat {
    private:
        float length;
    public:
    Boat(float len);

    void setLength(float);
    float getLength() const;
    std::string toString() const;

};
#endif