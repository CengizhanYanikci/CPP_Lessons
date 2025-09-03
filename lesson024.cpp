#include <iostream>
using namespace std;

int main()
{
    // Declare three short integer variables:
    // 'number' → stores the number entered by the user
    // 'i' → used as a counter for loops
    // 'control' → acts as a flag to indicate whether the number is prime or not
    short int number, i, control;

    // Initialize 'i' to 1, which will be used for controlling the outer while loop
    i = 1;

    // Outer while loop:
    // This loop runs repeatedly as long as i == 1
    // The loop allows the user to check multiple numbers until they choose to exit
    while (i == 1)
    {
        // Ask the user to enter a number
        cout << "Enter a number (Exit: 1):  ";
        cin >> number;

        // If the user enters 1, exit the program immediately
        if (number == 1)
        {
            break; // End the program
        }
        else
        {
            // Check if the number is less than 2
            if (number < 2)
            {
                // Numbers less than 2 cannot be prime
                cout << "Please enter a number greater than one\n";

                // Skip the rest of the loop and go back to the beginning
                // to ask the user for a new number
                continue;
            }

            // Reset 'control' flag to 0 for each new number
            // 0 means "still prime until proven otherwise"
            control = 0;

            // Check for factors of the number from 2 up to number / 2
            for (i = 2; i <= number / 2; i++)
            {
                // If number is divisible by i, it is not prime
                if (number % i == 0)
                {
                    control = 2; // Set flag to indicate number is not prime
                    break;       // Exit the for loop early, no need to check further
                }
            }

            // After checking all potential factors, evaluate the flag
            if (control == 2)
            {
                cout << "This number is not prime number" << endl;
            }
            else
            {
                cout << "This number is prime number" << endl;
            }

            // Reset i to 1 so that the outer while loop continues
            i = 1;
        }
    }

    // Program ends
    return 0;
}
