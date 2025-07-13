#include <stdio.h>

float calculateAverage(int values[], int size);

int main(void){
	int index;
	int total=0;
	float average;
	int array_size;
	
	printf("How many values? ");
	scanf("%d", &array_size);
	
	int values[array_size];
	
	for (index = 0; index < array_size; index++)
	{
		printf("Type a number: ");
		scanf("%d", &values[index]);
	}
	average = calculateAverage(values, array_size);
	printf("The average of these numbers is %.2f\n\n", average);
	return 0;
}
float calculateAverage(int values[], int size)
{
	int index;
	int total = 0;
	float average;
	
	for (index = 0; index < size; index++){
		total += values[index];
	}
	average = (float)total/size;
	return average;
}



