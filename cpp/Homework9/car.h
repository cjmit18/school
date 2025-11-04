#include <string>
class Car {
    private:
        std::string make;
        int price;
    public:
        Car() {}
        Car(std::string theMake, int thePrice)
        :make{theMake}, price{thePrice} {}
    
    void setMake(std::string theMake) {
        make = theMake;
    }
    std::string getMake() const{
        return make;
    }
    void setPrice(int thePrice) {
        price = thePrice;
    }
    int getPrice() const {
        return price;
    }
};