
/* ------------------------------------------------------------------
Name:
Student number:
Email:
Section:
Date:
---------------------------------------------------------------------
Assignment: 2
Milestone:  4
---------------------------------------------------------------------
Description: This header file modularizes general helper functions to
help reduce redundant coding for common repetative tasks.
---------------------------------------------------------------------*/


// Hint:  This header file now has functions with parameters referring to
//        the struct Contact type so be sure to include the contacts.h header:
#include "contacts.h"

//------------------------------------------------------
// Function Prototypes
//------------------------------------------------------

// +-------------------------------------------------+
// | NOTE:  Copy/Paste your Assignment-2 Milestone-1 |
// |        function prototypes here...              |
// +-------------------------------------------------+


// Clear the standard input buffer
void clearKeyboard(void);
// pause:
// Put function prototype below:
void pause(void);
// getInt:
// Put function prototype below:
int getInt(void);
// getIntInRange:
// Put function prototype below:
int getIntInRange(int,int);
// yes:
// Put function prototype below:
int yes(void);
// menu:
// Put function prototype below:
int menu(void);
// ContactManagerSystem:
// Put function prototype below:
void ContactManagerSystem(void);

// +-------------------------------------------------+
// | ====== Assignment 2 | Milestone 3 =======       |
// +-------------------------------------------------+
// | Put new function prototypes below...            |
// +-------------------------------------------------+

// Generic function to get a ten-digit phone number (provided for you)
void getTenDigitPhone(char[]);

// findContactIndex (provided for you)
int findContactIndex(const struct Contact contact[], int, const char[]);


// displayContactHeader
// put function prototype here:
void diplayContactHeader(void);

// displayContactFooter:
// put function prototype here:
void displayContactFooter(int);

// displayContact:
// put function prototype here:
void displayContact(const struct Contact *contact);

// displayContacts:
// put function prototype here:
void displayContacts(const struct Contact contact[], int);

// searchContacts:
// put function prototype here:
void searchContacts(const struct Contact contact[], int);

// addContact:
// put function prototype here:
void addContact(struct Contact *contact , int );

// updateContact:
// put function prototype here:
void updateContact(struct Contact contact[], int );

// deleteContact:
// put function prototype here:
void deleteContact(struct Contact contact[], int );
// sortContacts:
// put function prototype here:
void sortContacts(struct Contact contact[],int);

