
#include <random>
#include <iostream>
#include <string>
#include <ctime>

class Player { 
    private:
        std::string playerChoiceStr;
        int playerChoiceInt;

    public:
    void setChoice(std::string data){
        if (data == "rock"){
            playerChoiceInt = 1;
        }
        else if (data == "paper"){
            playerChoiceInt = 2;
        }
        else if (data == "scissors"){
            playerChoiceInt = 3;
        }
        else {
            playerChoiceInt = 0;
        }
        playerChoiceStr = data;
    }

    void setChoice(int data){
        if (data == 1)
            playerChoiceStr = "rock";
        else if (data == 2)
            playerChoiceStr = "paper";
        else if (data == 3)
            playerChoiceStr = "scissors";
        else
            playerChoiceStr = "invalid choice";
        playerChoiceInt = data;
    }

    std::string getChoice(){
        return playerChoiceStr;
    }

    int generateChoice(){
        std::srand(std::time(0));
        int random = (std::rand() % 3) + 1;
        setChoice(random);
        return random;
    }

    std::string getWinner(Player player, Player computer) {
        if (player.playerChoiceInt == computer.playerChoiceInt) {
            return "It's a tie!";
        }
        else if ((player.playerChoiceInt == 1 && computer.playerChoiceInt == 3) ||
                 (player.playerChoiceInt == 2 && computer.playerChoiceInt == 1) ||
                 (player.playerChoiceInt == 3 && computer.playerChoiceInt == 2)) {
            return "Player wins!";
        }
        else {
            return "Computer wins!";
        }
    }

};

