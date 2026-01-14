#ifndef TEST_H
#define TEST_H

class Test{
	private:
		int intVar{0};
		
	public:
		int getInt(){
			return intVar;
		}


//LAB 01:
//	Overload the addition operator +

 Test& operator+ (int value){
	intVar = intVar + value;
	return *this;
 }

//	STEP 1 - Write the RETURN VALUE:
//	A reference variable to an object of the class.
	
//	STEP 2 - On the same line, write the NAME OF FUNCTION:
//	The word operator followed by the symbol for the operator.

//	STEP 3 - On the same line, in parentheses, add the PARAMETER:
//	An integer value that will be added.

//	STEP 4 - Write the function's FUNCTIONALITY:
//	Add the parameter to the class' data member intVar.
//	Return a pointer to the current object:  *this
		

//LAB 02:
//	Overload the greater than operator >

//	STEP 1 - Write the RETURN VALUE:
//	A boolean (bool)
	bool operator> (Test t){
		if (intVar > t.intVar)
			return true;
		return false;
	}
//	STEP 2 - On the same line, write the NAME OF FUNCTION:
//	The word operator followed by the symbol for the operator.

//	STEP 3 - On the same line, in parentheses, add the PARAMETER:
//	A Test object.

//	STEP 4 - Write the function's FUNCTIONALITY:
//	If the value of intVar in the current object is greater than the 
//		value of intVar in the parameter object, return true.
//	Return false (no else is needed)
		


};
#endif
