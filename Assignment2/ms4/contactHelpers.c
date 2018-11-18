/* -------------------------------------------
Name:
Student number:
Email:
Section:
Date:
----------------------------------------------
Assignment: 2
Milestone: 4
---------------------------------------------- */

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

// This source file needs to "know about" the SYSTEM string library functions.
// HINT: The library name is string.h.
//       #include the string.h header file on the next line:

#include <string.h>

// ----------------------------------------------------------


// This source file needs to "know about" the functions you prototyped
// in the contact helper header file.
// HINT: Put the header file name in double quotes so the compiler knows
//       to look for it in the same directory/folder as this source file
//       #include your contactHelpers header file on the next line:
#include "contactHelpers.h"
#include "contacts.h"


// ----------------------------------------------------------
// define MAXCONTACTS for sizing contacts array (5):

#define MAXCONTACTS 5




//------------------------------------------------------
// Function Definitions
//------------------------------------------------------

// +-------------------------------------------------+
// | ====== Assignment 2 | Milestone 2 =======       |
// +-------------------------------------------------+
// | NOTE:  Copy/Paste your Assignment-2 Milestone-1 |
// |        empty function definitions below and     |
// |        complete the definitions as per the      |
// |        Milestone-2 specifications               |
// |                                                 |
// | - The clearKeyboard function is done for you    |
// +-------------------------------------------------+

struct Contact contact_array[MAXCONTACTS]= { { { "Rick", {'\0'}, "Grimes" },
                                                     { 11, "Trailer Park", 0, "A7A 2J2", "King City" },
                                                     { "4161112222", "4162223333", "4163334444" } },
                                             {
                                               { "Maggie", "R.", "Greene" },
                                                     { 55, "Hightop House", 0, "A9A 3K3", "Bolton" },
                                                     { "9051112222", "9052223333", "9053334444" } },
                                             {
                                               { "Morgan", "A.", "Jones" },
                                                     { 77, "Cottage Lane", 0, "C7C 9Q9", "Peterborough" },
                                                     { "7051112222", "7052223333", "7053334444" } },
                                             {
                                               { "Sasha", {'\0'}, "Williams" },
                                                     { 55, "Hightop House", 0, "A9A 3K3", "Bolton" },
                                                     { "9052223333", "9052223333", "9054445555" } },


};
// Clear the standard input buffer
void clearKeyboard(void)
{
    while (getchar() != '\n')   ; // empty execution code block on purpose
}

// pause function definition goes here:
void pause(void)
{
    printf("(Press Enter to Continue)\n");
    clearKeyboard();
}

// getInt function definition goes here:
int getInt(void)
{

    char x = '\n';
    int  valueGetInt;
    int flag;

    do {
        //printf("<Please enter an integer>: ");
       flag = scanf ("%d%c" , &valueGetInt , &x);
        if ( x != '\n' || flag == 0) {
            printf ("*** INVALID INTEGER *** <Please enter an integer>: ");
            clearKeyboard ();
        }

    }
    while ( x != '\n' || flag == 0);

    return valueGetInt;

}

// getIntInRange function definition goes here:
int getIntInRange(int limitDOWN,int limitUP)
{

    int valueGetIntRange;
    fflush (stdin);
    valueGetIntRange = getInt();
    do{

        if(valueGetIntRange < limitDOWN || valueGetIntRange > limitUP){
            printf("*** OUT OF RANGE *** <Enter a number between %d and %d>: ",limitDOWN,limitUP);
            scanf("%d",&valueGetIntRange);
            clearKeyboard ();

        }

    }while( valueGetIntRange < limitDOWN || valueGetIntRange > limitUP );


    return valueGetIntRange;
}


