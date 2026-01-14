package edu.jjc.summer2025.week10b.assignment;

import java.util.InputMismatchException;
import java.util.Scanner;

// TODO: Prompt user for numerator and denominator, handle exceptions
public class DivideCalculator {
    public static void main(String[] args) {
        try (Scanner userInput = new Scanner(System.in)) {
            System.out.print("Enter numerator: ");
            int numerator = userInput.nextInt();

            System.out.print("Enter denominator: ");
            int denominator = userInput.nextInt();

            int result = numerator / denominator;
            System.out.println("Result: " + result);
        } catch (InputMismatchException e) {
            System.out.println("Error: Invalid input. Please enter integers only.");
        } catch (ArithmeticException e) {
            System.out.println("Error: Division by zero is not allowed.");
        } finally {
            System.out.println("Thank you for using the Divide Calculator.");
        }
    }
}
