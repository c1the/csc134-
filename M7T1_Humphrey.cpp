// CSC 134
// M7T1 - Restaurant Rating
// norrisa
// 4/29/24

#include <iostream>
using namespace std;

class Restaurant {
  private:
    string name;    
    double rating;  

  public:
    Restaurant(string n, double r) {
        name = n;
        rating = r;
    }
    void setName(string n) {
        name = n; 
    }
    void setRating(double r) {
        rating = r;
    }
    string getName() const {
        return name;
    }
    double getRating() const {
        return rating;
    }
    void printInfo() {
        cout << "Name: " << name << " ";
        cout << "(" << rating << "/5 stars)" << endl;
    }
};

int main() {
    cout << "M7T1 - Restaurant Reviews" << endl;

    Restaurant breakfast_place("Waffle House", 3.0);
    Restaurant lunch_place("Mi Casita", 4.5);
    Restaurant dinner_place("Olive Garden", 4.2);  

    cout << "Review info" << endl;

    cout << "Breakfast:" << endl;
    breakfast_place.printInfo();
    
    cout << "Lunch:" << endl;
    lunch_place.printInfo();
    
    cout << "Dinner:" << endl;
    dinner_place.printInfo();  

    return 0;
}