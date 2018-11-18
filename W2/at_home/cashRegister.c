#include <stdio.h>

// create a program that takes input from user $$ and states that amount in loonies and qquartes and the amount due
// add  GST to total, dimes and nickels

int main(void){

	double input;           // Variables
	float balance_owe;
	int number_loonies ;
	int number_quarters;
	int number_nickels;
	int number_pennies;
	int number_dimes;
	
	printf("Please enter the amount to be paid: $"); //Input from the user
	scanf("%lf", &input);

	printf("GST: 1.13\n");

	balance_owe = (input * 1.13) + 0.005;


	printf("Balance owing: $%.2f\n",balance_owe); 


	number_loonies = balance_owe / 1;       // loonies calculation

	balance_owe = balance_owe - number_loonies;

	printf("Loonies required: %d, balance owing $%.2f\n",number_loonies,balance_owe);
	
	number_quarters = balance_owe / 0.25;   // quarters calculation
	
	balance_owe *= 100;                     //to work only with integers from now on.

	balance_owe = (int)balance_owe % 25;    //using mod to get the remainder

	printf("Quarters required: %d, balance owing $%.2f\n",number_quarters,(balance_owe/100));
	     
	number_dimes = (int)balance_owe / 10;   // dimes quantity and remainder using integers
	balance_owe = (int)balance_owe % 10;  

	printf("Dimes required: %d, balance owing $%.2f\n",number_dimes,(balance_owe/100));
														   
	number_nickels= (int)balance_owe / 5;
	balance_owe = (int)balance_owe % 5;

	printf("Nickels required: %d, balance owing $%.2f\n",number_nickels,(balance_owe/100));

	number_pennies = (int)balance_owe / 1;
	balance_owe = (int)balance_owe % 1;

	printf("Pennies required: %d, balance owing $%.2f\n",number_pennies,balance_owe);


	return 0;
}
