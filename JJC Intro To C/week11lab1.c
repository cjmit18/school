#include <stdio.h>
#include <string.h>

int main() 
{
    // STEP 1 - The separator character is a comma (`,`)

    // STEP 2 - Open the data file FOR READING using filePtr
    FILE *filePtr = fopen("11LabData.txt", "r");
    if (filePtr == NULL) {
        printf("Error: Could not open file.\n");
        return 1;
    }

    int index = 0;

    // This is a list of strings. Each row holds one line from the file
    char book_info[11][100];

    // STEP 3 - Read the first line
    fgets(book_info[index], 100, filePtr);

    // Continue reading the rest of the lines
    while (!feof(filePtr) && index < 10) 
    {
        index++;
        fgets(book_info[index], 100, filePtr);
    }

    // STEP 5 - Close the file
    fclose(filePtr);

    // Print each row and tokenize
    for (index = 0; index < 11; index++)
    {
        printf("Row %d: %s", index + 1, book_info[index]);

        // STEP 7 - Use comma as the delimiter
        char *tokenPtr = strtok(book_info[index], ",");

        // Tokenize and print each part
        while (tokenPtr != NULL) 
        {
            printf("Token: %s\n", tokenPtr);
            tokenPtr = strtok(NULL, ",");
        }

        printf("\n");
    }

    return 0;
}