// yes function definition goes here:
int yes(void) {
    char newline;
    char character;
    int  flag;

    while ( 1 ) {

        flag = scanf ("%c%c" , &character , &newline);


        if ( newline == '\n' && flag == 2 ) {

            if ( character == 'Y' || character == 'y' || character == 'n' || character == 'N' ) {
            }
            if ( character == 'Y' || character == 'y' ) {
                return 1;

            } else if ( character == 'N' || character == 'n' ) {
                return 0;

            }
        }

        printf ("*** INVALID ENTRY *** <Only (Y)es or (N)o are acceptable>: ");
        clearKeyboard ();

    }
}
int menu(void)
{
    int input;


    do{
        
	printf("Contact Management System\n");
        printf("-------------------------\n");
        printf("1. Display contacts\n");
        printf("2. Add a contact\n");
        printf("3. Update a contact\n");
        printf("4. Delete a contact\n");
        printf("5. Search contacts by cell phone number\n");
        printf("6. Sort contacts by cell phone number\n");
        printf("0. Exit\n");
        printf("\nSelect an option:> ");


        input = getIntInRange(0,6);
        printf("\n");
        switch (input) {
            case 1 :
                displayContacts (contact_array,MAXCONTACTS);
                pause ();
                break;
            case 2 :
                addContact (contact_array,MAXCONTACTS);
                pause ();
                break;
            case 3 :
                updateContact (contact_array,MAXCONTACTS);
                pause ();
                break;
            case 4 :
                deleteContact (contact_array,MAXCONTACTS);
                pause ();
                break;
            case 5 :
                searchContacts (contact_array,MAXCONTACTS);
                pause ();
                break;

            case 6 : sortContacts (contact_array,MAXCONTACTS);

        }
    }while(input != 0);

    return input;

}



void ContactManagerSystem(void) {


    int option;
    option = menu ();

    do {
        if ( option == 0 ) {
            printf ("Exit the program? (Y)es/(N)o: ");
            option = yes ();
            printf("\n");
            if ( option == 1 ) {
                printf ("Contact Management System: terminated\n");
            }
            else if( option == 0){
                option = menu();
            }
        }

    }
    while ( option == 0 );

}


// +-------------------------------------------------+
// | ====== Assignment 2 | Milestone 3 =======       |
// +-------------------------------------------------+
// | Put empty function definitions below...         |
// +-------------------------------------------------+

// Generic function to get a ten-digit phone number (ensures 10 chars entered)
void getTenDigitPhone(char telNum[])
{
    int needInput = 1;

    while (needInput == 1) {
        scanf("%10s", telNum);


        // (String Length Function: validate entry of 10 characters)
        if (strlen(telNum) == 10)
            needInput = 0;
        else
            printf("Enter a 10-digit phone number: ");
        clearKeyboard();
    }
}

// findContactIndex:
int findContactIndex(const struct Contact contact[], int size, const char cellNum[])
{
    int i;
    for(i=0;i<size;i++){
        if(strcmp(contact[i].numbers.cell,cellNum)==0){
            return i;
        }

    }

    return -1;

}


// displayContactHeader
// Put empty function definition below:
void diplayContactHeader(void){
    printf("+-----------------------------------------------------------------------------+\n");
    printf("|                              Contacts Listing                               |\n");
    printf("+-----------------------------------------------------------------------------+\n");
}


// displayContactFooter
// Put empty function definition below:
void displayContactFooter(int display){


    printf("+-----------------------------------------------------------------------------+\n");
    printf("Total contacts: %d\n\n",display);

}


// displayContact:
// Put empty function definition below:
void displayContact(const struct Contact *contact) {

   if ( strlen (contact->numbers.cell) != 1 ) {
        printf (" %s" , contact->name.firstName);
       if(strlen (contact->name.middleInitial) == 0)
	{	 
	}else{
		printf(" %s", contact->name.middleInitial);
	}
	
      	printf (" %s" , contact->name.lastName);
     	printf ("\n");
        printf ("    C: %-10s   H: %-10s   B: %-10s\n" , contact->numbers.cell , contact->numbers.home ,
                contact->numbers.business);
        printf ("       %d %s, " , contact->address.streetNumber , contact->address.street);

        if ( contact->address.apartmentNumber > 0 ) {
            printf ("Apt# %d, " , contact->address.apartmentNumber);
        }
        printf ("%s, %s\n" , contact->address.city , contact->address.postalCode);
    }
}

// displayContacts:
// Put empty function definition below:
void displayContacts(const struct Contact contact[], int size) {

    int i , valid = 0 , invalid = 0;

    for (i = 0; i <= MAXCONTACTS; i ++) {
        if ( strlen (contact_array[i].numbers.cell) != 0 ) {
            valid ++;
        }
    }
    for (i = 0; i <= MAXCONTACTS; i ++) {
        if ( strlen (contact_array[i].numbers.cell) == 1 ) {
            invalid ++;
        }
    }

        diplayContactHeader ();
int counter=0;
        for (i = 0; i < valid; i ++) {
        counter ++;
          //  printf ("counter in display %d\n",counter);
            displayContact (&contact_array[i]);

        }
      //  printf ("valid desde display antes de %d\n" , valid);
       //  printf ("invalid desde display antes de %d\n" , invalid);

        valid -= invalid;
     //   printf ("valid desde display despues %d\n" , valid);
   // printf ("invalid desde display despues de %d\n" , invalid);
        displayContactFooter (valid);

    }



