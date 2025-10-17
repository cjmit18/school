/* Lab 1 - Functions
You only need to write THREE LINES OF CODE to complete this project!
1. Write the prototype for a function.
2. Write the header for a function.
3. Write the statement that calls the function.
*/

#include <iostream>
using namespace std; 

/*	STEP 1:	Complete the function prototype for the function print_results.
			This function requires three parameters that are all integers.
			It does not return a result.
*/
//Complete this FUNCTION PROTOTYPE:
  void print_results(int, int);

main(void)
{
	int num1{0};
	int num2{0};
	
	cout << "Enter the first number: ";
	cin >> num1;
	
	cout << "Enter the second number: ";
	cin >> num2;
	
/*	STEP 2:	Complete the function call to the function print_results.
*/
	//Complete this FUNCTION CALL:
	int sum = num1 + num2;
	print_results(num1, num2);
	return 0;
}

/*	STEP 3:	Complete the function header with the correct parameters. 
			Refer to the prototype you wrote above for the correct order 
			and data types of these parameters. 
			Refer to the statements in the function body below for the 
			correct names for these parameters.
*/

//Complete this FUNCTION HEADER:
  void print_results(int n1, int n2) {
	int sum{n1 + n2};
	cout << "The sum of " << n1 << " and " << n2 << " is " << sum;
}
