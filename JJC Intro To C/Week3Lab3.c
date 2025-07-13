/*
Wayne Mitchell
CIS 236
Week 3 Lab 3
Loop for user defined amount of times 
*/

#include <stdio.h>
#include <string.h>

int main(void) //Main Function
	{
		int num; //Loop Amount Variable
		printf("How many times should this loop execute? "); //User specified loop amount
		scanf("%d", &num);
		
		for(int total = 0; total < num; total++){ //For loop starting from 0 to a number
			printf("\nThis loop has executed %d times", total + 1); //Output example starts at 1 so we add one since we have to start at 0
		}
	return 0;
	}
