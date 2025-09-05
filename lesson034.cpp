#include <iostream>
#include <cmath> // Include cmath for sqrt() and pow() functions
using namespace std;

// ------------------- Function Declarations -------------------

// Function 1: sum
// Purpose: Performs a mathematical operation using two integers
// Formula used: (((sqrt(x))^2)/2 * 5) * y
// Input: x (int), y (int)
// Output: calculated result (int)
int sum(int x, int y)
{
    return ((pow(sqrt(x), 2) / 2) * 5) * y;
}

// Function 2: difference
// Purpose: Demonstrates adding a new function to show modularity
// It subtracts the smaller number from the larger number
// Input: a (int), b (int)
// Output: difference (int)
int difference(int a, int b)
{
    if (a > b)
        return a - b;
    else
        return b - a;
}

// ------------------- Main Function -------------------
int main()
{
    // number1 and number2 are user inputs
    // storage keeps the result of the previous calculation
    int number1, number2, storage = 0;

    // This loop allows multiple calculations until the user enters 0
    do
    {
        // Ask user for first number (0 to exit)
        cout << "Enter First Number (Exit: 0): ";
        cin >> number1;

        // Ask user for second number (0 to exit)
        cout << "Enter Second Number (Exit: 0): ";
        cin >> number2;

        // Exit condition if any number is 0
        if (number1 == 0 || number2 == 0)
        {
            break;
        }
        // Input validation: first number must be positive
        else if (number1 < 0)
        {
            cout << "The first number entered must be positive" << endl;
            continue; // skip rest of the loop and ask again
        }

        // Display the last output if there is one
        if (storage != 0)
        {
            cout << "Last output: " << storage << endl;
        }

        // Call the sum function and store the result
        storage = sum(number1, number2);
        cout << "Output (sum function result): " << storage << endl;

        // Call the new difference function to demonstrate modularity
        int diff = difference(number1, number2);
        cout << "Output (difference function result): " << diff << endl;

        // Separator for readability
        cout << "***************************************************" << endl;

    } while (number1 != 0 && number2 != 0); // Continue until user enters 0

    // End of program
    return 0;
}

/*
------------------- Detailed Concept Explanation -------------------

1. Function Modularity:
   - Functions allow us to separate code into reusable blocks.
   - sum() calculates a custom mathematical expression.
   - difference() is a new function to demonstrate adding functionality without cluttering main().

2. Mathematical Operations in sum():
   - sqrt(x) returns the square root of x.
   - pow(sqrt(x), 2) squares the square root of x (essentially giving x back).
   - Dividing by 2 and multiplying by 5 shows that we can combine operations in one line.
   - Finally multiply by y to get the result.

3. Input Validation:
   - The program checks if number1 < 0 and prompts the user again.
   - 0 input exits the loop gracefully.

4. Storage Variable:
   - Keeps track of the last calculation result.
   - Demonstrates how a variable outside the loop can retain information between iterations.

5. Difference Function:
   - Shows how adding new functionality is easy with functions.
   - This function calculates absolute difference without using abs().

6. Looping Structure:
   - do-while is used to ensure at least one calculation is performed.
   - The loop continues until the user enters 0 for any input.

7. Why Modular Programming is Important:
   - Improves readability.
   - Avoids repeating code.
   - Easier to maintain and extend.
   - Students can test functions independently.

----------------------------------------------------------------------
*/