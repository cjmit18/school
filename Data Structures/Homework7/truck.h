/*Wayne Mitchell 
CIS 269
Vehicle Inventory System
Truck Class Header File
*/

//Includes
#include "vehicle.h"
#include <string>
#include <sstream>

//Header Guard
#ifndef TRUCK_H
#define TRUCK_H

//Truck Class Declaration (Derived from Vehicle)
class Truck : public Vehicle {
    private:
        int loadWeight{0};
    public:
    Truck() = default;
    Truck(const std::string &make,const std::string &model,int vin, int loadWeight)
        : Vehicle(make, model, vin), loadWeight(loadWeight) {}

    int getLoadWeight() const {
        return loadWeight;
    }
    void setLoadWeight(int loadWeight) {
        this->loadWeight = loadWeight;
    }
    std::string toString() const override {
        std::ostringstream output;
        output << Vehicle::toString() << std::left << std::setw(15) << getLoadWeight();
        return output.str();
    }
};
#endif // TRUCK_H

