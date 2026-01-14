#include <iostream>


class Room {

public:
    Room(std::string newType, int newCapacity)
     : type(newType), capacity(newCapacity) 
     {}

    void setType(std::string newType){
        type = newType;
    }
    
    void setCapacity(int newCapacity){
        capacity = newCapacity;
    }

    std::string getType() const{
        return type;
    }

    int getCapacity() const{
        return capacity;
    }

private:
    std::string type;
    int capacity{0};
};