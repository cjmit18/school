
// Yacht.h
// Derived Boat that adds an integer count of cabins.
// Exposes setters/getters and a formatted toString() including length and cabins.
#ifndef Yacht_H
#define Yacht_H
#include <string>
#include "Boat.h"
class Yacht : public Boat {
    private:
        int cabins;
    public:
    Yacht(float length, int numCabins);
    void setCabins(int);
    int getCabins() const;
    std::string toString() const;
    void accelerate();
};
#endif