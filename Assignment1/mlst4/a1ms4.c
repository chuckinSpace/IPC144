/* -------------------------------------------
Name:Carlos Moyano
Student number:123435174
Email:cmoyano-rugiero@myseneca.ca	
Section:RR
Date:5-12-17
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

int main(void)
{
    // Declare variables here:

    

	struct Name cont_name ={{0}};	
	struct Adress cont_adress = {0};
	struct Numbers cont_number={{0}};
	 

    // Create a variable of type Contact and call it something self-describing like "contact"
    // - HINT: Be sure to initialize the values to 0 and empty C strings
 
   // struct Contact contact = {{0}};

    // Display the title
    
    printf("Contact Management System\n");
    printf("-------------------------\n");

    // Call the Contact function getName to store the values for the Name member

    getName(&cont_name);

    // Call the Contact function getAddress to store the values for the Address member

    getAdress(&cont_adress);

    // Call the Contact function getNumbers to store the values for the Numbers member

    getNumbers(&cont_number);

    // Display Contact summary details

    	printf("\nContact Details\n");
	printf("---------------\n");
	printf("Name Details\n");
	printf("First name: %s\n", cont_name.firstName);
	printf("Middle initial(s): %s\n", cont_name.middleInitial);
	printf("Last name: %s\n", cont_name.lastName);
	printf("\n");

	printf("Address Details\n");
	printf("Street number: %d\n",cont_adress.streetNumber);
	printf("Street name: %s\n",cont_adress.street);
	printf("Apartment: %d\n",cont_adress.apartmentNumber);
	printf("Postal code: %s\n",cont_adress.postalCode);
	printf("City: %s\n",cont_adress.city);
	printf("\n");

	printf("Phone Numbers:\n");
	printf("Cell phone number: %s\n", cont_number.cell);
	printf("Home phone number: %s\n", cont_number.home);
	printf("Business phone number: %s\n", cont_number.business);





    // Display Completion Message
    printf("\nStructure test for Contact using functions done!\n");
    
    return 0;
}

/*  SAMPLE OUTPUT:

Contact Management System
-------------------------
Please enter the contact's first name: Wilma
Do you want to enter a middle initial(s)? (y or n): y
Please enter the contact's middle initial(s): Dino
Please enter the contact's last name: Flintstone
Please enter the contact's street number: 100
Please enter the contact's street name: Bedrock
Do you want to enter an apartment number? (y or n): y
Please enter the contact's apartment number: 14
Please enter the contact's postal code: Z8Z 7R7
Please enter the contact's city: Markham
Do you want to enter a cell phone number? (y or n): Y
Please enter the contact's cell phone number: 647-505-5555
Do you want to enter a home phone number? (y or n): Y
Please enter the contact's home phone number: 905-222-3333
Do you want to enter a business phone number? (y or n): Y
Please enter the contact's business phone number: 416-491-5050

Contact Details
---------------
Name Details
First name: Wilma
Middle initial(s): Dino
Last name: Flintstone

Address Details
Street number: 100
Street name: Bedrock
Apartment: 14
Postal code: Z8Z 7R7
City: Markham

Phone Numbers:
Cell phone number: 647-505-5555
Home phone number: 905-222-3333
Business phone number: 416-491-5050

Structure test for Contact using functions done!
*/
