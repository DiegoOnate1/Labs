// This program displays a hot beverage menu and prompts the user to
// make a selection. A switch statement determines which item the user
// has chosen. A do-while loop repeats until the user selects item E
// from the menu.

// Onate, Leinau, Guevara

#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    // Define necessary variables
    int number;       // To store the number of cups
    float cost;       // To store the total cost
    char beverage;    // To store user beverage choice
    bool validBeverage;

    cout << fixed << showpoint << setprecision(2);

    do {
        cout << endl << endl;
        cout << "Hot Beverage Menu" << endl << endl;
        cout << "A: Coffee          $1.00" << endl;
        cout << "B: Tea             $0.75" << endl;
        cout << "C: Hot Chocolate   $1.25" << endl;
        cout << "D: Cappuccino      $2.50" << endl << endl;

        cout << "Enter the beverage A, B, C, or D you desire: " << endl;
        cout << "Enter E to exit the program." << endl << endl;

        // Read in the beverage choice
        cin >> beverage;
        beverage = tolower(beverage); // Convert to lowercase for case insensitivity

        // Validate beverage selection
        switch (beverage) {
            case 'a': case 'b': case 'c': case 'd':
                validBeverage = true;
                break;
            case 'e':
                cout << "Thank you! Please come again!" << endl;
                return 0; // Exit the program
            default:
                validBeverage = false;
                cout << "Invalid selection. Try again, please!" << endl;
        }

        // If valid beverage, ask for the number of cups
        if (validBeverage) {
            cout << "How many cups would you like?" << endl;
            cin >> number;

            // Calculate cost based on selected beverage
            switch (beverage) {
                case 'a': 
                    cost = number * 1.0;
                    cout << "The total cost is $ " << cost << endl;
                    break;
                case 'b': 
                    cost = number * 0.75;
                    cout << "The total cost is $ " << cost << endl;
                    break;
                case 'c': 
                    cost = number * 1.25;
                    cout << "The total cost is $ " << cost << endl;
                    break;
                case 'd': 
                    cost = number * 2.50;
                    cout << "The total cost is $ " << cost << endl;
                    break;
            }
        }

    } while (beverage != 'e');  // Loop continues until the user selects 'E' or 'e'

    return 0;
}