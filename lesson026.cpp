#include <iostream>
#include <cmath>  // Not needed here, but included in case we want math functions later

using namespace std;

int main()
{
    int i, number;
    long int factorial;  // "long int" is used because factorial grows very fast!

    // Infinite loop: program keeps running until you stop it manually
    while (true)
    {
        factorial = 1; // Reset factorial value before each calculation

        // Ask the user for a number
        cout << "\nEnter a number for factorial:  ";
        cin >> number;

        // Factorial definition:
        // n! = 1 × 2 × 3 × ... × n
        // Example: 5! = 1 × 2 × 3 × 4 × 5 = 120

        // Loop from 2 up to "number"
        // (we can start from 2 because multiplying by 1 does nothing)
        for (i = 2; i <= number; i++)
        {
            factorial *= i;  // Multiply factorial by i
        }

        // Print the result
        cout << "Factorial of " << number << " is " << factorial << endl;
    }

    return 0;
}
