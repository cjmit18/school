#include <stdio.h>
/*Wayne Mitchell
Week 2 Lab 4
CIS 236
*/

int main (void)
{
	float user;
	printf("Enter a value for the radius in inches: ");
	scanf("%f", &user);
	
	float radius = user;
	float circumfrance = (2*3.14*radius);
	float area = (3.14 * (user*user));
	printf("The area of a circle with a radius of %.2f is %.2f\n" , radius,area);
	printf("The circumfrance of a circle with a radius of %.2f is %.2f\n", radius, circumfrance); 
}
