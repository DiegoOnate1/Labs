// This program will read in the quantity of a particular item and its price.
// It will then print out the total price.
// The input will come from a data file and the output will go to an output file.

// Onate, Leinau, Guevara

#include <iostream>
#include <fstream>  // For file handling
#include <iomanip>  // For formatted output

using namespace std;

int main() {
    ifstream dataIn;   // Defines an input stream for a data file
    ofstream dataOut;  // Defines an output stream for an output file
    int quantity;      // Contains the amount of items purchased
    float itemPrice;   // Contains the price of each item
    float totalBill;   // Contains the total bill (quantity * itemPrice)

    // Open input and output files
    dataIn.open("transaction.dat"); // Opens the input file
    dataOut.open("bill.out");       // Opens the output file

    // Check if file opened successfully
    if (!dataIn) {
        cout << "Error opening input file!" << endl;
        return 1; // Exit with an error
    }

    if (!dataOut) {
        cout << "Error opening output file!" << endl;
        return 1; // Exit with an error
    }

    // Read quantity and price from the input file
    dataIn >> quantity >> itemPrice;

    // Calculate the total bill
    totalBill = quantity * itemPrice;

    // Set formatted output
    dataOut << fixed << showpoint << setprecision(2);

    // Write total bill to the output file
    dataOut << "Total Bill: $" << totalBill << endl;

    // Close the files
    dataIn.close();
    dataOut.close();

    cout << "Transaction processed successfully! Check 'bill.out' for the total bill." << endl;

    return 0;
}