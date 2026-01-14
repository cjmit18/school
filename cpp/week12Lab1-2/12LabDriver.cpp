#include <iostream>
#include "Lab12.h"
// STEP 1 - add an include statement for the Lab 12 header file
using namespace std;
int main()
{
// STEP 2 - instantiate an object of the Lab12 class
Lab12 lab;
cout << "Type an integer: ";
int theInt;
cin >> theInt;
// STEP 3 - call the set function of the lab12 object, passing in the integer.
lab.setExampleMember(theInt);
// STEP 4 - complete the output statement by calling the get function
cout << "The integer value is: " << lab.getExampleMember();
}
