/* Wayne Mitchell
CIS 269
Vehicle Inventory System
Vehicle Class Header File
*/

//Includes
#include <iostream> 
#include <string>
#include <sstream>
#include <iomanip>

//Header Guard
#ifndef VEHICLE_H
#define VEHICLE_H

//Vehicle Class Declaration
class Vehicle{
    
    private:
        std::string make;
        std::string model;
        int vin{0}; 

    public:
        Vehicle() = default;
        Vehicle(const std::string& make, const std::string& model, int vin): make(make), model(model), vin(vin) {}
        

        //Getters and Setters
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

    //toString Method for Displaying Vehicle Information
  virtual std::string toString() const {
        std::ostringstream output;
        output << std::left << std::setw(15) << getVin() << std::setw(15) << getMake() << std::setw(15) << getModel();
        return output.str();
    }

};
#endif // VEHICLE_H