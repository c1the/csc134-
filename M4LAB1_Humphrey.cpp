/*
CSC 134
M4LAB1
Gabrielle Humphrey
3/20/2025
*/

#include <iostream>
using namespace std;

int main() {
    int height, width;

    cout << "Enter the height of the block: ";
    cin >> height;
    cout << "Enter the width of the block: ";
    cin >> width;

    for (int i = 0; i < height; i++) {
        for (int j = 0; j < width; j++) {
            cout << "* "; 
        }
        cout << endl; 
    }

    return 0;
}