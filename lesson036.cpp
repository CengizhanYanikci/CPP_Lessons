#include <iostream>
using namespace std;

// ------------------- Function Declaration -------------------
// swapNum is a function that swaps the values of two integers
// Parameters:
//   - x (int&) : reference to the first integer
//   - y (int&) : reference to the second integer
// Using references allows the function to modify the original variables.
void swapNum(int &x, int &y);

// ------------------- Main Function -------------------
int main() {
    int firstNum, secondNum;

    // Ask user to enter the first number
    cout << "First Number: ";
    cin >> firstNum;

    // Ask user to enter the second number
    cout << "Second Number: ";
    cin >> secondNum;

    // Display numbers before swapping
    cout << "*************Before Swap*************" << endl
         << "First Number: " << firstNum << " | "
         << "Second Number: " << secondNum << endl;

    // Call the swapNum function to swap values
    swapNum(firstNum, secondNum);

    // Display numbers after swapping
    cout << "-------------------------------------" << endl;
    cout << "*************After Swap************* " << endl
         << "First Number: " << firstNum << "  "
         << "Second Number: " << secondNum << endl;
    cout << "-------------------------------------" << endl;

    return 0; // Program finished successfully
}

// ------------------- Function Definition -------------------
void swapNum(int &x, int &y) {
    // Create a temporary variable to hold the value of x
    int z = x;

    // Assign the value of y to x
    x = y;

    // Assign the value stored in temporary variable z to y
    y = z;
}

/*
------------------- Concept Explanation -------------------

1. Pass by Reference:
   - The '&' symbol after the type (int &x) means the function receives a reference to the original variable.
   - Any change made to x or y inside swapNum directly affects firstNum and secondNum in main.

2. Swap Logic:
   - A temporary variable z is used to store one value so we don't lose it.
   - Step-by-step:
       z = x;  // Store first number
       x = y;  // Assign second number to first
       y = z;  // Assign stored first number to second

3. Benefits:
   - No need to return multiple values; references allow direct modification.
   - More efficient than pass by value for large objects, because no copying occurs.

4. Output Example:
   Input: firstNum = 5, secondNum = 10
   Before Swap: First = 5, Second = 10
   After Swap:  First = 10, Second = 5

5. Key Takeaway for Students:
   - References can be used in functions to modify original variables.
   - Swap is a classic example demonstrating this concept.
*/
