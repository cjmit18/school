/*Wayne Mitchell
* CIS 261
* Homework 3
* Description: Date class and driver using private instance variables
*/
package main.java.edu.jjc.fall2025.homework3;
import java.util.Scanner;

public class DateDriver {

    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);

        // Instantiate a Date object with initial values
        Date date = new Date(1, 1, 2000);

        // Prompt the user for new values
        System.out.print("Enter new month: ");
        int month = input.nextInt();
        System.out.print("Enter new day: ");
        int day = input.nextInt();
        System.out.print("Enter new year: ");
        int year = input.nextInt(); 

        // Set new values
        date.setMonth(month);
        date.setDay(day);
        date.setYear(year);

        // Display the updated date
        System.out.println("Updated date: " + date.displayDate());
        input.close();
    }

}
