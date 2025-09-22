/*Wayne Mitchell
    Homework 4
    CIS 246
    Week 4
    This is the header file for the Cart class.
*/

#include <iostream>

class Cart {
    // Member variables
private:
    double total;
    bool hasSpiritWear;
    // Member functions
public:
    Cart(double initialTotal, bool initialSpiritWear)
    : total(initialTotal), hasSpiritWear(initialSpiritWear) {}

    void setSpiritWear(bool newSpiritWear) {
        hasSpiritWear = newSpiritWear;
    }
    bool getSpiritWear() const {
        return hasSpiritWear;
    }
    void setTotal(double newTotal) {
        total = newTotal;
    }
    double getTotal() const {
        return total;
    }

    double addTax(double amount) const{
        return amount * 0.04; // 4% tax
    }

    // Calculate total purchase amount including tax and discounts
    double getTotalPurchase() {
        double finalAmount = 0.0;

            // Apply discounts based on spirit wear and total amount
        if (hasSpiritWear && getTotal() >= 100.0) {
            finalAmount = getTotal() - (getTotal() * 0.09); // Apply 9% discount
        }
        else if (hasSpiritWear && getTotal() < 100.0) {
            finalAmount = getTotal() - (getTotal() * 0.06); // Apply 6% discount
        }
        else {
            finalAmount = getTotal(); // No discount
        }

        // Add tax to the final amount
        return finalAmount + addTax(finalAmount); // Add tax
    }
};