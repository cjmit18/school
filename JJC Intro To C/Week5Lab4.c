/*
Wayne Mitchell
CIS 236
Week 5 Lab 4
Arrays Part 2 Lab 4
*/

#include <stdio.h>

// STEP 2 – symbolic constant for the length of "Joliet Junior College" (21 chars)
#define SIZE 21

int main(void)
{
    // STEP 1 – the string has 21 characters (not counting the '\0')
    char data[]       = "Joliet Junior College";
    char search_char;
    int  index         = 0;
    // STEP 3 – index where it’s found (–1 means “not found”)
    int  found_index  = -1;

    printf("What character do you want to find? ");
    scanf("%c", &search_char);
    fflush(stdin);

    // STEP 4 – loop while we haven’t hit the end AND haven’t found it yet
    while (index < SIZE && found_index == -1)
    {
        // STEP 5 – if characters match, record the index
        if (data[index] == search_char)
            found_index = index;
        index++;
    }

    // STEP 6 – report the result
    if (found_index == -1)
        printf("Character %c not found", search_char);
    else
        printf("Character %c found at index %d", search_char, found_index);

    return 0;
}

