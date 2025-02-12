// This program will read in the quantity of a particular item and its price.
// It will then print out the total price.
// The input will come from the keyboard and the output will go to
// the screen.

// Onate, Leinau, Guevara

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	int	quantity;		// contains the amount of items purchased 
	float itemPrice;	// contains the price of each item
	float totalBill;	// contains the total bill.

	cout << setprecision(4) << fixed  << showpoint;	// formatted output 

	cout << "Please input the number of items bought"<< endl;
    cin >> quantity;
	cout <<  "Please input the price of eaach item"<< endl;
	cin >> itemPrice;

	totalBill = quantity * itemPrice;

	// Fill in the assignment statement to determine the total bill.

	cout << "The total bill is: $" << totalBill << endl;
	// with a label to the screen.

	return 0;
}