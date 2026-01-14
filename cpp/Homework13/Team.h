#ifndef TEAM_H
#define TEAM_H

#include <vector>
#include "Player.h"

class Team {
    private:
        std::vector<Player> players;
    public:
        // Print function to display all players
        void print() const;
        
        // Overloaded += operator to add a Player to the team
        Team& operator+=(const Player& player);
        
        // Extra Credit: Overloaded prefix increment operator
        Team& operator++();
};

#endif
