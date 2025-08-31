#include <iostream>
using namespace std;

int main(){
    // Declare two variables:
    // 'number' will store the user's input.
    // 'i' will be used as a counter in the inner while loop.
    short int number, i = 1;

    // Start of the outer do-while loop:
    // This loop will keep asking the user for a number until the input is invalid
    // (number < 1 or number > 50), or the user enters a number outside the range.
    do
    {
        // Reset counter 'i' to 1 for every new number input
        i = 1;

        // Ask the user for a number between 1 and 50
        cout << "Enter a number (1-50): ";
        cin >> number;

        // Check if the entered number is out of range
        if (number < 1 || number > 50)
            // 'break' immediately exits the **nearest loop**, which is the do-while loop.
            // This means the program will stop asking for numbers and exit the loop.
            break;

        // Inner while loop: prints numbers from 1 up to the entered number
        while (i <= number)
        {
            cout << i << "  ";
            i++;  // increment counter
        }

        // Move to the next line after printing the sequence
        cout << "\n";

    // Continue looping only if the number is in the valid range (1 to 50)
    } while (number >= 1 && number <= 50);

    // Program ends here
    return 0;
}
