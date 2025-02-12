// This program will bring in two prices and two quantities of items
// from the keyboard and print those numbers in a formatted chart.

// Onate, Leinau, Guevara

#include <iostream>
// Fill in the code to bring in the library for
#include <iomanip>// formatted output.
#include <cmath>
using namespace std;

int main()
{
	float grade1;
	float grade2;
	float grade3;
	float avg;

cout << setprecision(2) << fixed << showpoint;
	cout << "Please input the first grade" << endl;
	cin >> grade1;

	cout << "please input the second grade" <<endl;
	cin >> grade2;
	cout << "plese input the third grade" << endl;
	cin >> grade3;
	avg = (grade1 + grade2 + grade3) / 3;
	cout << "The average of the three grades is: " << avg << endl;



	return 0;
}