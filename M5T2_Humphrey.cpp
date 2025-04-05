#include <iostream>
using namespace std;

void printResult(int number, int result) {
    cout << number << " squared= " << result << endl;
}

int square(int number) {
    int result;
    result = number * number;
    return result;
}

int main() {
    int result;
    int count = 1;

    while (count <= 10) {
        result = square(count);
        printResult(count, result);
        count++;

    } 
}