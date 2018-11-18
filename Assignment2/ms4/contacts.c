/* -------------------------------------------
Name:
Student number:
Email:
Section:
Date:
----------------------------------------------
Assignment: 2
Milestone:  4
---------------------------------------------- */

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include "contactHelpers.h"
#include "contacts.h"

// +-------------------------------------------------+
// | NOTE:  Include additional header files...       |
// +-------------------------------------------------+



void getName (struct Name *pName){
    char input;
    printf("Please enter the contact's first name: ");
    scanf("%30[^\n]", pName->firstName); //pName->fisrtName


    printf("Do you want to enter a middle initial(s)? (y or n): ");
    clearKeyboard ();
    input = yes();
    if (input == 1) {
        printf("Please enter the contact's middle initial(s): ");
        scanf("%6[^\n]", pName->middleInitial);


    }

    printf("Please enter the contact's last name: ");
    scanf(" %35[^\n]", pName->lastName);
    fflush (stdin);
    clearKeyboard ();


}




// getAddress:
void getAddress(struct Address *pAddress){

    char input;

    printf("Please enter the contact's street number: ");
    pAddress->streetNumber = getInt ();


    printf("Please enter the contact's street name: ");
    scanf("%40[^\n]", pAddress->street);


    printf("Do you want to enter an apartment number? (y or n): ");
    clearKeyboard ();
    input = yes();
    if (input == 1) {
        printf("Please enter the contact's apartment number: ");
        scanf(" %d", &pAddress->apartmentNumber);

    }

    printf("Please enter the contact's postal code: ");
    scanf(" %10[^\n]", pAddress->postalCode);
    clearKeyboard ();



    printf("Please enter the contact's city: ");
    scanf("%40[^\n]", pAddress->city);
    clearKeyboard ();

}




// getNumbers:
// NOTE:  Also modify this function so the cell number is
//        mandatory (don't ask to enter the cell number)
void getNumbers(struct Numbers *pNumbers){

    char input;



    printf("Please enter the contact's cell phone number: ");
    getTenDigitPhone (pNumbers->cell);



    printf("Do you want to enter a home phone number? (y or n): ");
    input = yes();
    if (input == 1)  {
        printf("Please enter the contact's home phone number: ");
        getTenDigitPhone (pNumbers->home);

    }

    printf("Do you want to enter a business phone number? (y or n): ");
    input = yes();
    if (input == 1)  {
        printf("Please enter the contact's business phone number: ");
        getTenDigitPhone (pNumbers->business);

    }
}


// +-------------------------------------------------+
// | NOTE:  Copy/Paste your Assignment-2 Milestone-1 |
// |        empty function definitions below and     |
// |        complete the definitions as per the      |
// |        Milestone-2 specifications               |
// +-------------------------------------------------+

// getContact
void getContact(struct Contact *pContact){

    getName    (&pContact->name);
    getAddress (&pContact->address);
    getNumbers (&pContact->numbers);



}

