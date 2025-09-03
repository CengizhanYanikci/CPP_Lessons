#include <iostream>
using namespace std;

int main()
{
    // Declare three short integer variables for loops:
    // i → controls the outer loop
    // j → controls the middle (inner) loop
    // l → controls the innermost loop
    short int i, j, l;

    // ------------------- Outer loop -------------------
    // This loop runs from i = 1 to i = 3
    for (i = 1; i <= 3; i++)
    {
        // Print the current iteration of the outer loop
        cout << "C++ outer loops: " << i << "\n";

        // ------------------- Middle (inner) loop -------------------
        // This loop runs from j = 1 to j = 7 for each iteration of i
        for (j = 1; j <= 7; j++)
        {
            // Print the current iteration of the middle loop with a tab for indentation
            cout << "\tInner loops: " << j << "\n";

            // ------------------- Innermost loop -------------------
            // This loop runs from l = 1 to l = 2 for each iteration of j
            for (l = 1; l <= 2; l++)
            {
                // Print the current iteration of the innermost loop with double tabs for indentation
                cout << "\t\tInnermost loop" << l << "\n";
            }
        }
    }

    // Program ends
    return 0;
}
