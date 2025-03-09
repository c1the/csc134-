// CSC 134
// M3HW1 - Gold
// Gabrielle Humphrey
// 3/9/2025

#include <iostream>
#include <cstdlib> 
using namespace std;

int main() {
    // Question 1
    cout << "Question 1" << endl;
    cout << "Hello, I’m a C++ program!" << endl;
    cout << "Do you like me? Please type yes or no." << endl;

    string response;
    cin >> response;

    if (response == "yes") {
        cout << "That’s great! I’m sure we’ll get along." << endl;
    } else if (response == "no") {
        cout << "Well, maybe you’ll learn to like me later." << endl;
    } else {
        cout << "If you’re not sure… that’s OK." << endl;
    }

    cout << endl;

    // Question 2
    cout << "Question 2" << endl;
    double mealPrice, tax, tip = 0.0, total;
    const double TAX_RATE = 0.07;
    int orderType;

    cout << "Enter the price of the meal: ";
    cin >> mealPrice;

    cout << "Please enter 1 if the order is dine in, 2 if it is to go: ";
    cin >> orderType;

    tax = mealPrice * TAX_RATE;

    if (orderType == 1) {
        tip = mealPrice * 0.15; 
    }

    total = mealPrice + tax + tip;

    cout << "Meal Price: $" << mealPrice << endl;
    cout << "Tax: $" << tax << endl;
    if (orderType == 1) {
        cout << "Tip: $" << tip << endl;
    }
    cout << "Total Amount Due: $" << total << endl;

    cout << endl;

    // Question 3
    cout << "Question 3" << endl;
    string choice1, choice2;

    cout << "You are in a dark forest. Do you go 'left' or 'right'?" << endl;
    cin >> choice1;

    if (choice1 == "left") {
        cout << "You find a treasure chest! Do you 'open' it or 'leave' it?" << endl;
        cin >> choice2;

        if (choice2 == "open") {
            cout << "You found gold! You win!" << endl;
        } else if (choice2 == "leave") {
            cout << "You walk away empty-handed. Game over." << endl;
        } else {
            cout << "Invalid choice. Game over." << endl;
        }
    } else if (choice1 == "right") {
        cout << "You fall into a pit. Game over." << endl;
    } else {
        cout << "Invalid choice. Game over." << endl;
    }

    cout << endl;

    // Question 4
    cout << "Question 4" << endl;

    int num1 = rand() % 10; 
    int num2 = rand() % 10; 

    int userAnswer, correctAnswer;
    correctAnswer = num1 + num2;

    cout << "What is " << num1 << " plus " << num2 << "?" << endl;
    cin >> userAnswer;

    if (userAnswer == correctAnswer) {
        cout << "Correct!" << endl;
    } else {
        cout << "Incorrect. The correct answer is " << correctAnswer << "." << endl;
    }

    return 0;
}