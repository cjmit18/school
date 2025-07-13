/*Wayne Mitchell
CIS 236
Week 4 Lab 2
Functions Lab Part 2
*/
#include <stdio.h>

int compute_results(int n1, int n2); //Compute function returning integer value

int main(void)
{
	//Variables
	int num1;
	int num2;
	int sum;
	
	//user defined variables
	puts("Enter the first number: ");
	scanf("%d", &num1);
	
	puts("Enter the second number: ");
	scanf("%d", &num2);
	
	sum = compute_results(num1, num2); //Calls compute function and returns sum that we can use
	printf("The sum of %d and %d is %d", num1, num2, sum);
}
int compute_results(int n1, int n2) //compute function logic
{
	int sum = n1 + n2;
	return sum; //returning value
}
