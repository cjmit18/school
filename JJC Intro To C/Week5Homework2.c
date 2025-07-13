/*
Wayne Mitchell
CIS 236
Week 5 Homework 2
Parallel Arrays
*/

#include <stdio.h>

// STEP 2 – symbolic constant for array size (sample uses 3)
#define SIZE 3

// Prototype for Function 1: fill the product ID array
void fillProductIDs(int product_ids[]);

// Prototype for Function 2: process sales updates
void processSales(int product_ids[], float sales[]);

// Prototype for Function 3: linear search for a product ID
int  findProductIndex(int product_ids[], int target_id);

// Prototype for Function 4: update sales at a given index
void updateSales(float sales[], int index);

// Prototype for Function 5: display the product/sales table
void displayData(int product_ids[], float sales[]);

int main(void)
{
    // Parallel arrays declared using SIZE
    int   product_ids[SIZE];         // stores product IDs
    float sales[SIZE] = {0.0f};      // stores cumulative sales, all start at 0.0

    // Function 1 – fill product_ids
    fillProductIDs(product_ids);

    // Function 2 – allow user to update sales until -99 entered
    processSales(product_ids, sales);

    // Function 5 – display final table
    displayData(product_ids, sales);

    return 0;  // program ends
}

/*-----------------------------------------------------------------------------
	Function 1: fillProductIDs
   	Prompts the user SIZE times to enter product IDs.
   	Parameters: product_ids[] (int array)
   	Return: none
-----------------------------------------------------------------------------
*/
void fillProductIDs(int product_ids[])
{
    int i;  // loop counter

    for (i = 0; i < SIZE; i++)   // counter-controlled loop
    {
        printf("Product id to store in array: ");
        scanf("%d", &product_ids[i]);
        fflush(stdin);
    }
}

/*-----------------------------------------------------------------------------
	Function 2: processSales
   	Repeatedly prompts for a product ID, looks it up, and updates sales.
   	Sentinel: -99 ends input.
   	Parameters: product_ids[] (int), sales[] (float)
   	Return: none
-----------------------------------------------------------------------------
*/
void processSales(int product_ids[], float sales[])
{
    int id;         // product ID input
    int index;      // index returned by linear search

    printf("\nProduct id to enter sales: ");
    scanf("%d", &id);
    fflush(stdin);

    // sentinel-controlled loop
    while (id != -99)
    {
        // Function 3 – search for id
        index = findProductIndex(product_ids, id);

        if (index != -1)  // found
        {
            // Function 4 – update sales[index]
            updateSales(sales, index);
        }
        else              // not found
        {
            printf("Product not found\n");
        }

        // prompt again
        printf("Enter a product id for sales: ");
        scanf("%d", &id);
        fflush(stdin);
    }
}

/*-----------------------------------------------------------------------------
 Function 3: findProductIndex
   Performs a linear search of product_ids for target_id.
   Parameters: product_ids[] (int), target_id (int)
   Return: index if found; -1 if not found
-----------------------------------------------------------------------------
*/
int findProductIndex(int product_ids[], int target_id)
{
    int i;  // loop counter

    for (i = 0; i < SIZE; i++)   // counter-controlled loop
    {
        if (product_ids[i] == target_id)  // match?
        {
            return i;  // return index immediately
        }
    }
    return -1;  // reached end without finding
}

/*-----------------------------------------------------------------------------
 	Function 4: updateSales
   	Prompts for a sales amount, adds to sales[index], and confirms.
	  Parameters: sales[] (float), index (int)
	Return: none
-----------------------------------------------------------------------------
*/
void updateSales(float sales[], int index)
{
    float amount;  // amount to add

    printf("Enter the sales: ");
    scanf("%f", &amount);
    fflush(stdin);

    sales[index] += amount;  // add to existing total
    printf("Sales updated\n");
}

/*-----------------------------------------------------------------------------
	Function 5: displayData
   	Prints the headers and each product ID with its sales value.
   	Parameters: product_ids[] (int), sales[] (float)
   	Return: none
-----------------------------------------------------------------------------
*/
void displayData(int product_ids[], float sales[])
{
    int i;  // loop counter

    // column headings, left-align IDs, right-align sales
    printf("\n%-12s%10s\n", "Product Id", "Sales");

    for (i = 0; i < SIZE; i++)   // counter-controlled loop
    {
        printf("%-12d%10.2f\n", product_ids[i], sales[i]);
    }
}

