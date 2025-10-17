#include <iostream>
#include <array>
#include <string>
#include "Dog.h"
using namespace std;

int main(){
	
	// NOTE: This lab builds on Lab 01. It's ok to copy any necessary
	//			statements from the first lab.
	
	// STEP 1 - Use the array class template to create an array of
	//			dog objects. Use a size of 3.

	
	array<Dog, 3> dogs;
	
	string breed;
	
	for (int i = 0; i < 3; i++)
	{
		// STEP 2 - Enter a breed when prompted. Be sure that at
		//			least one breed you enter is "hound".
		cout << "Enter a breed: ";
		cin >> breed;
		
		// STEP 3 - Use the string entered by the user to instantiate
		//			an object of the Dog class.
		
		Dog dog{breed};
		// STEP 4 - Assign the Dog object created in Step 2 to the current 
		//			element of the array.
		
	dogs[i] = dog;
	}
	
	cout << endl << "Only hounds" << endl;
	
	// STEP 5 - Use a range-based for loop to display only the breeds that are "hound".
	//			You will have to use the compare function from the string library.
	// Comparing two strings:
	//	1. In an if statement, use a condition like this: string_variable.compare(string_variable) == 0
	//		If this condition is true, the strings match.
	//		If this condition is false, the strings do not match.
	//
	//	2. Note that this function also works with string literals:
	//			string_variable.compare("string literal") == 0	or
	//			"string literal".compare(string_variable) == 0  or 
	//			any combination of variables and literals.
	for (Dog dog : dogs){
	if (dog.getBreed().compare("hound") == 0)
	{
		cout << dog.getBreed() << endl;
	}
	}
};
