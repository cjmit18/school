/*Wayne Mitchell
CIS 236
Week 5 Lab 2
Arrays Lab
*/
#include <stdio.h>

float calculateAverage(int values[], int size); // Average Calculation Function

int main(void) // Main function to establish list length and amount of numbers
{
	int index;
	int total=0;
	float average;
	int array_size;
	
	//User inputs
	printf("How many values? ");
	scanf("%d", &array_size);
	
	int values[array_size];
	
	for (index = 0; index < array_size; index++) // Ask the user for a number 
	{
		printf("Type a number: ");
		scanf("%d", &values[index]);
	}
	average = calculateAverage(values, array_size);
	printf("The average of these numbers is %.2f\n\n", average);
	return 0;
}
float calculateAverage(int values[], int size) //Function to add and divide 
{
	int index;
	int total = 0;
	float average;
	
	for (index = 0; index < size; index++) // For loop adding values and dividing by total amount
	{
		total += values[index];
	}
	average = (float)total/size; // average calculation
	return average;
}



