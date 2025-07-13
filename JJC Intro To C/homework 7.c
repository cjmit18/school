/*
Wayne Mitchell
CIS 236
Homework 7 
*/

#include <stdio.h>

// Function Prototypes
void getAccountInfo(int *accountNumber, int *gbUsed);
double calculateCharges(int gbUsed);
void displayTransaction(int accountNumber, int gbUsed, double charges);

int main() {
    // Declare only the variables needed for main
    int accountNumber = 0; // to store the account number entered by the user
    int gbUsed = 0;        // to store the number of GB used, entered by the user
    double charges = 0.0;  // to store the calculated charges

    // Get input from the user (calls function with output parameters)
    getAccountInfo(&accountNumber, &gbUsed);

    // Calculate charges (function returns a double value)
    charges = calculateCharges(gbUsed);

    // Display the transaction information
    displayTransaction(accountNumber, gbUsed, charges);

    return 0;
}

/*
 * Function: getAccountInfo
 * Purpose: Prompts user to enter account number and GB used, stores them via output parameters.
 * Parameters: 
 *      int *accountNumber - pointer to int where account number will be stored
 *      int *gbUsed       - pointer to int where GB used will be stored
 * Returns: none
 */
void getAccountInfo(int *accountNumber, int *gbUsed) {
    // Prompt for account number (no newline)
    printf("Enter account number: ");
    scanf("%d", accountNumber);

    // Prompt for GB used (no newline)
    printf("Enter GB used: ");
    scanf("%d", gbUsed);
}

/*
 * Function: calculateCharges
 * Purpose: Calculates total charges based on GB used and rate schedule.
 * Parameters: 
 *      int gbUsed - number of GB used (input)
 * Returns: 
 *      double - calculated total charges
 */
double calculateCharges(int gbUsed) {
    double rate = 0.0; // the per-GB rate, will be set according to usage

    // Use selection structure to determine rate
    if (gbUsed >= 0 && gbUsed <= 140) {
        rate = 0.21;
    } else if (gbUsed >= 141 && gbUsed <= 170) {
        rate = 0.19;
    } else if (gbUsed >= 171 && gbUsed <= 210) {
        rate = 0.15;
    } else if (gbUsed > 210) {
        rate = 0.11;
    }

    // Multiply usage by the rate to get the charges
    return gbUsed * rate;
}

/*
 * Function: displayTransaction
 * Purpose: Displays account number, GB used, and charges with correct alignment.
 * Parameters: 
 *      int accountNumber - account number (input)
 *      int gbUsed - GB used (input)
 *      double charges - calculated charges (input)
 * Returns: none
 */
void displayTransaction(int accountNumber, int gbUsed, double charges) {
    // Print a blank line before transaction info
    printf("\n\tTransaction Information:\n");
    // Right-align all numbers using field width (tab for labels, field for numbers)
    printf("\tAccount number:\t%5d\n", accountNumber);
    printf("\tGB Used:\t%5d\n", gbUsed);
    printf("\tCharges:\t%5.2f\n", charges);
}

