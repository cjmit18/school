#include <stdio.h>
#include <stdlib.h>
#include <string>
#include <sstream>
#include <iomanip>

#ifndef VEHICLE_H
#define VEHICLE_H

class Vehicle
{
    private:
        std::string make;
        std::string model;
        int vin{0}; 

    public:
        Vehicle() = default;
        Vehicle(const std::string& make, const std::string& model, int vin): make(make), model(model), vin(vin) {}

        
        std::string getMake() const { 
            return make; 
        }
        std::string getModel() const { 
            return model; 
        }
        int getVin() const { 
            return vin; 
        }


        void setMake(const std::string& make) { 
            this->make = make; 
        }
        void setModel(const std::string& model) { 
            this->model = model; 
        }
        void setVin(int vin) {
            this->vin = vin; 
        }

    std::string toString() const {
        std::ostringstream output;
        output << std::left << std::setw(10) << getVin()
               << std::setw(15) << getMake()
               << std::setw(15) << getModel();
        return output.str();
}

};
#endif // VEHICLE_H