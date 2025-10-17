/* Wayne Mitchell
*  CIS 256
* Homework 7 - Rock, Paper, Scissors
*/ 
#include <iostream>
#include <string>
#include "Player.H"


int main() {

    std::cout << "Welcome to Rock, Paper, Scissors!" << std::endl;
    std::cout << "1. Play by typing out words\n"<<"2. Play by typing numbers\n"<< "3. Exit" << std::endl;

    int menuChoice;
    std::cin >> menuChoice;

    Player player;
    Player computer;

    if (menuChoice == 1){
        std::cout << "Type rock, paper, or scissors to play!" << std::endl;
        std::string choice;
        std::cin >> choice;
        player.setChoice(choice);
        std::cout << "Your choice was: " << player.getChoice() << std::endl;

    }
    else if (menuChoice == 2){
        std::cout << "Type 1 for rock, 2 for paper, or 3 for scissors to play!" << std::endl;
        int choice;
        std::cin >> choice;
        player.setChoice(choice);
        std::cout << "Your choice was: " << player.getChoice() << std::endl;
    }
    else {
        std::cout << "Exiting program." << std::endl;
        return 0;
    }

    
    computer.setChoice(computer.generateChoice());
    std::cout << "The computers choice was: " << computer.getChoice() << std::endl;
    
    std::cout << player.getWinner(player, computer) << std::endl;
    return 0;
};