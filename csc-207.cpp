#include <iostream>
using namespace std;
int main() {
    // create variable number
    int number;
    // ask user to input number 
    cout << "input a number:" << endl;
    cin >> number;
    // check if number is even or odd
    if (number % 2 == 0) {
        cout << "The number: " << number << " is even" << endl;
    } else {
        cout << "The number: " << number << " is odd" << endl;
    }
    return 0;
}

// Assignment by Oladimeji Samuel Marvelous 251911527