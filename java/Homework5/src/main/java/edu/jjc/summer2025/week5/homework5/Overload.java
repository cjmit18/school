package src.main.java.edu.jjc.summer2025.week5.homework5;

// name: Wayne Mitchell
// Program 4 - Overloaded methods to compute highest number
// This program prompts the user for integer and double inputs, then uses overloaded methods to determine the highest value.

import java.util.Scanner;

public class Overload {
    public static void main(String[] args) {
        // Create one Scanner object (extra credit opportunity)
        Scanner sc = new Scanner(System.in);

        // Prompt and read two integers
        System.out.print("Enter 2 integers, separated by a space, on a single line: ");
        int num1 = sc.nextInt();
        int num2 = sc.nextInt();
        System.out.println("Highest number is " + computeHighNum(num1, num2));

        // Prompt and read three integers
        System.out.print("Enter 3 integers, separated by spaces, on a single line: ");
        int int1 = sc.nextInt();
        int int2 = sc.nextInt();
        int int3 = sc.nextInt();
        System.out.println("Highest number is " + computeHighNum(int1, int2, int3));

        // Prompt and read two doubles
        System.out.print("Enter 2 doubles, separated by a space, on a single line: ");
        double d1 = sc.nextDouble();
        double d2 = sc.nextDouble();
        System.out.println("Highest number is " + computeHighNum(d1, d2));

        // Prompt and read three doubles
        System.out.print("Enter 3 doubles, separated by spaces, on a single line: ");
        double dbl1 = sc.nextDouble();
        double dbl2 = sc.nextDouble();
        double dbl3 = sc.nextDouble();
        System.out.println("Highest number is " + computeHighNum(dbl1, dbl2, dbl3));

        sc.close(); // Close scanner
    }

    // Overloaded method for 2 integers
    public static int computeHighNum(int a, int b) {
        // Use ternary operator (extra credit opportunity)
        return (a > b) ? a : b;
    }

    // Overloaded method for 3 integers
    public static int computeHighNum(int a, int b, int c) {
        // Use nested ternary operator
        return (a > b) ? ((a > c) ? a : c) : ((b > c) ? b : c);

    }

    // Overloaded method for 2 doubles
    public static double computeHighNum(double a, double b) {
        return (a > b) ? a : b;
    }

    // Overloaded method for 3 doubles
    public static double computeHighNum(double a, double b, double c) {
        return (a > b) ? ((a > c) ? a : c) : ((b > c) ? b : c);
    }
}