// searchContacts:
// Put empty function definition below:
void searchContacts(const struct Contact contact[], int size){
    char cellPhone[11];
    int index;
    printf("Enter the cell number for the contact: ");
    getTenDigitPhone (cellPhone);
    index = findContactIndex (contact, size , cellPhone);
    if(index != -1){
        printf("\n");
	displayContact (&contact_array[index]);
        printf ("\n");
    }else{
        printf("*** Contact NOT FOUND ***\n");
    }
}


// addContact:
// Put empty function definition below:

void addContact(struct Contact *contact , int size) {

    int i , valid = 0 , index = 0 , max = 6 , invalid = 0;

    for (i = 0; i <= MAXCONTACTS; i ++) {

        if ( strlen (contact_array[i].numbers.cell) != 0 ) {
            valid ++;
        }
        if ( strlen (contact_array[i].numbers.cell) == 1 ) {
            invalid ++;
        }
    }

    valid -= invalid;


    if ( valid < MAXCONTACTS ) {

        fflush (stdin);
        for (i = 0; i <= valid; i ++) {

            if ( strlen (contact_array[i].numbers.cell) != 10  ) {

                index = i;

            }


        }
        getContact (&contact_array[index]);
        printf ("--- New contact added! ---\n");
        valid ++;

    } else if ( valid <= max ) {
        printf ("*** ERROR: The contact list is full! ***\n");


    }
}

// updateContact:
// Put empty function definition below:
    void updateContact(struct Contact contact[], int size) {
        char cellPhone[11];
        int  index;
        int  input,reset=0;


        printf ("Enter the cell number for the contact: ");
        getTenDigitPhone (cellPhone);
        index = findContactIndex (contact , size , cellPhone);
        if ( index != - 1 ) {
            printf("\n");
	    printf ("Contact found:");
            printf ("\n");
            displayContact (&contact[index]);
            printf ("\n");
            printf ("Do you want to update the name? (y or n): ");
            input = yes ();
            if ( input == 1 ) {

                getName (&contact[index].name);
            }
            fflush (stdin);
            printf ("Do you want to update the address? (y or n): ");
            input = yes ();
            if ( input == 1 ) {
	
		getAddress (&contact[index].address);

            }else{
	
		contact->address.apartmentNumber = reset;		

	    }
            printf ("Do you want to update the numbers? (y or n): ");
            input=0;
            input = yes ();
            if ( input == 1 ) {
                strcpy (contact[index].numbers.cell," ");
                strcpy (contact[index].numbers.home," ");
                strcpy (contact[index].numbers.business," ");
                getNumbers (&contact[index].numbers);

            }
            printf ("--- Contact Updated! ---\n");
        } else {
            printf ("*** Contact NOT FOUND ***\n");
        }
    }





// deleteContact:
// Put empty function definition below:
    void deleteContact(struct Contact contact[], int size){
    char cellPhone[11];
    int  index;
    int  input,reset=0;


        printf ("Enter the cell number for the contact: ");
      //  scanf ("%10s",cellPhone);
        getTenDigitPhone (cellPhone);
        index = findContactIndex (contact_array , MAXCONTACTS , cellPhone);
        if(index == -1){
            printf ("*** Contact NOT FOUND ***\n");
        }else{
            printf("\n");
	    printf ("Contact found:\n");
            displayContact (&contact_array[index]);
            printf("\n");
            printf ("CONFIRM: Delete this contact? (y or n): ");
            input = yes ();
            if ( input == 1 ) {
                
	        strcpy (contact[index].numbers.cell," ");
                contact[index].address.apartmentNumber = reset;
		printf ("--- Contact deleted! ---\n");
            }
        }
        fflush (stdin);
    }


// sortContacts:
// Put empty function definition below:
    void sortContacts(struct Contact contact[],int sort){
        printf ("<<< Feature to sort is unavailable >>>\n");
    }
