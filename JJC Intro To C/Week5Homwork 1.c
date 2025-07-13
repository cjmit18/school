/*
 Wayne Mitchell
 CIS 236
 Week 5 Homework 1
 Array Part 1
*/

#include <stdio.h>

// STEP 1/2 – symbolic constant for exactly six levels
#define SIZE 6

// Prototype for the function that increments the correct level count
void updateLevelCount(int health, int counts[]);

// Prototype for the function that prints the final totals
void displayTotals(int counts[]);

int main(void)
{
    int health;              // holds the health points entered by the user
    int counts[SIZE] = {0};  // array storing counts for levels 1–6, all start at 0

    // Prompt for the first health-point value
    printf("Player points (-1 to quit): ");
    scanf("%d", &health);    // read into 'health'

    // SENTINEL-CONTROLLED LOOP: repeat until user enters -1
    while (health != -1)
    {
        // STEP 1: classify this health value into a level and increment that slot
        updateLevelCount(health, counts);

        // Prompt for the next health-point value
        printf("Player points (-1 to quit): ");
        scanf("%d", &health);  // read into 'health'
    }

    // Blank line before the totals
    printf("\n");

    // STEP 2: display all six level totals
    displayTotals(counts);

    return 0;  // normal program termination
}

/*
 updateLevelCount:
 Determines which of the six ranges 'health' falls into and bumps that count.
	Ranges:
    0–9    Level 1 (counts[0])
    10–19  Level 2 (counts[1])
    20–29  Level 3 (counts[2])
    30–39  Level 4 (counts[3])
    40–49  level 5 (counts[4])
    50+    Level 6 (counts[5])
*/
void updateLevelCount(int health, int counts[])
{
    if (health >= 0 && health <= 9)
    {
        counts[0]++;    // Level 1
    }
    else if (health <= 19)
    {
        counts[1]++;    // Level 2
    }
    else if (health <= 29)
    {
        counts[2]++;    // Level 3
    }
    else if (health <= 39)
    {
        counts[3]++;    // Level 4
    }
    else if (health <= 49)
    {
        counts[4]++;    // Level 5
    }
    else
    {
        counts[5]++;    // Level 6
    }
}

//   Prints a header ("T O T A L S") and then each "Level n count" on its own line.

void displayTotals(int counts[])
{
    int i;  // loop index for Levels 1 through 6

    // Title for the chart
    printf("T O T A L S\n\n");

    // Loop over all levels and print "Level <n>\t<count>"
    for (i = 0; i < SIZE; i++)
    {
        printf("Level %d\t%d\n", i + 1, counts[i]);
    }
}

