#include <stdio.h>
/*Wayne Mitchell
Week 2 Homwork 2
CIS 236
*/

int main (void) // Main Function
{
	float user; // User input defines radius
	printf("Enter a value for the radius in inches: ");
	scanf("%f", &user);
	
	//variables storing calculations and radius
	float radius = user;
	float circumfrance = (2*3.14*radius);
	float area = (3.14 * (user*user));
	
	// Displaying calculations
	printf("The area of a circle with a radius of %.2f is %.2f\n" , radius,area);
	printf("The circumfrance of a circle with a radius of %.2f is %.2f\n", radius, circumfrance); 
}
