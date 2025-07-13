#include <stdio.h>
/*Wayne Mitchell
Week 2 Lab 4
CIS 236
*/

int main (void)
{
	char user_input;
	printf("Type a character: ");
	scanf("%c", &user_input);
	
	if (user_input >= 'a' && user_input <= 'z')
	{
		printf("True");
	}
    else if  (user_input >= 'A' && user_input <= 'Z')
	{
		printf("True");
	}
	else
	{
		printf("False");
	}
	return 0;
}
