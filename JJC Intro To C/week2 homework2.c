#include <stdio.h>
/*Wayne Mitchell
Week 2 Homwork 2
CIS 236
*/

int main(void) // Main Function
{// Variables
	int percent;
	float tax;
	float final_price;
	float final;
	float discount;
	float amount;
	char include;
	
	//User input
	printf("Enter purchase amount ");
	scanf("%f", &amount);
	fflush(stdin);
	
	printf("Does this purchase include Spirit Wear (Y/N) ");
	scanf(" %c", &include);
	fflush(stdin);
	
	//filter statements
	if (include ==  'y' || include == 'Y') 
	{
		if (amount >= 100.00f)
		{
			 percent = 9;
			 discount = amount * .09f;
		}
		else
		{
			 percent = 6;
			 discount = amount* .06f;
		}
		final = amount - discount;
	}
	else
	{
		 percent = 0;
		 final = amount;
		 discount = 0.0f;
	}
	//Final variables
	tax = final * 0.04f;
	final_price = final + tax;
	
    printf("\n");
    /* 1) Purchase amount */
    printf("Purchase amount\t $%7.2f\n", amount);

    if (percent > 0) {
        printf("Discount (%d%%)\t $%7.2f\n", percent, discount);

        printf("Purchase amount after discount\t $%7.2f\n", final);
    }

    printf("Sales tax (4%%)\t $%7.2f\n", tax);

    printf("Total purchase\t $%7.2f\n", final_price);

	return 0;
}
