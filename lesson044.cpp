#include <iostream>
#include <string>
#include <cctype> // For character classification functions like isalnum, isalpha, isdigit
using namespace std;

// ------------------- Main Function -------------------
int main() {
    char ch; // Variable to store a single character entered by the user

    // Ask the user to enter a character
    cout << "Enter a character: ";
    cin >> ch; // Take one character input from the user

    // Check if the character is alphanumeric (letter or digit)
    if (isalnum(ch)) {
        cout << "You entered a letter or number" << endl;
    } else {
        cout << "You did not" << endl; // If it’s not alphanumeric (like @, #, space), print this
    }

    return 0; // Program finished successfully
}

/*
------------------- Concept Explanation -------------------

1. <cctype> Library:
   - Provides functions for checking and transforming characters.
   - Example functions:
       isalnum(ch) → true if ch is a letter (A–Z, a–z) or digit (0–9)
       isalpha(ch) → true if ch is only a letter
       isdigit(ch) → true if ch is only a number
       isspace(ch) → true if ch is whitespace (space, tab, newline)

2. Function Used:
   - isalnum(ch):
       * Returns nonzero (true) if ch is alphabetic or numeric.
       * Returns 0 (false) if ch is a symbol, punctuation, or space.

3. Program Logic:
   - User enters one character.
   - Program checks it using isalnum().
   - If true → “letter or number” is printed.
   - If false → “You did not” is printed.

4. Example Outputs:
   Input: 'A' → Output: "You entered a letter or number"
   Input: '9' → Output: "You entered a letter or number"
   Input: '@' → Output: "You did not"
   Input: ' ' (space) → Output: "You did not"

5. Key Takeaway for Students:
   - Character classification functions like isalnum, isalpha, isdigit, isspace 
     help analyze and validate user input easily.
   - Great for building programs that check what type of character was entered.
*/
