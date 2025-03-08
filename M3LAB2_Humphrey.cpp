#include <iostream>
using namespace std;

int main() {
    int numericalGrade;
    cout << "Enter your numerical grade: ";
    cin >> numericalGrade;

    char letterGrade;

    if (numericalGrade >= 90 && numericalGrade <= 100) {
        letterGrade = 'A';
    } else if (numericalGrade >= 80 && numericalGrade <= 89) {
        letterGrade = 'B';
    } else if (numericalGrade >= 70 && numericalGrade <= 79) {
        letterGrade = 'C';
    } else if (numericalGrade >= 60 && numericalGrade <= 69) {
        letterGrade = 'D';
    } else if (numericalGrade >= 0 && numericalGrade <= 59) {
        letterGrade = 'F';
    } else {
        cout << "Invalid grade entered. Please enter a grade between 0 and 100." << endl;
        return 1; 
    }

    cout << "Your letter grade is: " << letterGrade << endl;

    return 0;
}