#include <iostream>   // For input/output operations (cout, cin)
#include <string>     // For using the string class
#include <cctype>     // For character classification functions (isalpha, isdigit, etc.)
using namespace std;

// ------------------- Main Function -------------------
int main()
{
    string txt; // Variable to hold user input

    // Ask the user to enter a line of text (can include spaces)
    cout << "Enter text: ";
    getline(cin, txt); // Read the entire line into txt

    // ----------- Print only alphabetic characters -----------
    cout << "Alphabet chars: ";
    for (int i = 0; i < txt.size(); i++) // Loop through each character in txt
    {
        if (isalpha(txt[i])) // Check if character is a letter (A–Z or a–z)
        {
            cout << txt[i] << " "; // Print the character followed by a space
        }
    }

    // ----------- Print only numeric characters -----------
    cout << "\nNumbers: ";
    for (int i = 0; i < txt.size(); i++) // Loop again through txt
    {
        if (isdigit(txt[i])) // Check if character is a digit (0–9)
        {
            cout << txt[i] << " ";
        }
    }

    // ----------- Print other characters (symbols/punctuation) -----------
    cout << "\nOther chars: ";
    for (int i = 0; i < txt.size(); i++) // Loop again through txt
    {
        // Condition explanation:
        // !(isalpha(txt[i])) → not a letter
        // (!isdigit(txt[i])) → not a digit
        // txt[i] != ' '      → exclude spaces (we don’t want spaces here)
        if (!(isalpha(txt[i])) && (!isdigit(txt[i])) && txt[i] != ' ')
        {
            cout << txt[i] << " "; // Print the symbol/punctuation
        }
    }

    cout << endl; // End with a new line
    return 0;     // Program finished successfully
}

/*
------------------- Concept Explanation -------------------

1. Program Purpose:
   - Take a line of text from the user.
   - Separate and display:
       * Alphabet characters
       * Numbers
       * Other characters (symbols, punctuation, etc., excluding spaces)

2. Functions Used (from <cctype>):
   - isalpha(ch): true if ch is a letter (A–Z, a–z).
   - isdigit(ch): true if ch is a digit (0–9).
   - We combine logical operators (! and &&) to filter "other characters".

3. Looping Logic:
   - The program loops three times over the string:
       * First loop → extracts letters.
       * Second loop → extracts digits.
       * Third loop → extracts everything else except spaces.

4. Example Input/Output:
   Input:  "Hello 123!!!"
   Output:
       Alphabet chars: H e l l o
       Numbers: 1 2 3
       Other chars: ! ! !

5. Key Takeaway for Students:
   - This program demonstrates how to analyze a string character by character.
   - Character classification functions (isalpha, isdigit, etc.) are powerful tools
     to build input validators, parsers, or text filters.
*/
