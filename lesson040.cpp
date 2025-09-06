#include <iostream>
using namespace std;

// ------------------- Function Declaration -------------------
// Function: factorial
// Purpose: Calculates the factorial of a number using recursion
// Parameter:
//    - x (int): the number to calculate factorial for
// Returns: factorial as int
int factorial(int x);

// ------------------- Main Function -------------------
int main()
{
    int number, result;

    // Loop to allow multiple inputs
    do
    {
        // Ask user for a number
        cout << "Enter a number: ";
        cin >> number;

        // Input validation: factorial is only for non-negative numbers
        if (number < 0)
        {
            cout << "Please enter a positive number or zero\n";
            break; // exit the loop for negative input
        }

        // Call factorial function
        result = factorial(number);

        // Display the result
        cout << number << "! = " << result << endl;

    } while (number >= 0); // Continue until user enters negative number

    return 0; // Program ends successfully
}

// ------------------- Recursive Function Definition -------------------
int factorial(int x)
{
    // Base case: 0! = 1
    if (x == 0)
    {
        return 1;
    }
    // Recursive case: n! = n * (n-1)!
    else
    {
        return x * factorial(x - 1);
    }
}

/*
------------------- Concept Explanation -------------------

1. Factorial Concept:
   - Factorial of a non-negative integer n is:
       n! = n * (n-1) * (n-2) * ... * 1
   - Special case: 0! = 1

2. Recursive Function:
   - factorial(x) calls itself with x-1 until it reaches the base case (x == 0)
   - Base case stops the recursion
   - Recursive case performs multiplication

3. Example Calculation:
   Input: 5
   factorial(5) = 5 * factorial(4)
   factorial(4) = 4 * factorial(3)
   factorial(3) = 3 * factorial(2)
   factorial(2) = 2 * factorial(1)
   factorial(1) = 1 * factorial(0)
   factorial(0) = 1 (base case)
   Result: 5 * 4 * 3 * 2 * 1 * 1 = 120

4. Input Validation:
   - Factorial is not defined for negative numbers
   - Program checks and stops for negative input

5. Key Points for Students:
   - Always define a **base case** for recursion
   - Recursive calls are resolved **from last to first**
   - Factorial is a classical example for teaching recursion
   - Using recursion simplifies code compared to loops

6. Output Examples:
   Input: 0 → Output: 0! = 1
   Input: 5 → Output: 5! = 120
   Input: -3 → Output: Please enter a positive number or zero
*/
