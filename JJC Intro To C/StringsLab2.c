#include <stdio.h>
#include <string.h>
#include <ctype.h>

// STEP 1 - Complete the prototype
void check_zip(char zip[], int size);

int main() {
    char zip[6] = {'\0'};  // allow room for 5 digits + null terminator
    check_zip(zip, 6);
    printf("You typed: %s\n", zip);
}

void check_zip(char zip[], int size) {
    int valid_length = 0;
    int valid_data = 0;
    int length_of_string;

    while (!valid_data) {
        puts("Type in a zip code");

        fgets(zip, size, stdin);

        length_of_string = strlen(zip);

        if (zip[length_of_string - 1] == '\n') {
            zip[length_of_string - 1] = '\0';
            length_of_string--;
        }

        if (length_of_string == 5) {
            valid_length = 1;
        } else {
            puts("Not correct length");
            continue;
        }

        int valid_digit = 1;
        int index = 0;

        while (valid_digit && index < length_of_string) {
            if (!isdigit(zip[index])) {
                printf("%c is not a digit\n", zip[index]);
                valid_digit = 0;
            } else {
                index++;
            }
        }

        if (valid_length && valid_digit)
            valid_data = 1;
    }

    puts("Valid zip code");
}
