#include <iostream>
using namespace std;

int main (){

    // Declare a short integer variable 'i'.
    short int i;

    // Start of a for loop.
    // The for loop has three parts:
    // 1. Initialization: i = 1 → 'i' starts at 1.
    // 2. Condition: i <= 100 → loop continues as long as 'i' is less than or equal to 100.
    // 3. Update: i += 5 → after each iteration, 'i' is increased by 5.
    for (i = 1; i <= 100; i += 5)
    {
        // Print the current value of 'i' followed by spaces.
        cout << i << "   ";
    }

    // After the loop finishes, print two newline characters for formatting.
    cout << "\n\n";

    // End of main function
    return 0;
}
