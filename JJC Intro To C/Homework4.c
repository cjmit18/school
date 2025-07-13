/*
Wayne Mitchell
CIS 236
Week 3 Homework 1
This program calculates a purchase total including discounts and tax based on user input.
It uses functions to get the purchase amount, ask about spirit wear, and compute the final total.
Discount logic is handled using if-else selection structures.
*/

#include <stdio.h>  // For printf, scanf
#include <ctype.h>  // For tolower()

// === Function Prototypes ===

// Gets the purchase amount from the user
float get_purchase_amount(void);

// Asks the user if spirit wear is included
char ask_spirit_wear(void);

// Calculates and returns the final total with tax
float calculate_total(float amount, float tax);


// === Main Function ===
int main(void) {
    float purchase = get_purchase_amount();  // Step 1: get base amount
    char spirit = ask_spirit_wear();         // Step 2: check for spirit wear

    float discount = 0.0;

    // === Selection Logic ===
    if (tolower(spirit) == 'y') {
        // If purchase includes spirit wear
        if (purchase >= 100.0) {
            discount = 0.09;  // 9% discount
        } else {
            discount = 0.06;  // 6% discount
        }
    } // else: no discount

    float discount_amt = purchase * discount;
    float discounted_price = purchase - discount_amt;
    float tax = discounted_price * 0.04;  // 4% sales tax
    float total = calculate_total(discounted_price, tax);  // Final total

    // === Display Output ===
    printf("\nPurchase amount\t\t$%8.2f\n", purchase);
    if (discount > 0.0f) {
        printf("Discount (%.0f%%)\t\t$%8.2f\n", discount * 100, discount_amt);
        printf("After discount\t\t$%8.2f\n", discounted_price);
    }
    printf("Sales tax (4%%)\t\t$%8.2f\n", tax);
    printf("Total purchase\t\t$%8.2f\n", total);

    return 0;
}


// === Function Definitions ===

// Function 1: Prompt user for a float purchase amount
float get_purchase_amount(void) {
    float amt;
    printf("Enter the purchase amount> ");
    scanf("%f", &amt);
    fflush(stdin);  // Clear input buffer
    return amt;
}

// Function 2: Prompt user for Y/N response to Spirit Wear
char ask_spirit_wear(void) {
    char answer;
    printf("Does this purchase include Spirit Wear (Y/N)> ");
    scanf(" %c", &answer);  // leading space avoids newline issues
    fflush(stdin);          // Clear input buffer
    return answer;
}

// Function 3: Adds tax to amount and returns final total
float calculate_total(float amount, float tax) {
    return amount + tax;
}

