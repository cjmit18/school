#include <string>
#include <array>

using namespace std;

class LabClass {
	public:
		/*	STEP 2 - Create a function:
					 1. No parameters
					 2. Return value is int
					 3. Functionality - Use the sizeof operator to determine 
					    the size of each data member. Add those values and 
						return the sum.
		*/
		int computeSize() {
			int totalSize = sizeof(strArray) + sizeof(intMember) + sizeof(floatMember);
			return totalSize;
		}
		
		
	private:
		/*	STEP 1 - Create 3 data members:
					 1. one array of 100 strings
					 2. one integer
					 3. one float
		*/
		array<string, 100> strArray;
		int intMember;
		float floatMember;
		
};
