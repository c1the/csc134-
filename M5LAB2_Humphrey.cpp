/*
CSC 134
M5LAB2
Gabrielle Humphrey
4/13/2025
*/


#include <iostream>
using namespace std;

// Function prototypes
double getLength();
double getWidth();
double getArea(double, double);
void displayData(double, double, double);

int main()
{
    // This program calculates the area of a rectangle.
    double length,    // The rectangle's length
           width,     // The rectangle's width
           area;      // The rectangle's area
          
    // Get the rectangle's length.
    length = getLength();
   
    // Get the rectangle's width.
    width = getWidth();
   
    // Get the rectangle's area.
    area = getArea(length, width);
   
    // Display the rectangle's data.
    displayData(length, width, area);
          
    return 0;
}


double getLength() {
    double length;
    cout << "Enter the rectangle's length: ";
    cin >> length;
    return length;
}

double getWidth() {
    double width;
    cout << "Enter the rectangle's width: ";
    cin >> width;
    return width;
}

double getArea(double length, double width) {
    return length * width;
}

void displayData(double length, double width, double area) {
    cout << "\nRectangle Measurements:" << endl;
    cout << "Length: " << length << endl;
    cout << "Width: " << width << endl;
    cout << "Area: " << area << endl;
}
