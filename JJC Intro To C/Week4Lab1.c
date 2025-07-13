/*Wayne Mitchell
CIS 236
Week 4 Lab 1
Functions Lab
*/
#include <stdio.h>

void print_results(int n1, int n2, int sum); //Defining function

int main(void) //Main function 
{
	int num1;
	int num2; //Variables
	
	//Gathering user info to add numbers together
	puts("Enter the first number: ");
	scanf("%d", &num1);
	
	puts("Enter the second number: ");
	scanf("%d", &num2);
	
	int sum = num1 + num2;
	print_results(num1, num2, sum); //calling function and giving data
}
void print_results(int n1,int n2,int sum) //Actual function logic
{
	printf("The sum of %d and %d is %d",n1 ,n2 ,sum);
}
