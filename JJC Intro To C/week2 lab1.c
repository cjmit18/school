#include <stdio.h>

int
main (void)
{
	int number = 105;
	
	if (number > 100) {
		number += 10;
	}
	printf("Number: %d\n", number);
	
	return 0;
}
