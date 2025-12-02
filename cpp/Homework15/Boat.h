// Boat.h
// Base class representing a generic boat with a length.
// Provides common interface used by derived types (Rowboat, Yacht).
#ifndef BOAT_H
#define BOAT_H
#include <string>

class Boat {
    private:
        float length = 0.0f;
        float speed = 0.0f;
    public:
    Boat(float len);

    void setLength(float);
    float getLength() const;
    virtual std::string toString() const;
    virtual void accelerate();
    void setSpeed(float);
    float getSpeed() const;
};
#endif