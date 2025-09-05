#include <iostream>

using namespace std;

int main(){
    // ------------------- Variable Declaration -------------------
    // food is a string variable that stores the value "Burger\n"
    string food = "Burger\n";

    // ------------------- Reference Variable -------------------
    // meal is a reference to food
    // A reference acts like an alias for the original variable.
    // Any changes to 'meal' will affect 'food' and vice versa.
    string &meal = food;

    // ------------------- Output -------------------
    // Printing 'meal' prints the same value as 'food' because it's a reference
    cout << meal; // Output: Burger

    // Printing 'food' again shows the same value
    cout << food; // Output: Burger

    return 0;
}

/*
------------------- Concept Explanation -------------------

1. Reference Variables:
   - Declared with '&' after the type: string &meal = food;
   - They are NOT separate variables; they refer to the original variable.
   - Useful when you want to pass variables to functions without copying
     or when you want an alias for easier code readability.

2. Behavior:
   - meal and food are two names for the same memory location.
   - If we modify 'meal', 'food' also changes:
       meal = "Pizza\n";
       cout << food; // Output: Pizza

3. Difference from Pointers:
   - References cannot be null and must be initialized when declared.
   - Once set, a reference cannot refer to another variable (unlike pointers).

4. In this example:
   - No modification is done through 'meal', so printing 'meal' and 'food'
     both output "Burger".
*/
