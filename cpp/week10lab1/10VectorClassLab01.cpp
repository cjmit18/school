#include <iostream>
#include <vector>
#include <string>
#include "Dog.h"
using namespace std;

int main(){
	
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
}
