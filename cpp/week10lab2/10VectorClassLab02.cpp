#include <iostream>
#include <vector>
#include <string>
#include "Dog.h"
using namespace std;

int main(){
	
	// STEP 1 - Copy and paste the body of main from Lab 01 between
	//			the lines here. Don't include the curly braces at 
	//			the beginning and end of main!
	//=============================================================
	//START OF LAB 01 main
		
	// STEP 1 - Use the vector class template to create a vector of
	//			dog objects. Do not use a size. Name the vector dogs.
	
	std::vector<Dog> dogs;
	// LCV for sentinel-controlled loop
	string breed;	
	
	// Initialization of LCV
	cout << "Enter a breed: ";
	cin >> breed;
	
	// Test of LCV - Sentinel-controlled loop - continue the loop while 
	//				 the user has not typed "quit"
	while (breed.compare("quit") != 0)
	{
		// Use the string entered by the user to instantiate
		// an object of the Dog class.
		Dog newdog{breed};
		
		// STEP 2 - Add the Dog object to the vector, using the 
		//			push_back() function of the vector.
		dogs.push_back(newdog);

		// Update of LCV
		cout << "Enter a breed: ";
		cin >> breed;
	}
	
	cout << "All dogs" << endl;
	
	// STEP 3 - Use a range-based for loop to display the breeds of the
	//			Dog objects by calling the getBreed() function of each 
	//			object in the vector.
	
	for (Dog& dog: dogs) {
		cout << dog.getBreed() << endl;
	}

	
	//END OF LAB 01 main
	//=============================================================

	// This loop searches the vector for any breed that equals "hound".
	// It then deletes that object from the vector. We need to start 
	// at end of the vector, and loop toward the start of the vector.
	
	// LCV - Index to track current location in vector.
	
	// STEP 1 - Initialize to the last index in the vector.
	int index = dogs.size() - 1;
	
	// STEP 2 - Add the test condition. The loop should
	// continue if we haven't reached the beginning of the vector.
	while (index >= 0)
	{
		// Compare the breed of the Dog object at the current index
		// to the string "hound".
		
		// STEP 3 - complete the condition below. Replace the ____
		// with the object at the current position in the vector,
		// using the vector function at().
		if (dogs.at(index).getBreed().compare("hound") == 0)
		{
			// If above condition is true, the breed of the Dog 
			// object at the current index equals the string "hound".
			// Then we will delete the object from the vector.
			
			// STEP 4 - Write the statement to delete the object
			//			at the current index using the vector
			//			function erase().
			
			dogs.erase(dogs.begin() + index);
		}
		
		// STEP 4 - Complete the update step. Remember we're starting
		//			at the end of the vector and moving toward the
		//			start of the vector.
		
		index--;
	}

	// Range-based for loop to display the breeds of the Dog objects,
	// after hounds have been deleted from vector.
	cout << endl << "No hounds:" << endl;
	for (Dog d : dogs)
	{
		cout << d.getBreed() << endl;
	}	

	

}
