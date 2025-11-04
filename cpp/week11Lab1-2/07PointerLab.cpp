#include <iostream>
#include "07LabClass.h"
#include <array>

using namespace std;

void printSizeOfObject(LabClass);
void printSizeOfPointer(LabClass *);

int main()
{
	//	STEP 4 - Instantiate an object of the LabClass	
	LabClass labObj;
	
	//	STEP 5 - Create a pointer to the above object.
	LabClass* labPtr = &labObj;
	
	/*	STEP 6 - Call printSizeOfObject with the object 
				 as a parameter.
	*/
	printSizeOfObject(labObj);
	
	std::cout << std::endl;

	/*	STEP 7 - Call printSizeOfPointer with the pointer 
				 as a parameter.
	*/
	printSizeOfPointer(labPtr);
	
}

void printSizeOfObject(LabClass lc)
{
	std::cout << "In printSizeOfObject:" << std::endl;
	
	/*	STEP 1 - Call the function in the LabClass object
				 parameter that computes the size. Display 
				 the results with a label that indicates how
				 the value was determined.
	*/
	int size = lc.computeSize();
	cout << "Size computed using computeSize(): " << size << " bytes" << endl;
	/*	STEP 2 - Use the sizeof operator to determine the size
				 of the parameter. Display the results with a 
				 label that indicates how the value was determined.
	*/
	int sizeTwo = sizeof(lc);
	cout << "Size computed using sizeof operator: " << sizeTwo << " bytes" << endl;
}

void printSizeOfPointer(LabClass* lc)
{
	cout << "In printSizeOfPointer:" << endl;
	
	/*	STEP 3 - Use the sizeof operator to determine the size
				 of the parameter. Display the results with a 
				 label that indicates how the value was determined.
	*/
	int size = sizeof(lc);
	cout << "Size computed using sizeof operator on pointer: " << size << " bytes" << endl;
	
}
