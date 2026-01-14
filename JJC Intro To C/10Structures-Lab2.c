/* Wayne Mitchell
 * 10 - Structures and Enums Homework
 * This program stores and displays movie information using structures,
 * functions, and enumerated types (for extra credit).
 */

#include <stdio.h>
#include <string.h>

// ENUM for genres
typedef enum {
    action,
    animation,
    drama,
    fantasy,
    superhero
} Genre;

// STRUCT for movie info
typedef struct {
    char title[26];   // max 25 characters + null
    int downloads;
    Genre genre;
} Movie;

// Function prototypes
void getMovieInfo(Movie *m);
void displayMovies(Movie movies[], int count);

// MAIN FUNCTION
int main(void) {
    int num;
    printf("How many movies to process? ");
    scanf("%d", &num);
    getchar(); // consume newline

    Movie movies[num];  // only one array

    // input
    for (int i = 0; i < num; i++) {
        getMovieInfo(&movies[i]);
    }

    // output
    displayMovies(movies, num);

    return 0;
}

// FUNCTION 1: get movie info from user
void getMovieInfo(Movie *m) {
    char buffer[50]; // local for overflow handling
    int len;

    printf("\nTitle of movie (max 25 chars): ");
    fgets(buffer, sizeof(buffer), stdin);

    // Remove trailing newline from fgets
    len = strlen(buffer);
    if (len > 0 && buffer[len - 1] == '\n') {
        buffer[len - 1] = '\0';
        len--;
    }

    if (len > 25) {
        printf("Title exceeds 25 characters and will be truncated\n");
        strncpy(m->title, buffer, 25);
        m->title[25] = '\0';
    } else {
        strcpy(m->title, buffer);
    }

    printf("Number of downloads: ");
    scanf("%d", &m->downloads);
    getchar(); // consume newline

    // Genre input
    int g;
    while (1) {
        printf("Genre (0-action, 1-animation, 2-drama, 3-fantasy, 4-superhero): ");
        scanf("%d", &g);
        getchar(); // flush newline

        if (g >= action && g <= superhero) {
            m->genre = (Genre)g;
            break;
        } else {
            printf("Invalid genre\n");
        }
    }
}

// FUNCTION 2: display movie list
void displayMovies(Movie movies[], int count) {
    printf("\n\tTitle\t\t\tDownloads\tGenre\n");
    printf("\t===== \t\t\t=========\t=====\n");

    for (int i = 0; i < count; i++) {
        printf("\t%-25s\t%-9d\t", movies[i].title, movies[i].downloads);

        // print genre text
        switch (movies[i].genre) {
            case action: printf("Action"); break;
            case animation: printf("Animation"); break;
            case drama: printf("Drama"); break;
            case fantasy: printf("Fantasy"); break;
            case superhero: printf("Superhero"); break;
            default: printf("Unknown");
        }

        printf("\n");
    }
}

