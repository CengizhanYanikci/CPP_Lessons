#include <iostream>
using namespace std;

int main() {
    // Declare two integer variables
    int number, highernum;

    // Ask the user to enter the "higher number"
    cout << "Write higher number: ";
    cin >> highernum;

    // Ask the user to enter their own number
    cout << "Write your number: ";
    cin >> number;

    // Compare the user's number with the higher number
    if (number < highernum) {
        // If user's number is smaller
        cout << number << " is lower than " << highernum << endl;
    } 
    else if (number > highernum) {
        // If user's number is greater
        cout << number << " is higher than " << highernum << endl;
    } 
    else {
        // Optional: If numbers are equal
        cout << number << " is equal to " << highernum << endl;
    }

    return 0;
}
