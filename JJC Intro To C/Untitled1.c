//This program pro,pts the user for a temperature in 
//Fehrenheit and displays tje result to the screen


/*
This program pro,pts the user for a temperature in 
Fehrenheit and displays tje result to the screen
This program prompts the user for a temperature in
Fahrenheit, converts the temperature to Celsius, and
displays the result to the screen.
*/
#include <stdio.h>
#include <stdlib.h>
int main (void)
{
	//Variable declarations
	double tempInFahrenheit;
	double tempInCelcius;
	
	//Displays a prompt so the user knows what to do
	printf("Enter the temperature in Fahrenheit: ");
	
	/*
	Reads the number typed by the user, and saves it into
	the variable tempInFahrenheit
	*/
	 scanf("%lf", &tempInFahrenheit);
	 
	//Computes the temperature in Celcius
	tempInCelcius = (tempInFahrenheit - 32) / 1.8;
	
	//T(F) - 32 / 1.8 // Conversion forumal for reference
	
	//Displays the Temperature in Celcius
	printf("%.2f F converts to %.2f degrees C", tempInFahrenheit, tempInCelcius);
	
	//All C programs need return at the end of main
	return (0);
}
