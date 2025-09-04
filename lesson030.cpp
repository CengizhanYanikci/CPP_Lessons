#include <iostream>

using namespace std;

int main()
{
    // Declare variables
    int i, j;           // loop counters
    int number;         // number entered by user
    int perfectNum = 0; // sum of divisors

    // Start a do-while loop to allow multiple inputs
    do
    {
        // Ask the user to enter a number (0 to exit)
        cout << "Enter a number (Exit = 0): ";
        cin >> number;

        // Reset perfectNum for each new input
        perfectNum = 0;

        // If user enters 0, exit the loop
        if (number == 0)
        {
            break;
        }

        // Loop through all numbers from 1 to 'number'
        for (j = 1; j <= number; j++)
        {
            // Find sum of divisors of j
            for (i = 1; i < j; i++)
            {
                if (j % i == 0) // if i is a divisor of j
                {
                    perfectNum = perfectNum + i; // add to sum
                }
            }

            // Check if the sum of divisors equals the number itself
            if (perfectNum == j)
            {
                cout << j << " is a Perfect Number" << endl;
            }
            else
            {
                cout << j << " is not a perfect number" << endl;
            }

            // Reset perfectNum for the next number
            perfectNum = 0;
        }

        // Separator for readability
        cout << "----------------------------\n----------------------------" << endl;

    } while (number != 0); // continue until user enters 0

    return 0; // program ends successfully
}
