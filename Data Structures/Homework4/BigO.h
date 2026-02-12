#ifndef BIGO_H
#define BIGO_H

#include <iostream>
#include <string>
#include <cmath>

class BigO {
private:
    // Tracks cumulative operation count.
    int totalOperations{0};
public:
    // Adds operations to the running total.
    void updateTotalOperations(int operations) {
        totalOperations += operations;
    };

    // Returns the current total operations.
    int getTotalOperations() {
        return totalOperations;
    };

    // Estimates asymptotic complexity based on total operations and input size.
    std::string getBigO(int numberOfValues) {
        return "Asymptotic complexity is O(n^" + std::to_string((int) floor(log10(totalOperations)/log10(numberOfValues))) + ")";
    }
};
#endif // BIGO_H