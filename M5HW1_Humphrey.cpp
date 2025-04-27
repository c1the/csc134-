/*
CSC 134
M5HW1 - Gold
Gabrielle Humphrey
4/27/2025
*/

#include <iostream>
using namespace std;

void question1();
void question2();
void question3();
void question4();
void question5();

int main() {
    int choice;
    
    do {
        cout << "Main Menu\n";
        cout << "1. Average Rainfall Calculator\n";
        cout << "2. Block Volume Calculator\n";
        cout << "3. Roman Numeral Converter\n";
        cout << "4. Geometry Calculator\n";
        cout << "5. Distance Traveled Calculator\n";
        cout << "6. Exit\n";
        cout << "Enter your choice (1-6): ";
        cin >> choice;
        
        switch(choice) {
            case 1: question1(); break;
            case 2: question2(); break;
            case 3: question3(); break;
            case 4: question4(); break;
            case 5: question5(); break;
            case 6: cout << "Goodbye!\n"; break;
            default: cout << "Invalid choice. Please enter 1-6.\n";
        }
        
        if (choice != 6) {
            cout << "\nPress Enter to continue...";
            cin.ignore();
            cin.get();
        }
    } while (choice != 6);
    
    return 0;
}

void question1() {
    string month1, month2, month3;
    double rain1, rain2, rain3;
    
    cout << "\nAverage Rainfall Calculator\n";
    cout << "Enter month: ";
    cin >> month1;
    cout << "Enter rainfall for " << month1 << ": ";
    cin >> rain1;
    
    cout << "Enter month: ";
    cin >> month2;
    cout << "Enter rainfall for " << month2 << ": ";
    cin >> rain2;
    
    cout << "Enter month: ";
    cin >> month3;
    cout << "Enter rainfall for " << month3 << ": ";
    cin >> rain3;
    
    double average = (rain1 + rain2 + rain3) / 3.0;
    average = static_cast<int>(average * 100 + 0.5) / 100.0;
    cout << "The average rainfall for " << month1 << ", " << month2 
         << ", and " << month3 << " is " << average << " inches.\n";
}

void question2() {
    double width, length, height;
    
    cout << "\nBlock Volume Calculator\n";
    
    do {
        cout << "Enter width: ";
        cin >> width;
        if (width <= 0) cout << "Width must be greater than 0.\n";
    } while (width <= 0);
    
    do {
        cout << "Enter length: ";
        cin >> length;
        if (length <= 0) cout << "Length must be greater than 0.\n";
    } while (length <= 0);
    
    do {
        cout << "Enter height: ";
        cin >> height;
        if (height <= 0) cout << "Height must be greater than 0.\n";
    } while (height <= 0);
    
    double volume = width * length * height;
    cout << "The volume of the block is: " << volume << endl;
}

void question3() {
    int number;
    
    cout << "\nRoman Numeral Converter\n";
    
    do {
        cout << "Enter a number (1-10): ";
        cin >> number;
        if (number < 1 || number > 10) {
            cout << "Number must be between 1 and 10.\n";
        }
    } while (number < 1 || number > 10);
    
    cout << "The Roman numeral version of " << number << " is ";
    
    if (number == 1) cout << "I";
    else if (number == 2) cout << "II";
    else if (number == 3) cout << "III";
    else if (number == 4) cout << "IV";
    else if (number == 5) cout << "V";
    else if (number == 6) cout << "VI";
    else if (number == 7) cout << "VII";
    else if (number == 8) cout << "VIII";
    else if (number == 9) cout << "IX";
    else if (number == 10) cout << "X";
    
    cout << endl;
}

void question4() {
    int choice;
    double radius, length, width, base, height;
    const double PI = 3.14159;
    
    do {
        cout << "\nGeometry Calculator\n";
        cout << "1. Calculate the Area of a Circle\n";
        cout << "2. Calculate the Area of a Rectangle\n";
        cout << "3. Calculate the Area of a Triangle\n";
        cout << "4. Quit\n";
        cout << "Enter your choice (1-4): ";
        cin >> choice;
        
        if (choice < 1 || choice > 4) {
            cout << "The valid choices are 1 through 4. Please try again.\n";
            continue;
        }
        
        switch(choice) {
            case 1:
                do {
                    cout << "Enter the circle's radius: ";
                    cin >> radius;
                    if (radius < 0) cout << "The radius cannot be less than zero.\n";
                } while (radius < 0);
                cout << "The area is " << (PI * radius * radius) << endl;
                break;
                
            case 2:
                do {
                    cout << "Enter the rectangle's length: ";
                    cin >> length;
                    if (length < 0) cout << "Only enter positive values for length.\n";
                } while (length < 0);
                
                do {
                    cout << "Enter the rectangle's width: ";
                    cin >> width;
                    if (width < 0) cout << "Only enter positive values for width.\n";
                } while (width < 0);
                
                cout << "The area is " << (length * width) << endl;
                break;
                
            case 3:
                do {
                    cout << "Enter the triangle's base: ";
                    cin >> base;
                    if (base < 0) cout << "Only enter positive values for base.\n";
                } while (base < 0);
                
                do {
                    cout << "Enter the triangle's height: ";
                    cin >> height;
                    if (height < 0) cout << "Only enter positive values for height.\n";
                } while (height < 0);
                
                cout << "The area is " << (base * height * 0.5) << endl;
                break;
        }
    } while (choice != 4);
}

void question5() {
    double speed, hours;
    
    cout << "\nDistance Traveled Calculator\n";
    
    do {
        cout << "What is the speed of the vehicle in mph? ";
        cin >> speed;
        if (speed < 0) cout << "Speed cannot be negative.\n";
    } while (speed < 0);
    
    do {
        cout << "How many hours has it traveled? ";
        cin >> hours;
        if (hours < 1) cout << "Time traveled must be at least 1 hour.\n";
    } while (hours < 1);
    
    cout << "\nHour\tDistance Traveled\n";
    cout << "--------------------------------\n";
    
    for (int hour = 1; hour <= hours; hour++) {
        cout << hour << "\t" << (speed * hour) << endl;
    }
}