package edu.jjc.fall2025.week13.homework13;
/*
 * Name: CJ Mitchell
 * Course: CIS 261 – Java Programming
 * Assignment: Week 13 - String Program
 * Description: This program performs various String handling functions including
 *              printing words forwards and backwards, counting words, and finding
 *              the longest and shortest words in user-provided text.
 */

import java.util.Scanner;

public class StringProgram {

    public static void main(String[] args) {

        // Create a Scanner to read input from the keyboard
        Scanner input = new Scanner(System.in);

        // Prompt the user to type some text
        System.out.println("Type some text and press enter:");
        String text = input.nextLine();

        // Display the text as entered
        System.out.println();
        System.out.println("You entered:");
        System.out.println(text);
        System.out.println();

        // Split the text into words using one or more spaces as separators
        // Students will use this "words" array for all remaining tasks
        String[] words = text.split("\\s+");

        // TODO: Print the words forwards
        System.out.println("Words printed forwards:");
        // Students: write code here to display each word in order
        for (int i = 0; i < words.length; i++) {
            System.out.print(words[i]);
            if (i < words.length - 1) {
                System.out.print(" ");
            }
        }
        System.out.println();
        System.out.println();
        

        // TODO: Print the words backwards
        System.out.println("Words printed backwards:");
        // Students: write code here to display each word in reverse order
        for (int i = words.length - 1; i >= 0; i--) {
            System.out.print(words[i]);
            if (i > 0) {
                System.out.print(" ");
            }
        }
        System.out.println();
        System.out.println();

        // TODO: Count the number of words and display the count
        // Students: use the words array to determine the total word count
        int wordCount = words.length;
        System.out.println("This text contains " + wordCount + " words.");

        // TODO: Find and display the longest word
        String longestWord = words[0];
        for (int i = 1; i < words.length; i++) {
            if (words[i].length() > longestWord.length()) {
                longestWord = words[i];
            }
        }
        System.out.println("Longest word is: " + longestWord);

        // TODO: Find and display the shortest word
        String shortestWord = words[0];
        for (int i = 1; i < words.length; i++) {
            if (words[i].length() < shortestWord.length()) {
                shortestWord = words[i];
            }
        }
        System.out.println("Shortest word is: " + shortestWord);

        // Close the Scanner
        input.close();
    }
}
