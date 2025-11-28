#include <iostream>
#include "Test.h"
using namespace std;

int main()
{
	/*Test test;
	cout << "Before update " << test.getInt() << endl;
	test = test + 10;
	cout << "After update " << test.getInt() << endl;*/

	Test test1;
	Test test2;
	
	// Change the values added to confirm the overloaded >
	// works in all cases.
	test1 = test1 + 15;
	test2 = test2 + 5;
	
	if (test1 > test2)
		cout << "Test1 greater";
	else
		cout << "Test2 greater";
	
	return 0;
}
