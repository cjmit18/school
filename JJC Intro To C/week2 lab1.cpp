/*
 * Name: Wayne Mitchell
 * Assignment: Lab 2 – Data Types Truth Table
 * Week 2 CIS 236
 */

#include <stdio.h> 

void demonstrate_initial(void);
void demonstrate_variations(void);

int main(void)
{
    demonstrate_initial();        // Run Part 1: simple print of an int variable
    demonstrate_variations();     // Run Part 3: all 8 truth-table variations
    return 0;                     // End of program
}

/*
 * Part 1: Declare an integer variable, assign it an integer literal,
 * and print it using "%d". Comment on the observed output.
 */
void demonstrate_initial(void)
{
    int x = 12;                   // Declare int variable x initialized to 12
    printf("%d\n", x);            // Print x with "%d"
    // Observation (Part 1): prints "12"
}

/*
 * 
 * 
 * Part 3: Implements all 8 combinations from the truth table:
 *   1) Variable type: int or float
 *   2) Literal value: int or float
 *   3) Format control string: "%d" or "%f"
 *
 * For each variation: declare variable, print with chosen FCS, then comment the result.
 */
void demonstrate_variations(void)
{
    /* Variation 1: int variable, int literal, "%d" (int FCS) */
    int intVar1 = 12;             // intVar1 holds integer 12
    printf("%d\n", intVar1);      // Print as int
    // Observation (Var #1): prints "12"

    /* Variation 2: int variable, int literal, "%f" (float FCS) */
    int intVar2 = 12;             // intVar2 holds integer 12
    printf("%f\n", intVar2);      // Undefined behavior: printf expects double
    // Observation (Var #2): prints "12"
    /* Variation 3: int variable, float literal, "%d" (int FCS) */
    int intVar3 = 12.34;          // float literal 12.34 truncated to 12
    printf("%d\n", intVar3);      // Print as int
	// Observation (Var #3): prints "0.0"
    /* Variation 4: int variable, float literal, "%f" (float FCS) */
    int intVar4 = 12.34;          // float literal 12.34 truncated to 12
    printf("%f\n", intVar4);      // Undefined behavior: printf expects double
	// Observation (Var #4): prints "12"
    /* Variation 5: float variable, int literal, "%d" (int FCS) */
    float floatVar5 = 12;         // floatVar5 holds 12.000000
    printf("%d\n", floatVar5);    // Undefined behavior: printf expects int
	// Observation (Var #5): prints "0.0"
    /* Variation 6: float variable, int literal, "%f" (float FCS) */
    float floatVar6 = 12;         // floatVar6 holds 12
    printf("%f\n", floatVar6);    // Print as float
    // Observation (Var #6): prints "12.000000"

    /* Variation 7: float variable, float literal, "%d" (int FCS) */
    float floatVar7 = 12.34f;     // floatVar7 holds approximately 12.340000
    printf("%d\n", floatVar7);    // Undefined behavior: printf expects int
	// Observation (Var #7): prints random numbers
    /* Variation 8: float variable, float literal, "%f" (float FCS) */
    float floatVar8 = 12.34f;     // floatVar8 holds approximately 12.340000
    printf("%f\n", floatVar8);    // Print as float
	// Observation (Var #1): prints "12.34"
}

