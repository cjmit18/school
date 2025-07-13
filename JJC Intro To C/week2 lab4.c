#include <stdio.h>
/*Wayne Mitchell
Week 2 Lab 4
CIS 236
*/

int main (void)
{
	int major;
	printf("%s", "Type the first letter of a major: ");
	scanf("%c", &major);
	
	{
		// If either the lowercase c or the uppercase C, print Cybersecurity
		if (major == 'c' || major == 'C')
		{
			printf("Cybersecurity");
		}
		// If either the lowercase s or the uppercase S, print Computer science
		else if (major == 's' || major == 'S')
		{
			printf("Computer science");
		}
		// If either the lowercase n or the uppercase N, print Networking
		else if (major == 'n' || major == 'N')
		{
			printf("Networking");
		}
		// If either the lowercase w or the uppercase W, print Web development
		else if (major == 'w' || major == 'W')
		{
			printf("Web development");
		}
		// If none of the above, print Invalid major
		else
		{
			printf("Invalid major");
		}
	}
}

