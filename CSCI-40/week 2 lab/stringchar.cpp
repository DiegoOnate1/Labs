// This program demonstrates the use of characters and strings

// Onate, Leinau, Guevara

/*
ex 3: no it is not possible to change the choice of FAVORITESODA 
because it has already been declared as a const since the beginning 
but if you remove it and make it a regular variable you can change it 
*/
/*
ex 4: since favoriteSnack is a regular variable 
it is possible to change because its not declared as a const
*/

#include <iostream>
#include <string>
using namespace std;

// Definition of constants
const string FAVORITESODA = "Dr. Dolittle";	// use double quotes for strings 
const char BESTRATING = 'A';				// use single quotes for characters

int main()
{
	char rating;			// 2nd highest product rating
	string favoriteSnack;	// most preferred snack
	int numberOfPeople;		// the number of people in the survey
	int topChoiceTotal;		// the number of people who prefer the top choice

	// Fill in the code to do the following:
	favoriteSnack = "crackers";
	rating = 'B';
	numberOfPeople = 250;
	topChoiceTotal = 148;

	// Fill in the blanks of the following:
	cout << "The preferred soda is " << FAVORITESODA << endl; 
	cout << "The preferred snack is " << favoriteSnack  << endl; 
	cout << "Out of " << numberOfPeople << " people " << topChoiceTotal<< " chose these items!" << endl;
	cout << "Each of these products were given a rating of " << BESTRATING << " from our expert tasters" << endl;
	cout << "The other products were rated no higher than a " << rating << endl;

	return 0;
}