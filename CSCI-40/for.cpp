// This program has the user input a number n and then finds the
// mean of the first n positive integers

// Onate, Leinau, Guevara

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int n, m;        // Start and end values
    int total = 0;   // Sum of numbers from n to m
    int count = 0;   // Number of integers in the range
    float mean;      // The computed mean

    // Ask the user for n and m
    cout << "Enter the starting integer (n): ";
    cin >> n;
    cout << "Enter the ending integer (m): ";
    cin >> m;

    // Validate input: Ensure that m is greater than or equal to n
    if (m < n) {
        cout << "Invalid input! The ending integer must be greater than or equal to the starting integer." << endl;
        return 1;  // Exit with an error code
    }

    // Calculate the sum and count the numbers in the range
    for (int i = n; i <= m; i++) {
        total += i;
        count++;
    }

    // Compute mean using floating-point division
    mean = static_cast<float>(total) / count;

    // Display the result
    cout << fixed << showpoint << setprecision(2);
    cout << "The mean average of the integers from " << n << " to " << m << " is " << mean << endl;

    return 0;
}