package edu.jjc.summer2025.week8.homework8;
// Wayne Mitchell
// Program 8 - SpaceshipDriver class (Starter)
// Builds a fleet of Spaceships using random assignment

import java.util.Random;

public class SpaceshipDriver {
    public static void main(String[] args) {
        Random rand = new Random();

        for (int i = 0; i < 20; i++) {
            // Generate random boolean to simulate coin flip
            boolean isHeads = rand.nextBoolean();
            
            Spaceship ship;
            if (isHeads) {
                // Heads = Speeder
                ship = new Speeder(i);
            } else {
                // Tails = XWing
                ship = new XWing(i);
            }
            
            // Print spaceship details (toString is automatically called)
            System.out.println(ship);
        }
    }
}
