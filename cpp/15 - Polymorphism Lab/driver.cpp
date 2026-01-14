#include "Electronics.h"
#include "Computer.h"
#include <array>  // This is new.
#include <iostream>
using namespace std;

// NOTE - STEP 1 is in the Electronics.h file.

int main()
{
	// STEP 2 - Using the <array> class, create 
	//			an array of Electronics pointers,
	//			of size 2.
	std::array<Electronics*, 2> electronicArray;
	Electronics e{"Samsung"};	// Same as last week.
	
	// STEP 3 - Add the address of the above
	//			Electronics object to index 0 of the array.
	electronicArray[0] = &e;
	
	// STEP 4 - Add a Computer object to the array, using
	//			the following syntax:
	//	arrayname[1] = new Computer{brand name, OS};
		electronicArray[1] = new Computer{"Dell", "Windows"};
	// STEP 5 - Create a loop that calls each element's
	//			toString function.
	for (unsigned int i = 0; i < electronicArray.size(); i++){
			std::cout << electronicArray[i]->toString() << std::endl;
		}
	}
