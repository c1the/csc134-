// CSC 134
// M7T2 - Gold
// Gabrielle Humphrey
// 5/4/2025

#include <iostream>
using namespace std;

class Box {
  private:
    double width;
    double length;
    double height;

  public:
    void setWidth(double);
    void setLength(double);
    void setHeight(double);
    double getWidth() const;
    double getLength() const;
    double getHeight() const;
    double getVolume() const;
};

// Member function definitions
void Box::setWidth(double w) {
    width = w;
}

void Box::setLength(double len) {
    length = len;
}

void Box::setHeight(double h) {
    height = h;
}

double Box::getWidth() const {
    return width;
}

double Box::getLength() const {
    return length;
}

double Box::getHeight() const {
    return height;
}

double Box::getVolume() const {
    return width * length * height;
}

// Main function
int main() {
    Box myBox;
    double w, l, h;

    cout << "This program calculates the volume of a box.\n";

    cout << "Enter the width: ";
    cin >> w;
    while (w <= 0) {
        cout << "Width must be positive. Enter again: ";
        cin >> w;
    }

    cout << "Enter the length: ";
    cin >> l;
    while (l <= 0) {
        cout << "Length must be positive. Enter again: ";
        cin >> l;
    }

    cout << "Enter the height: ";
    cin >> h;
    while (h <= 0) {
        cout << "Height must be positive. Enter again: ";
        cin >> h;
    }

    myBox.setWidth(w);
    myBox.setLength(l);
    myBox.setHeight(h);

    cout << "\nHere is the box's data:\n";
    cout << "Width: " << myBox.getWidth() << endl;
    cout << "Length: " << myBox.getLength() << endl;
    cout << "Height: " << myBox.getHeight() << endl;
    cout << "Volume: " << myBox.getVolume() << endl;

    return 0;
}
