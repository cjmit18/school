#include <iostream>
#include <iomanip>
#include <array>
#include "Player.h"

int main() {
    std::cout << "What is your first player's class? " << std::endl;
    std::string jobInput;
    std::cin >> jobInput;

    std::cout << "What is your first player's level? " << std::endl;
    int levelInput;
    std::cin >> levelInput;

    Player player1{jobInput, levelInput};

    std::cout << "What is your second player's class? "<< std::endl;
    std::cin >> jobInput;

    Player player2{jobInput};

    Player player3{};

    std::array<Player, 3> players = {player1, player2, player3};

    std::cout << "Your team:" << std::endl;
    for (size_t i = 0; i < players.size(); ++i) {
        std::cout << "Player " << (i + 1) << ": " << players[i].getJob() 
        << std::right << std::setw(20) << "Level: " << players[i].getLevel() << std::endl;
    }
    return 0;
}
