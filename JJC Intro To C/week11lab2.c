//Wayne Mitchell
/*
CIS 236
Week 11 Lab 2
This program demonstrates the use of binary file I/O in C by writing and reading a structure
representing a sports mascot.

*/

#include <stdio.h>
#include <string.h>

typedef struct  {                              
	unsigned int jerseyNum;
	char teamName[15];
	char mascotName[15];
} mascot_t; 

int main() {
	
	// STEP 1 - Create a FILE * variable to open a binary file.
	FILE *filePtr;

	// STEP 2 - Open the binary file for WRITING ("wb")
	filePtr = fopen("mascots.dat", "wb");

	mascot_t mascot;
	mascot.jerseyNum = 10;
	strcpy(mascot.teamName, "JJC");
	strcpy(mascot.mascotName, "Wiley");

	// STEP 3 - Write the mascot structure to the file
	fwrite(&mascot, sizeof(mascot_t), 1, filePtr);

	// STEP 4 - Close the file
	fclose(filePtr);

	// STEP 5 - Open the binary file for READING ("rb")
	filePtr = fopen("mascots.dat", "rb");

	// STEP 6 - Read from the file back into the mascot structure
	fread(&mascot, sizeof(mascot_t), 1, filePtr);

	// STEP 7 - Print the structure data to the screen
	printf("Jersey Number: %u\n", mascot.jerseyNum);
	printf("Team Name: %s\n", mascot.teamName);
	printf("Mascot Name: %s\n", mascot.mascotName);

	// STEP 8 - Close the file
	fclose(filePtr);

	return 0;
}
