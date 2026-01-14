#include <iostream>
#include <iomanip>
#include <array>
using namespace std;

int main() {

	int c_style_array[5] = {0};
	array<int, 5> template_style_array{};
	
	c_style_array[5] = 10;
	template_style_array[5] = 10;
	
	cout << "C Style Array Contents:" << endl;
	for (int i = 0; i < 20; i++)
		cout << c_style_array[i] << " ";
		
	cout << endl << endl;
	
	cout << "Template Style Array Contents:" << endl;
	for (int i = 0; i < template_style_array.size() + 15; i++)
		cout << template_style_array[i] << " ";
}


/**************************************************************************
 * (C) Copyright 1992-2014 by Deitel & Associates, Inc. and               *
 * Pearson Education, Inc. All Rights Reserved.                           *
 *                                                                        *
 * DISCLAIMER: The authors and publisher of this book have used their     *
 * best efforts in preparing the book. These efforts include the          *
 * development, research, and testing of the theories and programs        *
 * to determine their effectiveness. The authors and publisher make       *
 * no warranty of any kind, expressed or implied, with regard to these    *
 * programs or to the documentation contained in these books. The authors *
 * and publisher shall not be liable in any event for incidental or       *
 * consequential damages in connection with, or arising out of, the       *
 * furnishing, performance, or use of these programs.                     *
 **************************************************************************/
