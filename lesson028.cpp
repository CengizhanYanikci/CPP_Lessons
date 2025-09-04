#include <iostream>
#include <cmath> // included for math functions, though not strictly needed here
using namespace std;

int main()
{
    // Declare variables
    int x, y;            // the two numbers input by the user
    int smallnumber;     // to store the smaller of the two numbers
    int i;               // loop counter
    int GCD = 1;         // Greatest Common Divisor, initialized to 1
    int LCM;             // Least Common Multiple

    // Ask the user to enter two numbers
    cout << "Enter two Numbers: ";
    cin >> x >> y;

    // Determine which number is smaller
    if (x < y)
    {
        smallnumber = x;
    }
    else
    {
        smallnumber = y;
    }

    // Loop from the smaller number down to 2 to find the GCD
    for (i = smallnumber; i > 1; i--)
    {
        // If 'i' divides both x and y, it is the GCD
        if ((x % i == 0) && (y % i == 0))
        {
            GCD = i;
            break; // exit loop once GCD is found
        }
    }

    // Calculate the LCM based on GCD
    if (GCD != 1) // if GCD is greater than 1
    {
        LCM = x * y / GCD; // formula: LCM = (x * y) / GCD
        cout << "GCD is " << GCD << endl;
    }
    else // if x and y are co-prime
    {
        LCM = x * y; // LCM is simply product of numbers
        cout << "GCD is 1" << endl;
    }

    // Display the LCM
    cout << "LCM is " << LCM << endl;

    return 0; // indicate program ended successfully
}
