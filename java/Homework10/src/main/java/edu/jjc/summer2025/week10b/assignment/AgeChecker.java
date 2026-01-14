package edu.jjc.summer2025.week10b.assignment;

import java.util.InputMismatchException;
import java.util.Scanner;

public class AgeChecker {
    public static void main(String[] args) {
        try (Scanner userInput = new Scanner(System.in)) {
            System.out.print("Enter your age: ");
            int age = userInput.nextInt();

            checkAge(age); // throws InvalidAgeException if invalid

            System.out.println("Age is accepted: [" + age + "]");
        } catch (InvalidAgeException e) {
            System.out.println("Invalid age: " + e.getMessage());
        } catch (InputMismatchException e) {
            System.out.println("Invalid input: please enter a whole number.");
        }
        finally {
            System.out.println("Thank you for using the Age Checker.");
        }
    }

    public static void checkAge(int age) throws InvalidAgeException {
        if (age < 18 || age > 120) {
            throw new InvalidAgeException("Age must be between 18 and 120.");
        }
    }
}
