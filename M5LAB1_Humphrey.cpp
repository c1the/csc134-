/*
CSC 134
M5LAB1
Gabrielle Humphrey
2/22/2025
*/

#include <iostream>
using namespace std;

void main_menu();
void front_door();
void back_door();
void go_home();

int main() {
  cout << "Simple Adventure Game" << endl;
  main_menu();
  cout << "Game Over" << endl;
  return 0;
}

void main_menu() {
  cout << "You see a house. What do you do?" << endl;
  cout << "1. Try front door" << endl;
  cout << "2. Try back door" << endl;
  cout << "3. Go home" << endl;
  cout << "Choose (1-3): ";
  
  int choice;
  cin >> choice;
  
  if (choice == 1) {
    front_door();
  } 
  else if (choice == 2) {
    back_door();
  } 
  else if (choice == 3) {
    go_home();
  } 
  else {
    cout << "Invalid choice. Try again." << endl;
    main_menu();
  }
}

void front_door() {
  cout << "The front door is locked." << endl;
  cout << "1. Go to back door" << endl;
  cout << "2. Go home" << endl;
  cout << "Choose (1-2): ";
  
  int choice;
  cin >> choice;
  
  if (choice == 1) {
    back_door();
  } 
  else {
    go_home();
  }
}

void back_door() {
  cout << "The back door is open! You go inside." << endl;
  cout << "You found a treasure! Yayy" << endl;
}

void go_home() {
  cout << "You went home. The end." << endl;
}