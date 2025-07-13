# include <stdio.h>

#define SIZE 5


int main(void)
{
	int index;
	int total = 0;
	float average;
	
	int numbers[SIZE];
	
	for (index = 0; index < SIZE; index++)
	{
		printf("Type a number: ");
		scanf("%d", numbers[index]);
	}
	for (index = 0; index<SIZE; index++)
		total += numbers[index];
		
	average = (float)total/SIZE;
	printf("The average of these numbers is %2.f/n/n", average);
	puts("Values in reverse order:");
	
	for (index = SIZE - 1; index>=0 index--)
		printf("%d\n", numbers[index]);
	return 0;
}
