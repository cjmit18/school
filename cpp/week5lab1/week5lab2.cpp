
/* 04 Lab 02 - Repetition
Create a correctly-structured SENTINEL-CONTROLLED loop to display
a prompt for a name. The loop should display the prompt until the
user types "quit" or "exit".
- Assume the user will spell correctly, and use all lowercase.
- The loop should display what the user typed.
- You must use a logical operator in the loop condition.
- Do not use a do...while loop.
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
// Variable to store user input
string name;
// STEP 1: The body of the loop appears below. Write the
// loop statements around the body.
// Beginning of loop body.
while (name != "quit" && name != "exit")
{
    cout << "Type a name (or type 'quit' or 'exit' to stop): ";
    cin >> name;
//The output that should display in each iteration of the loop:
cout << "You typed " << name << endl;
}

// End of loop body.
return 0;
}
