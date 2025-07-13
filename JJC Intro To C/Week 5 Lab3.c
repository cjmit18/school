/*
Wayne Mitchell
CIS 236
Week 5 Lab 3
Arrays Part 2
*/

#include <stdio.h>
#define SIZE 5 // Size of array is 5


int main(void)
{
	//Variables
	int index;
	int count[SIZE] = {0}; // Amount of students per grade
	char grades[SIZE] = {'A', 'B', 'C', 
	'D', 'F'}; //Grades
	
	for (index = 0; index < SIZE; index++) //User input to add the amount of students with each 
	{
		printf("How many students earned a grade of %c? ", grades[index]);
		scanf("%d", &count[index]);
		fflush(stdin);
	}
	printf("\n%-8s%-7s\n", "Grade", "Count"); // Header
	
	for (index = 0; index < SIZE; index++)
	{
		printf("\n%-8c%5d", grades[index], count[index]); //Amount of students per grade displayed
	}
	
	return 0;
}
