/* 
Wayne Mitchell
CIS 236
Week 10 Lab 2
This lab demonstrates creating a structure 
that includes an enum. Then a pointer to the
structure is created and the structures 
components are accessed.
*/
#include <string.h>
#include <stdio.h>

// STEP 1 - Copy the enum typedef from Lab 01.
typedef enum {
    sedan,
    SUV,
    van
} 
// STEP 3 - Give this car structure type a name.
CarStyle;
// STEP 2 - Add the three structure components.
typedef struct {
    char make[20];        // 1. make of the car
    int year;             // 2. year of the car
    CarStyle style;       // 3. body style
} Car;

int main(void)
{
    // STEP 4 - Create a variable for a car
    Car myCar;

    // STEP 5 - Create a pointer to the above variable
    Car *ptrCar = &myCar;

    // STEP 6 - Assign hard-coded values
    strcpy(ptrCar->make, "Honda");
    ptrCar->year = 2024;
    ptrCar->style = SUV;

    // STEP 7 - Print each component's value
    printf("Make: %s\n", ptrCar->make);
    
    printf("Body style: ");
    switch (ptrCar->style) {
        case sedan:
            printf("sedan\n");
            break;
        case SUV:
            printf("SUV\n");
            break;
        case van:
            printf("van\n");
            break;
        default:
            printf("unknown\n");
    }

    printf("Year: %d\n", ptrCar->year);

    return 0;
}

