/* Wayne Mitchell
 * CIS 236 – Programming in C
 * 08 Homework – Pointers, Part 2
 * -------------------------------------------------------------
 * This program demonstrates four ways to access an array’s
 * values and four ways to access the addresses of its elements:
 *   1.  Array-name + index notation
 *   2.  Pointer-to-array + index notation
 *   3.  Array-name + pointer/offset notation
 *   4.  Pointer-to-array + pointer/offset notation
 *
 * Each technique is implemented twice: once for the values and
 * once for the addresses, for a total of eight functions plus
 * main.  The output format exactly matches the sample run (the
 * numeric addresses will differ on each execution).
 */

#include <stdio.h>          /* printf, puts */

/* ------------------------ Symbolic Constant ------------------------ */
#define SIZE 5              /* size of the integer array */

/* ------------------------ Function Prototypes ---------------------- */
void valuesNameIndex        (const int a[]);
void valuesPointerIndex     (const int *p);
void valuesNameOffset       (const int a[]);
void valuesPointerOffset    (const int *p);

void addressesNameIndex     (const int a[]);
void addressesPointerIndex  (const int *p);
void addressesNameOffset    (const int a[]);
void addressesPointerOffset (const int *p);

/* =================================================================== */
int main(void)
{
    /* Declare and initialize the array with the required values.      */
    int arrayName[SIZE] = {11, 18, 23, 62, 63};

    /* ---- Call each of the eight required functions in order. ------ */
    valuesNameIndex       (arrayName);
    valuesPointerIndex    (arrayName);
    valuesNameOffset      (arrayName);
    valuesPointerOffset   (arrayName);

    addressesNameIndex    (arrayName);
    addressesPointerIndex (arrayName);
    addressesNameOffset   (arrayName);
    addressesPointerOffset(arrayName);

    /* No need for system("pause") or explicit return(0) in modern C.  */
    return 0;
}

/* =================================================================== */
/*                       VALUE-PRINTING FUNCTIONS                      */
/* =================================================================== */

/* -------------------------------------------------------------------
 * valuesNameIndex
 * Prints array values using array-name + index notation (a[i]).
 * ------------------------------------------------------------------*/
void valuesNameIndex(const int a[])
{
    puts("\nPrinting array values from function valuesNameIndex");
    for (int i = 0; i < SIZE; ++i)
        printf("arrayName[%d] = %d\n", i, a[i]);
}

/* -------------------------------------------------------------------
 * valuesPointerIndex
 * Prints array values using pointer + index notation (p[i]).
 * ------------------------------------------------------------------*/
void valuesPointerIndex(const int *p)
{
    puts("\nPrinting array values from function valuesPointerIndex");
    for (int i = 0; i < SIZE; ++i)
        printf("arrayName[%d] = %d\n", i, p[i]);
}

/* -------------------------------------------------------------------
 * valuesNameOffset
 * Prints array values using array-name + pointer/offset (*(a + i)).
 * ------------------------------------------------------------------*/
void valuesNameOffset(const int a[])
{
    puts("\nPrinting array values from function valuesNameOffset");
    for (int i = 0; i < SIZE; ++i)
        printf("arrayName[%d] = %d\n", i, *(a + i));
}

/* -------------------------------------------------------------------
 * valuesPointerOffset
 * Prints array values using pointer + pointer/offset (*(p + i)).
 * ------------------------------------------------------------------*/
void valuesPointerOffset(const int *p)
{
    puts("\nPrinting array values from function valuesPointerOffset");
    for (int i = 0; i < SIZE; ++i)
        printf("arrayName[%d] = %d\n", i, *(p + i));
}

/* =================================================================== */
/*                     ADDRESS-PRINTING FUNCTIONS                      */
/* =================================================================== */

/* -------------------------------------------------------------------
 * addressesNameIndex
 * Prints element addresses using array-name + index (&a[i]).
 * ------------------------------------------------------------------*/
void addressesNameIndex(const int a[])
{
    puts("\nPrinting array addresses from function addressesNameIndex");
    for (int i = 0; i < SIZE; ++i)
        printf("&arrayName[%d] = %p\n", i, (void *) &a[i]);
}

/* -------------------------------------------------------------------
 * addressesPointerIndex
 * Prints element addresses using pointer + index (&p[i]).
 * ------------------------------------------------------------------*/
void addressesPointerIndex(const int *p)
{
    puts("\nPrinting array addresses from function addressesPointerIndex");
    for (int i = 0; i < SIZE; ++i)
        printf("&arrayName[%d] = %p\n", i, (void *) &p[i]);
}

/* -------------------------------------------------------------------
 * addressesNameOffset
 * Prints element addresses using array-name + offset (a + i).
 * ------------------------------------------------------------------*/
void addressesNameOffset(const int a[])
{
    puts("\nPrinting array addresses from function addressesNameOffset");
    for (int i = 0; i < SIZE; ++i)
        printf("&arrayName[%d] = %p\n", i, (void *) (a + i));
}

/* -------------------------------------------------------------------
 * addressesPointerOffset
 * Prints element addresses using pointer + offset (p + i).
 * ------------------------------------------------------------------*/
void addressesPointerOffset(const int *p)
{
    puts("\nPrinting array addresses from function addressesPointerOffset");
    for (int i = 0; i < SIZE; ++i)
        printf("&arrayName[%d] = %p\n", i, (void *) (p + i));
}

