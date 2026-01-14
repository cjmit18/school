//Wayne Mitchell
//CIS 246
// Harbor simulation entry point
// Prints a simple table of randomly generated boats (Rowboats and Yachts)
// demonstrating polymorphic toString() output including length and oars/cabins.
#include "Boat.h"      // Base class providing length and shared interface
#include "Rowboat.h"   // Derived class with oars
#include "Yacht.h"     // Derived class with cabins
#include <cstdlib>
#include <ctime>
#include <ostream>
#include <iomanip>
#include <iostream>
int main(){
    // Seed RNG for varied coin flips and counts
    srand(static_cast <unsigned int> (time(0)));
    std::cout << "Boat\t\tLength\t\tOars/Cabins" << std::endl;
    std::cout << "====\t\t======\t\t===========" << std::endl;
    // Generate 20 boats, alternating randomly between Rowboat and Yacht
    for (unsigned int i = 0; i < 20; i++){
        int coinflip = (rand() % 2); // 0 => Rowboat, 1 => Yacht
        if (coinflip == 0) {
            // Length grows slightly with i; oars is 1..100
            Rowboat rowBoat((i * 1.23f + 500.0f), (1 + std::rand() % 100));
            std::cout << rowBoat.toString() << std::endl;
        }
        if (coinflip == 1) {
            // Length grows slightly with i; cabins is 1..100
            Yacht yachtBoat((i * 1.23f + 500.0f), (1 + std::rand() % 100));
            std::cout << yachtBoat.toString() << std::endl;

        }
    }
    return 0;
}