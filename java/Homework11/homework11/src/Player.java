// Name: Wayne Mitchell
// Assignment: Program 11 - Player.java
// Description: Starter file for Player class in Rock-Paper-Scissors game

public class Player {
    private int play;

    // TODO: Create method to get play as a string
    public String getPlayAsString() {
        //student file
        switch (play) {
            case 1:
                return "rock";
            case 2:
                return "paper";
            case 3:
                return "scissors";
            default:
                return "invalid";
        }
    }
    // TODO: Overloaded method to set play using a string
    public void setPlay(String choice) {
        //student file
        if (choice.equalsIgnoreCase("rock")) {
            play = 1;
        } else if (choice.equalsIgnoreCase("paper")) {
            play = 2;
        } else if (choice.equalsIgnoreCase("scissors")) {
            play = 3;
        } else {
            play = 0; // Invalid play
        }
    }
    // TODO: Overloaded method to set play using an int
    public void setPlay(int choice) {
        //student file
        if (choice >= 1 && choice <= 3) {
            play = choice;
        } else {
            play = 0; // Invalid play
        }
    }
    // TODO: Method to return play as an int
    public int getPlayAsInt() {
        return play;
    }

    //student file
}