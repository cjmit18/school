//TODO: packages
package src.main.java.edu.jjc.summer2025.week7;// Car.java

public class Theater {
    // TODO: Declare private fields for name, location, and a Movie array (size 5)
    private String name;
    private String location;
    private Movie[] movies;
    // TODO: Create a constructor that accepts name and location
    //       and initializes the movie array
    public Theater(String name, String location) {
        this.name = name;
        this.location = location;
        this.movies = new Movie[5]; // Array to hold 5 movies
    }
    // TODO: Create a method addMovie(Movie movie, int slot)
    //       that adds a movie to a specific slot (0–4)
    public void addMovie(Movie movie, int slot) {
        if (slot >= 0 && slot < 5) {
            movies[slot] = movie;
        } 
        else {
         System.out.println("Invalid slot. Please choose a slot between 0 and 4.");
        }
    }
    // TODO: Create a method printSchedule() that prints all 5 slots.
    //       If a slot is empty, print "[No Movie Scheduled]"
    public void printSchedule() {
        System.out.println("Welcome to : " + name + " - Location: " + location);
        System.out.println("\n---Today's Movie Schedule---\n");
        for (int i = 0; i < movies.length; i++) {
            System.out.print("Slot " + i + ": ");
            if (movies[i] != null) {
                System.out.println(movies[i].getDetails());
            } else {
                System.out.println("[No Movie Scheduled]");
            }
        }
    }
}