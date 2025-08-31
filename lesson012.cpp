#include <iostream>
using namespace std;

int main(){
    // Declare an integer variable named 'number' to store the user's input.
    int number;

    // Prompt the user to enter a number.
    cout << "Enter a number: ";

    // Read the user's input from the console and store it in the variable 'number'.
    cin >> number;

    // Check if the number is negative.
    if (number < 0)
    {
        // This block executes if the number is less than 0.
        cout << "Number is negative";
    }
    // Check if the number is positive.
    else if (number > 0)
    {
        // This block executes if the number is greater than 0.
        cout << "Number is positive";
    }
    // If the number is not negative or positive, it must be zero.
    else
        cout << "Number is zero";

    // End of main function, return 0 signals that the program executed successfully.
    return 0;
}
