
/* Lab 2 - Functions
You only need to write FOUR LINES OF CODE to complete this project!
1. Write the prototype for a function.
2. Write the header for a function.
3. Write the statement that calls the function.
4. Write the statement that returns a result from the function.
*/
#include <iostream>
using namespace std;
/* STEP 1: Complete the function prototype for the function compute_results.
This function requires two parameters: one int and one float, in
that order.
It returns a float result.
*/
//Complete this FUNCTION PROTOTYPE:
float compute_results(int, float);
main(void)
{
int num1{0};
float num2{0};
float sum{0};
cout << "Enter the first number: ";
cin >> num1;
cout << "Enter the second number: ";
cin >> num2;
/* STEP 2: Complete the function call to the function compute_results.
Since the function returns a result, it must be part of an
assignment statement.
*/
//Complete this FUNCTION CALL:
sum = compute_results(num1, num2);
cout << "The sum of " << num1 << " and " << num2 << " is " << sum;
}
/* STEP 3: Complete the function header with the correct parameters.
Refer to the prototype you wrote above for the correct order
and data types of these parameters.
Refer to the statements in the function body below for the
correct names for these parameters.
*/
//Complete this FUNCTION HEADER:
float compute_results(int n1, float n2)
{
float sum{n1 + n2};
/* STEP 4: Write the statement that sends the result back to the code
that called this function.
*/
return sum;
}
