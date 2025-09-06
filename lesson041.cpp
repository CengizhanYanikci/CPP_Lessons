#include <iostream>  // Include the input/output stream library to use cout
using namespace std; // Use the standard namespace to avoid writing std:: before cout

int main() {
    // Declare and initialize a character array (C-style string)
    // The array has 6 elements:
    // 'H', 'E', 'L', 'L', 'O', and the null terminator '\0'
    // The '\0' character indicates the end of the string in C-style strings
    char myArray[6] = {'H', 'E', 'L', 'L', 'O', '\0'};

    // Output the string to the console
    // When we use cout with a char array, it will print characters
    // starting from the first element until it encounters the null character '\0'
    cout << myArray << endl; 

    return 0; // Return 0 indicates that the program executed successfully
}
