#include <iostream>
using namespace std;

// ------------------- Function Declaration -------------------
// Function: sum
// Purpose: Calculates the sum of all numbers from 1 to x recursively
// Parameter:
//    - x (int): the number to sum up to
// Returns: the sum as int
int sum(int x);

// ------------------- Main Function -------------------
int main()
{
    int result, number;

    // Ask user for a number
    cout << "Enter a Number: ";
    cin >> number;

    // Call the recursive function sum
    result = sum(number);

    // Print the result
    cout << "Result: " << result;

    return 0; // Program ends successfully
}

// ------------------- Recursive Function Definition -------------------
int sum(int x)
{
    // Base case: if x is 0, stop recursion
    if (x == 0)
        return 0;

    // Recursive case: sum(x) = x + sum(x-1)
    // Example: sum(3) = 3 + sum(2)
    return x + sum(x - 1);
}

/*
------------------- Concept Explanation -------------------

1. Recursive Functions:
   - A function that calls itself is called a recursive function.
   - Recursive functions need a base case to stop the recursion, otherwise it will run infinitely.

2. How This Function Works:
   - sum(x) returns x + sum(x-1)
   - Base case: if x == 0, return 0 (stops recursion)
   - Example calculation:
       Input: 3
       sum(3) = 3 + sum(2)
       sum(2) = 2 + sum(1)
       sum(1) = 1 + sum(0)
       sum(0) = 0  (base case)
       Total: 3 + 2 + 1 + 0 = 6

3. Key Points for Students:
   - Always define a base case in recursion.
   - Recursive calls happen **before** returning the value.
   - Each recursive call is pushed onto the **call stack** and resolved from last to first.
   - Recursive functions can replace loops in many cases, especially for mathematical series, factorials, Fibonacci, etc.

4. Output Example:
   Input: 5
   Calculation: 5 + 4 + 3 + 2 + 1 + 0
   Result: 15
*/
