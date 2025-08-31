#include <iostream>
using namespace std;

int main()
{
    // Declare two variables:
    // 'num' will store the number entered by the user.
    // 'i' will be used as a counter in the multiplication loop.
    // Both start at 1.
    short int num = 1, i = 1;

    // Outer while loop:
    // This loop will keep asking the user for a number
    // until the user enters 0 (exit condition).
    while (num != 0)
    {
        // Reset the counter 'i' to 1 every time the user enters a new number.
        i = 1;
        
        cout << "Enter a number (1-10) (exit: 0): ";
        cin >> num;

        // If the number is less than 0 or greater than 10, it is invalid.
        if (num < 0 || num > 10)
        {
            cout << "Please enter between 1 and 10\n";
        }
        else
        {
            // If the input is valid (between 1 and 10, or 0 for exit),
            // and not equal to 0, then print the multiplication table.
            while (i <= 10 && num != 0)
            {
                // Print one line of the multiplication table:
                // Example: "5 X 3 = 15"
                cout << num << " X " << i << " = " << num * i << "\n";

                // Increase counter 'i' by 1, so the next line is printed.
                i++;
            }
        }
    }

    return 0;
}
