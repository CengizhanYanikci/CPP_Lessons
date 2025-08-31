#include <iostream>
using namespace std;

int main()
{
    // Declare two integer variables:
    // 'myNumber' will store the user's input
    // 'mod' will store the remainder when dividing by 2
    int myNumber, mod;

    // Prompt the user to enter a number
    cout << "My number is: ";
    cin >> myNumber;

    // Check if the entered number is negative
    if (myNumber < 0)
    {
        // If the number is negative, display an error message
        cout << "The number you enter cannot be negative.";
    }
    else
    {
        // If the number is non-negative, calculate the remainder when divided by 2
        mod = myNumber % 2;

        // Check if the remainder is 0
        if (mod == 0)
        {
            // If remainder is 0, the number is even
            cout << "Your number is even number";
        }
        else
            // If remainder is not 0, the number is odd
            cout << "Your number is odd number";
    }

    // End of main function
    return 0;
}
