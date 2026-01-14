/*Wayne Mitchell
    Homework 13
    main.cpp
    This program creates a Team object and uses operator overloading to add Player objects
    to the team. It demonstrates the += compound assignment operator and displays all players
    in a formatted list.
*/
#include <iostream>
#include <string>
#include "Team.h"
#include "Player.h"

int main() {
    Team team;
    std::string jobInput;
    int levelInput;
    
    // Player 1: Prompt for both class and level
    std::cout << "Enter player 1 class: ";
    std::cin >> jobInput;
    std::cout << "Enter player 1 level: ";
    std::cin >> levelInput;
    
    Player player1(jobInput, levelInput);
    team += player1;
    
    // Player 2: Prompt for just the class
    std::cout << "Enter player 2 class: ";
    std::cin >> jobInput;
    Player player2(jobInput);
    team += player2;
    
    // Player 3: Use default values
    Player player3;
    team += player3;
    
    // Display the team
    team.print();
    
    return 0;
}
