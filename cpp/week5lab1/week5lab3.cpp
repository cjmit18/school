
/* 04 Lab 03 - Repetition
Create a for loop that executes the number of times entered by user.
Each pass through the loop must display the number of times the
loop has executed so far.
Declare the loop control variable within the for header, and
initialize it to 0.
Example output:
How many times should this loop execute? 3
Loop has executed 1 times
Loop has executed 2 times
Loop has executed 3 times
Remember the parts of all loops:
1. LCV identified
2. LCV initialized
3. LCV tested
4. LCV updated
*/
#include <iostream>
#include <string>
using namespace std;
int main()
{
int count;
// Prompt for the count
cout << "How many times should this loop execute? ";
cin >> count;
// STEP 1: The body of the loop appears below. Write the
// loop statements around the body.
// Beginning of loop body.
for (int i = 1; i <= count; i++)
{
cout << "Loop has executed " << i << " times" << endl;
}
}
