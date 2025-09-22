/* Wayne Mitchell
* CIS 246 
* Week 4 Lab 2
* This file defines the Car class with methods to set and get the number of doors,
* and to determine the car type based on the number of doors.
*/
#include <string>

class Car {
    public:
        void setDoors(int numberOfDoors) {
            doors = numberOfDoors;
        }
        int getDoors() const {
            return doors;
        }
        std::string GetCarType() {
            switch (doors) {
                case 2:
                    return "Coupe";
                case 4:
                    return "Sedan";
                default:
                    return "Unknown";
            }
        }
    private:
        int doors{0};
};