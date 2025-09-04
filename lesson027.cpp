#include <iostream>
#include <climits> // To use INT_MAX and INT_MIN

using namespace std;

int main()
{
    // Declare variables:
    int number;          // to store the current number entered by user
    int i = 1;           // counter for numbering the inputs
    int minNum = INT_MAX; // initialize minNum to the largest possible int
    int maxNum = INT_MIN; // initialize maxNum to the smallest possible int

    // Start a do-while loop to read numbers at least once
    do
    {
        // Ask the user for the i-th number
        cout << i << "th number (Exit: 0): ";
        cin >> number;

        // If the user enters 0, exit the loop
        if (number == 0)
        {
            break;
        }

        // Update minNum if the entered number is smaller than current minNum
        if (number < minNum)
        {
            minNum = number;
        }

        // Update maxNum if the entered number is larger than current maxNum
        if (number > maxNum)
        {
            maxNum = number;
        }

        // Increment the counter for next input
        i++;
    } while (number != 0); // continue the loop until 0 is entered

    // Display the minimum and maximum numbers entered
    cout << "Minimum Number is " << "\'" << minNum << "\'" << endl;
    cout << "Maximum Number is " << "\'" << maxNum << "\'" << endl;

    return 0; // indicate that program ended successfully
}
