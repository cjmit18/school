/*Wayne Mitchell
    Homework 13
    main_extra_credit.cpp
    This program creates a Team object and uses operator overloading to add Player objects
    to the team. It demonstrates the += compound assignment operator and the prefix ++
    operator (extra credit) to add a default player.
*/
#include <iostream>
#include <string>
#include "Team.h"
#include "Player.h"

int main() {
    // Create a Team object
    Team team;
    
    // Player 1: Prompt for both class and level
    std::string jobInput;
    int levelInput;
    
    std::cout << "Enter player 1 class: ";
    std::cin >> jobInput;
    std::cout << "Enter player 1 level: ";
    std::cin >> levelInput;
    
    Player player1(jobInput, levelInput);
    team += player1;  // Use overloaded += operator
    
    // Player 2: Prompt for just the class
    std::cout << "Enter player 2 class: ";
    std::cin >> jobInput;
    
    Player player2(jobInput);
    team += player2;  // Use overloaded += operator
    
    // Player 3: Use prefix increment operator (EXTRA CREDIT)
    ++team;  // Uses overloaded prefix increment operator to add default player
    
    // Display the team
    team.print();
    
    return 0;
}
