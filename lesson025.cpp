#include <iostream>
#include <cmath>  // We include <cmath> to use the sqrt() function

using namespace std;

int main()
{
    // We declare our variables:
    // number -> the user input
    // i, j -> loop counters
    // controller -> will be used as a flag (1 = prime, 2 = not prime)
    short int number, i, j, controller = 1;

    // We start an infinite loop using while(true).
    // This means the program will keep running until the user stops it manually.
    while (true)
    {
        // Reset the controller before each input
        controller = 1;

        // Ask the user for a number
        cout << "\nEnter a Number:  ";
        cin >> number;

        // Outer loop: goes from 2 up to the number the user entered
        // This loop will check every integer between 2 and the user’s number
        for (i = 2; i <= number; i++)
        {
            // Assume that i is prime at the beginning
            controller = 1;

            // Inner loop: check if i has a divisor
            // BUT — we don’t need to check all numbers up to i.
            // Instead, we check only up to sqrt(i).
            // Example: For 10, sqrt(10) ≈ 3.16 → we only check divisors 2 and 3.
            // If 10 is not divisible by 2 or 3, then it must be prime.
            for (j = 2; j <= sqrt(i); j++)
            {
                // If i can be divided by j with no remainder, it is NOT prime
                if (i % j == 0)
                {
                    controller = 2;  // Set flag to "not prime"
                    break;           // Stop checking further divisors
                }
            }

            // After the inner loop finishes:
            // If controller is still 1 → no divisor was found → i is prime
            if (controller == 1)
            {
                cout << i << "  ";  // Print the prime number
            }
        }
    }

    return 0;
}
