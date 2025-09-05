#include <iostream>

using namespace std;

// ------------------- Function Declarations (Prototypes) -------------------
// These tell the compiler that the functions exist, 
// even though they are defined later in the code.

// A function that prints a person's information (name, sex, age)
void print(string fname, string sex, int age);

// A function that asks the user for two numbers and prints their sum
void sum();


// ------------------- Main Function -------------------
int main()
{
    // Call the print function with arguments
    // Arguments: "Anakin" (name), "Male" (sex), 18 (age)
    print("Anakin", "Male", 18);

    // Call the sum function to let the user input numbers and see their sum
    sum();

    // Return 0 means the program finished successfully
    return 0;
}



// ------------------- Function Definitions -------------------

// Function 1: print
// Parameters: fname (name), sex (male/female), age (years old)
// Purpose: Displays the information of a person
void print(string fname, string sex, int age)
{
    cout << "Name: " << fname << endl
         << "Age: " << age << endl
         << "Sex: " << sex << endl;
}



// Function 2: sum
// No parameters (void) because it asks the user for input directly
// Purpose: Reads two numbers from the user and prints their sum
void sum()
{
    int number1, number2;

    cout << "Enter First Number: ";
    cin >> number1; // Take input for the first number

    cout << "Enter Second Number: ";
    cin >> number2; // Take input for the second number

    // Print the sum in the format: a + b = result
    cout << number1 << " + " << number2 << " = " << number1 + number2;
    cout << endl;
}
