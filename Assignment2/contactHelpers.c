/* -------------------------------------------
Name:
Student number:
Email:
Section:
Date:
----------------------------------------------
Assignment: 2
Milestone:  2
---------------------------------------------- */

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

// This source file needs to "know about" the functions you prototyped
// in the contact helper header file.
// HINT: Put the header file name in double quotes so the compiler knows
//       to look for it in the same directory/folder as this source file
//       #include your contactHelpers header file on the next line:
#include "contactHelpers.h"

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


// Clear the standard input buffer
void clearKeyboard(void)
{
    while (getchar() != '\n')   ; // empty execution code block on purpose
}

// pause function definition goes here:
void pause(void)
{
    printf("(Press Enter to Continue)");
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
        if(input >= 1 && input <= 6 ){
            printf("<<< Feature %d is unavailable >>>\n\n",input);
            pause ();
	    printf("\n");
        }else if(input == 0){

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
   } while ( option == 0 );


}


