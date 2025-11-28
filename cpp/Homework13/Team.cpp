#include "Team.h"
#include <iostream>
#include <iomanip>

// Print function - displays all players in the team
void Team::print() const {
    std::cout << "Your team:" << std::endl;
    int playerNum = 1;
    for (const Player& player : players) {
        std::cout << "Player " << playerNum << ": " << player.getJob() 
                  << " Level: " << player.getLevel() << std::endl;
        playerNum++;
    }
}

// Overloaded += operator - adds a Player to the team
Team& Team::operator+=(const Player& player) {
    players.push_back(player);
    return *this;
}

// Extra Credit: Overloaded prefix increment operator - adds a default Player
Team& Team::operator++() {
    Player defaultPlayer;  // Uses default constructor
    players.push_back(defaultPlayer);
    return *this;
}
