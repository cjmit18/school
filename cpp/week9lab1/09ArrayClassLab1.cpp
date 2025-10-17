#include <iostream>
#include <array>
#include <string>
#include "Dog.h"
using namespace std;

int main(){
	
	// STEP 1 - Use the array class template to create an array of
	//			dog objects. Use a size of 3.
	
	array <Dog, 3> dogs;
	string breed;
	
	for (int i = 0; i < 3; i++)
	{
		cout << "Enter a breed: ";
		cin >> breed;
		
		// STEP 2 - Use the string entered by the user to instantiate
		//			an object of the Dog class.
		
	Dog d{breed};
		// STEP 3 - Assign the Dog object created in Step 2 to the current 
		//			element of the array.
		
	dogs[i] = d;
	}
	
	cout << "All dogs" << endl;
	
	// STEP 4 - Use a standard counter-controlled loop to display the breeds of the
	//			Dog objects in the array.
	
	for (int i = 0; i < 3; i++)
	{
		cout << dogs[i].getBreed() << endl;
	}

}
