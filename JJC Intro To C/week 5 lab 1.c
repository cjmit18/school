/*
Wayne Mitchell
Week 5 Lab 1
Array Lab
*/
#include <stdio.h>

#define SIZE 5 //Constant to define the array 

int main(void)
{
	int index;
	int total = 0;
	float average;
	
	int numbers[SIZE]; // Define array and its size
	
	for (index = 0; index < SIZE; index++) //While index is less than the size keep asking for input
		printf("Type a number: ");
		scanf("%d", &numbers[index]);
	}
	for (index = 0; index<SIZE; index++) // while index is less than size add to total
	{
		total += numbers[index];
		}
	average = (float)total/SIZE;
	printf("The average of these numbers is %.2f\n\n", average);
	puts("Values in reverse order:");
	
	for (index = SIZE - 1; index>=0; index--) //Printing numbers in reverse
	{
		printf("%d\n", numbers[index]);
	}
	return 0;
}
