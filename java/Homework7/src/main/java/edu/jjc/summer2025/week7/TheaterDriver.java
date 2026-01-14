package src.main.java.edu.jjc.summer2025.week7;
//TODO: packages
public class TheaterDriver {
    public static void main(String[] args) {
        // TODO: Create several Movie objects (e.g., 3–4 different movies)
            Movie movie1 = new Movie("Inception", "Sci-Fi", 148);
            Movie movie2 = new Movie("The Godfather", "Crime", 175);
            Movie movie3 = new Movie("Toy Story", "Animation", 81);
            Movie movie4 = new Movie("The Dark Knight", "Action", 152);
        // TODO: Create a Theater object and give it a name and location
            Theater theater = new Theater("Cineplex", "Chicago");
        // TODO: Add the movies to the schedule using addMovie()
            theater.addMovie(movie1, 0);
            theater.addMovie(movie2, 1);
            theater.addMovie(movie3, 2);
            theater.addMovie(movie4, 3);
        // TODO: Call printSchedule() to display the full schedule
            theater.printSchedule();
    }   
}