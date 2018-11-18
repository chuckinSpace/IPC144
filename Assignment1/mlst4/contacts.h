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

// Structure type Name declaration
struct Name {
    char firstName[31];
    char middleInitial[7];
    char lastName[36];
};

// Structure type Address declaration
// Place your code from Milestone #1 here...
struct Adress
{
	int streetNumber;
	char street[41];
	int apartmentNumber;
	char postalCode[8];
	char city[41];
	  
};

// Structure type Numbers declaration
// Place your code from Milestone #1 here...

struct Numbers
{
	char cell[21];
	char home[21];
	char business[21];
	  
};

// Structure type Contact declaration
// Place your code here...

struct Contact {
	struct Name name;
	struct Adress adress;
	struct Numbers number;
};

// Funtions Prototyping

void getName(struct Name *pName);
void getAdress(struct Adress *pAdress);
void getNumbers(struct Numbers *pNumbers);
