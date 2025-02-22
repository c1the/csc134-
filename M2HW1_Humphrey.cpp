/*
CSC 134
M2HW1 - Gold
Gabrielle Humphrey
2/22/2025
*/

#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    cout << "Question 1" << endl;
    int accountNumber = 123456; 

    string name;
    double startingBalance, deposit, withdrawal, finalBalance;
    
    cout << "Enter your name: ";
    cin >> name;
    
    cout << "Enter your starting account balance: $";
    cin >> startingBalance;
    
    cout << "Enter the amount to deposit: $";
    cin >> deposit;
    
    cout << "Enter the amount to withdraw: $";
    cin >> withdrawal;
    
    finalBalance = startingBalance + deposit - withdrawal;
    

    cout << "Name: " << name << endl;
    cout << "Account Number: " << accountNumber << endl;
    cout << fixed << setprecision(2);
    cout << "Final Account Balance: $" << finalBalance << endl;

    //Question 2
    cout << "Question 2" << endl;

    const double COST_PER_CUBIC_FOOT = 0.3;
    const double CHARGE_PER_CUBIC_FOOT = 0.52;

    double length, width, height, volume, cost, charge, profit;
    cout << setprecision(2) << fixed << showpoint;
    cout << "Enter the dimensions of the crate (in feet): \n";
    cout << "Length: ";
    cin >> length;
    cout << "Width: ";
    cin >> width;
    cout << "Height: ";
    cin >> height;

    volume = length * width * height;
    cost = volume * COST_PER_CUBIC_FOOT;
    charge = volume * CHARGE_PER_CUBIC_FOOT;
    profit = charge - cost;

    cout << "The volume of the crate is ";
    cout << volume << " cubic feet. \n";
    cout << "Cost to build: $" << cost << endl;
    cout << "Charge to customer: $" << charge << endl;
    cout << "Profit: $" << profit << endl;
    
    //Question 3
    cout << "Question 3" << endl;

    int pizzas, slicesPerPizza, visitors, totalSlices, leftoverSlices;
    
    cout << "How many pizzas did you order? ";
    cin >> pizzas;
    cout << "How many slices per pizza? ";
    cin >> slicesPerPizza;
    cout << "How many visitors are coming? ";
    cin >> visitors;
    
    totalSlices = pizzas * slicesPerPizza;
    leftoverSlices = totalSlices - (visitors * 3);
    
    cout << "Leftover slices: " << leftoverSlices << endl;

    //Question 4
    cout << "Question 4" << endl;
    
    string letsGo = "Let's go ";
    string school = "FTCC";
    string team = "Trojans";
    string cheerOne = letsGo + school;
    string cheerTwo = letsGo + team;
    
    cout << "\nQuestion 4: Cheering Program\n";
    cout << cheerOne << endl;
    cout << cheerOne << endl;
    cout << cheerOne << endl;
    cout << cheerTwo << endl;
    return 0;
}