/* 
Wayne Mitchell
CIS 236
Week 10 Lab 1
This lab demonstrates creating an enum,
creating a variable of that enum's type,
and checking the value of an enum variable
*/
#include <string.h>
#include <stdio.h>

/* STEP 1 - Create an enum for the body
            style of a car. Include these
            enum constants: sedan, SUV, van.
*/
enum CarStyle {
    sedan = 1,
    SUV,
    van
};

int main(void)
{
    /* STEP 2 - Create a variable called "choice"
                with the data type of the enum 
                created in Step 1.
    */
    enum CarStyle choice;
    
    puts("Type 1 for sedan, 2 for SUV, 3 for van: ");
    scanf("%d", (int *)&choice);  // cast to int* to suppress warnings

    /* STEP 3 - Complete the switch statement.
    */
    switch (choice) 
    {
        case sedan:
            printf("You have chosen sedan\n");
            break;
        case SUV:
            printf("You have chosen SUV\n");
            break;
        case van:
            printf("You have chosen van\n");
            break;
        default:
            printf("Invalid choice.\n");
    }
    
    printf("Press Enter to continue...");
    getchar(); // consume the newline left by scanf
    getchar(); // wait for user to press Enter
    
    return 0;
}
