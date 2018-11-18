#include <stdio.h>

// create a program that takes input from user $$ and states that amount in loonies and qquartes and the amount due


int main(void){

	double input_Amount;
	int n_loonies = 0 ;
	int n_quarters = 0 ;
	float v_quarters = 0 ;
	float remaining = 0 ;

	printf("Please enter the amount to be paid: $");
	scanf("%lf", &input_Amount);

	n_loonies = input_Amount / 1;

	remaining = input_Amount - n_loonies;

	printf("Loonies required: %d, balance owing $%.2f\n",n_loonies,remaining);
	
	n_quarters = remaining / 0.25;

	v_quarters = n_quarters * 0.25;

	remaining = remaining - v_quarters;

	printf("Quarters required: %d, balance owing $%.2f\n",n_quarters,remaining);
	     

														   





	return 0;
}
