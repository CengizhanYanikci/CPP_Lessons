#include <iostream>
using namespace std;

// ------------------- Function Declarations -------------------
// Function overloading: same function name "sum" but different parameter types

// This version of sum works with integers
int sum(int, int);

// This version of sum works with doubles
double sum(double, double);


// ------------------- Main Function -------------------
int main()
{
    // Overloading demonstration
    // Depending on the type of arguments, the correct "sum" function is chosen.

    // Here we call sum with int values (1 and 8),
    // so the int version of sum(int, int) will be used.
    int x = sum(1, 8);

    // Here we call sum with double values (1.1 and 89.9),
    // so the double version of sum(double, double) will be used.
    double y = sum(1.1, 89.9);

    // Print the results
    cout << "Int: " << x << endl;
    cout << "Double: " << y << endl;

    return 0; // Program ends successfully
}


// ------------------- Function Definitions -------------------

// Integer version of sum
int sum(int x, int y) {
    return x + y;
}

// Double version of sum
double sum(double x, double y) {
    return x + y;
}


/*
------------------- Concept Explanation -------------------

1. Function Overloading:
   - In C++, multiple functions can have the same name if their parameter lists are different.
   - The compiler decides which function to use based on:
       - Number of parameters
       - Types of parameters
   - This is called "function overloading."

2. Why Use It?
   - Improves readability by using the same name for similar operations.
   - Reduces the need for different function names like sumInt, sumDouble, etc.
   - Makes the code more intuitive.

3. Example in This Code:
   - sum(int, int): works only with integers.
   - sum(double, double): works only with doubles.
   - When we call sum(1, 8), compiler chooses the int version.
   - When we call sum(1.1, 89.9), compiler chooses the double version.

4. Output:
   Int: 9
   Double: 91

5. Key Takeaway for Students:
   - Overloading is not about return type; it’s about parameter list.
   - Return type alone cannot overload a function.
   - Overloading makes functions flexible and reusable.
*/
