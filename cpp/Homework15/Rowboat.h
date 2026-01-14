// Rowboat.h
// Derived Boat that adds an integer count of oars.
// Exposes setters/getters and a formatted toString() including length and oars.
#ifndef ROWBOAT_H
#define ROWBOAT_H

#include <string>
#include "Boat.h"

class Rowboat : public Boat {
    private:
        int oars;

    public:
    Rowboat(float len, int numOfOar);
    
    void setOars(int);
    int getOars() const;
    std::string toString() const;
    void accelerate();
};
#endif