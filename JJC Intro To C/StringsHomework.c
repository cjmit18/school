/* Wayne Mitchell
   09 – Strings and Characters Homework
   This program collects and validates course information (prefix, number, name),
   combines each course entry into a formatted string, and prints a list of 5 courses.
*/

#include <stdio.h>
#include <string.h>
#include <ctype.h>

// Function prototypes
void get_valid_prefix(char prefix[]);
void get_valid_number(char number[]);
void get_valid_name(char name[]);
void combine_course_info(char result[], char prefix[], char number[], char name[]);
void print_courses(char courses[5][28]);

int main() {
    char prefix[4];
    char number[4];
    char name[21];
    char courses[5][28] = {{'\0'}};

    for (int i = 0; i < 5; i++) {
        get_valid_prefix(prefix);
        get_valid_number(number);
        get_valid_name(name);
        combine_course_info(courses[i], prefix, number, name);
    }

    print_courses(courses);

    return 0;
}

void get_valid_prefix(char prefix[]) {
    char temp[100];
    int valid = 0;

    while (!valid) {
        printf("Course prefix: ");
        fgets(temp, sizeof(temp), stdin);
        temp[strcspn(temp, "\n")] = '\0';

        if (strlen(temp) != 3) {
            printf("Course prefix must be 3 characters\n");
            continue;
        }

        int all_letters = 1;
        for (int i = 0; i < 3; i++) {
            if (!isalpha(temp[i])) {
                all_letters = 0;
                break;
            }
        }

        if (!all_letters) {
            printf("Course prefix must only contain letters\n");
        } else {
            valid = 1;
            strcpy(prefix, temp);
        }
    }
}

void get_valid_number(char number[]) {
    char temp[100];
    int valid = 0;

    while (!valid) {
        printf("Course number: ");
        fgets(temp, sizeof(temp), stdin);
        temp[strcspn(temp, "\n")] = '\0';

        if (strlen(temp) != 3) {
            printf("Course number must be 3 digits\n");
            continue;
        }

        int all_digits = 1;
        for (int i = 0; i < 3; i++) {
            if (!isdigit(temp[i])) {
                all_digits = 0;
                break;
            }
        }

        if (!all_digits) {
            printf("Course number must only contain digits\n");
        } else {
            valid = 1;
            strcpy(number, temp);
        }
    }
}

void get_valid_name(char name[]) {
    printf("Course name: ");
    fgets(name, 100, stdin);
    name[strcspn(name, "\n")] = '\0';

    if (strlen(name) > 20) {
        printf("Course name exceeds 20 characters and will be truncated\n");
        name[20] = '\0';
    }
}

void combine_course_info(char result[], char prefix[], char number[], char name[]) {
    strcpy(result, prefix);
    strcat(result, " ");
    strcat(result, number);
    strcat(result, " ");
    strcat(result, name);
}

void print_courses(char courses[5][28]) {
    printf("\nCourses:\n");
    for (int i = 0; i < 5; i++) {
        printf("%s\n", courses[i]);
    }
}
