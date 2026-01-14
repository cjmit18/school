// Name: Wayne Mitchell
// Assignment: Program 11 - RPSDriver.java
// Description: Starter file for Rock-Paper-Scissors game

import java.util.Scanner;

public class RPSDriver {
    // TODO: Implement a generic method to determine the winner
    // Generic method to determine the winner from either Strings (rock/paper/scissors)
    // or Integers (1=rock, 2=paper, 3=scissors).
    private static <T> String determineWinner(T playerPlay, T computerPlay) {
        int p = toIntPlay(playerPlay);
        int c = toIntPlay(computerPlay);

        if (p == 0 || c == 0) {
            return "Invalid input";
        }
        if (p == c) {
            return "It's a tie";
        }
        if ((p == 1 && c == 3) || (p == 2 && c == 1) || (p == 3 && c == 2)) {
            return "Player wins";
        }
        return "Computer won";
    }

    // Helper to normalize a play (String or Integer)
    private static int toIntPlay(Object o) {
        if (o instanceof Integer) {
            int v = (Integer) o;
            return (v >= 1 && v <= 3) ? v : 0;
        }
        if (o instanceof String) {
            String s = ((String) o).trim().toLowerCase();
            switch (s) {
                case "rock":
                    return 1;
                case "paper":
                    return 2;
                case "scissors":
                    return 3;
                default:
                    return 0;
            }
        }
        return 0;
    }
    public static void main(String[] args) {
        // TODO: Create Scanner and Player objects
        Scanner scanner = new Scanner(System.in);
        Player player = new Player();
        Player computer = new Player();

        // TODO: Prompt user for choice: word or number input
        // Menu for input type
        System.out.println("Welcome to Rock Paper Scissors");
        System.out.println("1. Play by typing out the words");
        System.out.println("2. Play by typing numbers");
        System.out.println("3. Exit");
        System.out.print("What is your choice? ");

        String menuChoice = scanner.nextLine().trim();
        String result;

        switch (menuChoice) {
            case "1":
                // Word mode
                System.out.print("Type rock, paper, or scissors: ");
                String word = scanner.nextLine();
                // TODO: Based on input, call appropriate Player method
                player.setPlay(word);

                int compWord = (int) (Math.random() * 3) + 1;
                // TODO: Generate computer play using random number
                computer.setPlay(compWord);

                // Display plays
                System.out.println("You played: " + player.getPlayAsString());
                System.out.println("Computer played: " + computer.getPlayAsString());

                // TODO: Call winner determination method
                // Determine winner using generic method with Strings (method calls as args)
                result = determineWinner(player.getPlayAsString(), computer.getPlayAsString());
                // TODO: Print results
                System.out.println(result);
                break;

            case "2":
                // Number mode
                System.out.print("Type 1 for rock, 2 for paper, 3 for scissors: ");
                String numStr = scanner.nextLine().trim();
                int num;
                try {
                    num = Integer.parseInt(numStr);
                } catch (NumberFormatException e) {
                    System.out.println("Invalid number");
                    scanner.close();
                    return;
                }
                // TODO: Based on input, call appropriate Player method
                player.setPlay(num);

                int compNum = (int) (Math.random() * 3) + 1;
                // TODO: Generate computer play using random number
                computer.setPlay(compNum);

                // Display plays as words for readability
                System.out.println("You played: " + player.getPlayAsString());
                System.out.println("Computer played: " + computer.getPlayAsString());

                // TODO: Call winner determination method
                // Determine winner using generic method with ints (method calls as args)
                result = determineWinner(player.getPlayAsInt(), computer.getPlayAsInt());
                // TODO: Print results
                System.out.println(result);
                break;

            case "3":
                System.out.println("Goodbye!");
                scanner.close();
                return;

            default:
                System.out.println("Invalid choice");
                scanner.close();
                return;
        }

        scanner.close();
        //student file
    }
}