#include <iostream>
using namespace std;

// ------------------- Function Declaration -------------------
// Function: exp
// Purpose: Calculates x raised to the power y (x^y)
// Parameters:
//    - x (float): the base
//    - y (float): the exponent
// Returns: result as float
float exp(float x, float y);

// ------------------- Main Function -------------------
int main()
{
    float base, result = 0; // base = number to be raised, result stores the outcome
    int exponent;           // exponent = power

    // Ask user for base and exponent
    cout << "Enter base and exponent values: ";
    cin >> base >> exponent;

    // Call the exp function to calculate power
    result = exp(base, exponent);

    // Print the result
    cout << "Result: " << result << endl;

    return 0; // Program ends successfully
}

// ------------------- Function Definition -------------------
float exp(float x, float y)
{
    float result = 1; // Initialize result as 1 (multiplicative identity)
    int i;

    // Special case: if base is 0
    if (x == 0)
    {
        result = 0; // 0 raised to any power (except 0) is 0
    }
    else
    {
        // Special case: exponent is 0
        if (y == 0)
        {
            result = 1; // Any non-zero number raised to 0 is 1
        }
        // Negative exponent
        else if (y < 0)
        {
            // Multiply 1/x, -y times
            // Example: x^-3 = 1/x * 1/x * 1/x
            for (i = 0; i < -y; i++)
            {
                result *= 1 / x;
            }
        }
        // Positive exponent
        else
        {
            // Multiply x, y times
            for (i = 0; i < y; i++)
            {
                result *= x;
            }
        }
    }

    // Return the final calculated result
    return result;
}

/*
------------------- Concept Explanation -------------------

1. Power Function (x^y):
   - We calculate the result by multiplying the base repeatedly.
   - Positive exponent: multiply base y times.
   - Negative exponent: multiply 1/base (-y) times.
   - Exponent 0: always return 1 (except 0^0, undefined but ignored here).
   - Base 0: result is 0 for any non-zero exponent.

2. Loops:
   - for loop is used to multiply the base repeatedly.
   - In negative exponent case, we multiply 1/x repeatedly.

3. Edge Cases:
   - x == 0: avoids division by zero in negative exponent case.
   - y == 0: mathematical rule, any non-zero number to 0 power is 1.
   - y < 0: converts negative exponent into repeated multiplication of reciprocal.

4. Why Use Function:
   - Modularizes code: calculation logic is inside a separate function.
   - Main function remains clean and readable.
   - Can be reused with different base/exponent inputs.

5. Example Outputs:
   Input: base = 2, exponent = 3 -> Result: 8
   Input: base = 2, exponent = -2 -> Result: 0.25
   Input: base = 0, exponent = 5 -> Result: 0
   Input: base = 5, exponent = 0 -> Result: 1
*/
