/*Wayne Mitchell 
CIS 269
Vehicle Inventory System
Car Class Header File
*/

//Includes
#include "vehicle.h"
#include <string>
#include <iomanip>
#include <sstream>
//Header Guard
#ifndef CAR_H
#define CAR_H

//Car Class Declaration (Derived from Vehicle)

class Car : public Vehicle {
    private:
        std::string bodyStyle;
    public:
    Car() = default;
    Car(const std::string &make, const std::string &model, int vin, const std::string &bodyStyle)
        : Vehicle(make, model, vin), bodyStyle(bodyStyle) {}

    std::string getBodyStyle() const {
        return bodyStyle;
    }
    void setBodyStyle(const std::string& bodyStyle) {
        this->bodyStyle = bodyStyle;
    }
    std::string toString() const override {
        std::ostringstream output;
        output << Vehicle::toString()
               << std::setw(15) << bodyStyle;
        return output.str();
    }
};

#endif // CAR_H