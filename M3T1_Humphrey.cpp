/*
CSC 134
M3T1
Gabrielle Humphrey
2/22/2025
*/

#include <iostream>
using namespace std;

int main(){
    int widthOne, lengthOne, widthTwo, lengthTwo;
    int areaOne, areaTwo;
    cout <<  "Please enter the width and height of the first\n";
    cout << "rectangle, separated by a space or newline" << endl;
    cin >> widthOne >> lengthOne;

    cout <<  "Please enter the width and height of the second\n";
    cout << "rectangle, separated by a space or newline" << endl;
    cin >> widthTwo >> lengthTwo;

    areaOne = widthOne * lengthOne;
    areaTwo = widthTwo * lengthTwo;

    cout << "Rectangle one has an area of " << areaOne << endl;
    cout << "Rectangle two has an area of " << areaTwo << endl;
}