/*Wayne Mitchell
CIS 236
Week 3 Homework 1
Number Guessing Game
*/


#include <stdio.h> //Libraries
#include <stdlib.h>
#include <time.h>


int main(void) //Main Function
{
	srand(time(NULL));
	
	unsigned int random = 1 + rand() % 10;
	unsigned int guess;
	unsigned int amount;
	// Random number, guess and amount of guesses
	
	//While loop
	while (guess != random){
		printf("Guess a number between 1 and 10. Your guess: ");
		scanf("%d", &guess);
		++amount;
		//Nested if statments for too high/low
		if (guess > random){
			printf("Your guess is too high.");
	}
		else if (guess < random){
			printf("Your guess is too low.");
		}
	
	}
	//Amount of guesses displayed
	if (amount == 1){
		printf("It took you 1 Guess.\n");
	}
	else{
		printf("It took you %d guesses.\n", amount);
	}
	return 0;	
}

