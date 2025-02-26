// Onate, Leinau, Guevara

#include <iostream>
using namespace std;

int main()
{
	char letter = 'a';

    do {
        cout << "Please enter a letter" << endl;
        cin >> letter;

        cout << "The letter you entered is " << letter << endl;
        cout << "To end program enter letter x.\n" << endl;
    } while (letter != 'x');

	return 0;
}