/*Wayne Mitchell
 CIS 236
 Week 3 Lab 2
 Counting using a loop
*/

#include <stdio.h>

int main(void) // Main Function
{
	int num; // Control Variable
	int total = 0; // Total Amount
	
	printf("Enter an integer: "); //Enter Loop
	scanf("%d", &num);
	
	while (num != -1){	//Control
		total += num;
		printf("Enter an integer: ");
		scanf("%d", &num);
	}
	printf("The total is %d", total); //Printout
	return 0;
}

