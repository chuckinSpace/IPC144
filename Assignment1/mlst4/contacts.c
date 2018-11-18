/* -------------------------------------------
Name:Carlos Moyano
Student number:123435174
Email:cmoyano-rugiero@myseneca.ca
Section: SRR
Date: 5-12
----------------------------------------------
Assignment: 1
Milestone:  4
---------------------------------------------- */

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>


// This source file needs to "know about" the structures you declared
// in the header file before referring to those new types:
// HINT: put the header file name in double quotes so the compiler knows
//       to look for it in the same directory/folder as this source file
// #include your contacts header file on the next line:

#include "contacts.h"

// Get and store from standard input the values for Name
// Put your code here that defines the Contact getName function:

void getName (struct Name *pName){
                char input;
		printf("Please enter the contact's first name: ");
		scanf("%30s", pName->firstName); //pName->fisrtName
	
		printf("Do you want to enter a middle initial(s)? (y or n): ");
		scanf(" %c", &input);
		if (input == 'y' || input == 'Y') {
			printf("Please enter the contact's middle initial(s): ");
			scanf("%6s", pName->middleInitial);
		}
		
		printf("Please enter the contact's last name: ");
		scanf("%35s", pName->lastName);
	
		}
		

// Get and store from standard input the values for Address
// Put your code here that defines the Contact getAddress function:

	void getAdress(struct Adress *pAdress){
		
		char input;
		
		printf("Please enter the contact's street number: ");
		scanf("%d", &pAdress->streetNumber);
	
		printf("Please enter the contact's street name: ");
		scanf("%40s", pAdress->street);
	
		printf("Do you want to enter an apartment number? (y or n): ");
		scanf(" %c", &input);
		if (input == 'y' || input == 'Y') {
			printf("Please enter the contact's apartment number: ");
			scanf("%d", &pAdress->apartmentNumber);
		}
	
	
		printf("Please enter the contact's postal code: ");
		scanf(" %10[^\n]", pAdress->postalCode);
	
	
		printf("Please enter the contact's city: ");
		scanf("%40s", pAdress->city);
	}


// Get and store from standard input the values for Numbers
// Put your code here that defines the Contact getNumbers function:
	void getNumbers(struct Numbers *pNumbers){	
		
		char input;
		
		printf("Do you want to enter a cell phone number? (y or n): ");
		scanf(" %c", &input);
		if (input == 'y' || input == 'Y') {
			printf("Please enter the contact's cell phone number: ");
			scanf("%20s", pNumbers->cell);
		}
	
		printf("Do you want to enter a home phone number? (y or n): ");
		scanf(" %c", &input);
		if (input == 'y' || input == 'Y') {
			printf("Please enter the contact's home phone number: ");
			scanf("%20s", pNumbers->home);
		}
	
		printf("Do you want to enter a business phone number? (y or n): ");
		scanf(" %c", &input);
		if (input == 'y' || input == 'Y') {
			printf("Please enter the contact's business phone number: ");
			scanf("%20s", pNumbers->business);
		}
	}
