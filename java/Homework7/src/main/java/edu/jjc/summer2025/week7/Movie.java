package src.main.java.edu.jjc.summer2025.week7;
//TODO: packages
public class Movie {
    // TODO: Declare private fields for title, genre, and durationMinutes
    private String title;
    private String genre;
    private int durationMinutes;
    // TODO: Create a constructor that initializes all fields
    public Movie(String title, String genre, int durationMinutes) {
        this.title = title;
        this.genre = genre;
        this.durationMinutes = durationMinutes;
    }
    // TODO: Create a method getDetails() that returns a formatted string like:
    // "Inception (Sci-Fi, 148 minutes)"

   public String getDetails() {
        return title + " (" + genre + ", " + durationMinutes + " minutes)";
}
}