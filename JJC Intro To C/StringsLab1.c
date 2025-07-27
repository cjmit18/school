/* Strings Lab 1
Wayne Mitchell
CIS 236
In this lab, you will practice creating string variables, saving string data 
entered by the user that may include spaces, and using a string function to 
compare two strings.
*/

#include <stdio.h>
#include <string.h>

int main() {
    // Step 1: Create two string variables, length 10
    char str1[10] = "";
    char str2[10] = "";

    // Step 2: Get input for first string
    printf("Type a string: ");
    fgets(str1, 10, stdin);

    // Step 3: Get input for second string
    printf("Type another string: ");
    fgets(str2, 10, stdin);

    // Step 4: Compare the two strings
    int result = strcmp(str1, str2);

    printf("\nStrings in alphabetical order:\n");
    if (result < 0) {
        printf("%s%s", str1, str2);
    } else if (result > 0) {
        printf("%s%s", str2, str1);
    } else {
        printf("The strings are equal.\n");
    }

    return 0;
}
