// This program finds the average time spent programming and studying biology 
// by a student each day over a user-defined number of days. It also determines 
// which subject was studied more on average.

// Onate, Leinau, Guevara

#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int numStudents, numDays;  // User-defined number of students & days
    float numHoursProg, numHoursBio;  // Hours spent on programming and biology
    float totalProg, totalBio;  // Total hours for each subject
    float avgProg, avgBio;  // Averages per subject
    int student, day;  

    cout << fixed << showpoint << setprecision(2);

    // Get user input for number of students
    cout << "This program will find the average number of hours per day\n";
    cout << "that a student spent studying programming and biology over a period.\n\n";
    cout << "How many students are there? ";
    cin >> numStudents;

    // Get user input for number of days
    cout << "How many days should be considered? ";
    cin >> numDays;

    // Validate input
    if (numStudents <= 0 || numDays <= 0) {
        cout << "Invalid input! Both students and days must be positive integers." << endl;
        return 1;  // Exit program with an error code
    }

    // Loop for each student
    for (student = 1; student <= numStudents; student++) {
        totalProg = 0;  // Reset total programming hours for each student
        totalBio = 0;   // Reset total biology hours for each student

        // Loop for each day (user-defined number of days)
        for (day = 1; day <= numDays; day++) {
            // Get programming study hours
            cout << "Student " << student << " - Enter hours spent on programming on day " << day << ": ";
            cin >> numHoursProg;

            // Get biology study hours
            cout << "Student " << student << " - Enter hours spent on biology on day " << day << ": ";
            cin >> numHoursBio;

            totalProg += numHoursProg;
            totalBio += numHoursBio;
        }

        // Calculate averages
        avgProg = totalProg / numDays;
        avgBio = totalBio / numDays;

        // Display results for each student
        cout << "\nStudent " << student << "'s average study time per day:\n";
        cout << "Programming: " << avgProg << " hours per day\n";
        cout << "Biology: " << avgBio << " hours per day\n";

        // Determine and print which subject had the most study time
        if (avgProg > avgBio)
            cout << "Student " << student << " spent more time on programming on average.\n\n";
        else if (avgBio > avgProg)
            cout << "Student " << student << " spent more time on biology on average.\n\n";
        else
            cout << "Student " << student << " spent the same amount of time on both subjects.\n\n";
    }

    return 0;
}