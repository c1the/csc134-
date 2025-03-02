// CSC 134
// M3Lab1
// Gabrielle Humphrey
// 3/2/2025

#include <iostream>
#include <string>

using namespace std;

int main() {
  
  
  string choice; 

  cout << "A wild beast appears! Do you choose to fight or run?" << endl;
  cout << "Type 'fight' or 'run': "; 
  cin >> choice;

  if (choice == "fight") {
  	cout << "You grab a stick and prepare to fight!" << endl;
  	cout << "After a tough battle, you defeat the beast!" << endl;
  }
  else if (choice == "run") {
  	cout << "You sprint away as fast as you can!" << endl;
  	cout << "Luckily, you find a hiding spot and the beast loses interest." << endl;
  }
  else {
  	cout << "I'm sorry, that is not a valid choice." << endl;
  }

  cout << "Thanks for playing!" << endl; 
  return 0; 

} 
