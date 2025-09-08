#include <iostream>   // For input/output (cout, endl)
#include <string>     // For string handling (not heavily used here)
#include <cctype>     // For character classification functions
using namespace std;

// ------------------- Main Function -------------------
int main()
{
    // Test string with letters, numbers, spaces, newline, punctuation, etc.
    char txt[] = "Anakin \n Skywalker 123 !@# abc DEF";
    int i = 0; // Index for looping

    // ------------------- isalnum -------------------
    // Checks if character is alphanumeric (letter or digit)
    cout << "\n--- isalnum: Alphanumeric ---\n";
    i = 0;
    while (txt[i] != '\0') {
        if (isalnum(txt[i]))
            cout << txt[i]; // Print only letters and digits
        i++;
    }
    cout << endl;

    // ------------------- isalpha -------------------
    // Checks if character is alphabetic (letter only)
    cout << "\n--- isalpha: Alphabetic ---\n";
    i = 0;
    while (txt[i] != '\0') {
        if (isalpha(txt[i]))
            cout << txt[i]; // Print only letters
        i++;
    }
    cout << endl;

    // ------------------- isblank -------------------
    // Checks if character is blank (space or tab)
    cout << "\n--- isblank: Blank ---\n";
    i = 0;
    while (txt[i] != '\0') {
        if (isblank(txt[i]))
            cout << "[_]"; // Represent blank as [_]
        i++;
    }
    cout << endl;

    // ------------------- iscntrl -------------------
    // Checks if character is a control character (like newline \n, tab \t)
    cout << "\n--- iscntrl: Control characters ---\n";
    i = 0;
    while (txt[i] != '\0') {
        if (iscntrl(txt[i]))
            cout << "[CTRL]"; // Represent control characters
        i++;
    }
    cout << endl;

    // ------------------- isdigit -------------------
    // Checks if character is a decimal digit (0–9)
    cout << "\n--- isdigit: Digits ---\n";
    i = 0;
    while (txt[i] != '\0') {
        if (isdigit(txt[i]))
            cout << txt[i]; // Print only numbers
        i++;
    }
    cout << endl;

    // ------------------- isgraph -------------------
    // Checks if character has graphical representation (printable except space)
    cout << "\n--- isgraph: Graphical (except space) ---\n";
    i = 0;
    while (txt[i] != '\0') {
        if (isgraph(txt[i]))
            cout << txt[i]; // Print all printable except spaces
        i++;
    }
    cout << endl;

    // ------------------- islower -------------------
    // Checks if character is lowercase
    cout << "\n--- islower: Lowercase letters ---\n";
    i = 0;
    while (txt[i] != '\0') {
        if (islower(txt[i]))
            cout << txt[i]; // Print only lowercase letters
        i++;
    }
    cout << endl;

    // ------------------- isprint -------------------
    // Checks if character is printable (including space)
    cout << "\n--- isprint: Printable characters ---\n";
    i = 0;
    while (txt[i] != '\0') {
        if (isprint(txt[i]))
            cout << txt[i]; // Print everything printable (letters, digits, symbols, space)
        i++;
    }
    cout << endl;

    // ------------------- ispunct -------------------
    // Checks if character is punctuation
    cout << "\n--- ispunct: Punctuation ---\n";
    i = 0;
    while (txt[i] != '\0') {
        if (ispunct(txt[i]))
            cout << txt[i]; // Print punctuation symbols
        i++;
    }
    cout << endl;

    // ------------------- isspace -------------------
    // Checks if character is whitespace (space, tab, newline, etc.)
    cout << "\n--- isspace: Whitespace ---\n";
    i = 0;
    while (txt[i] != '\0') {
        if (isspace(txt[i]))
            cout << "[WS]"; // Represent whitespace as [WS]
        i++;
    }
    cout << endl;

    // ------------------- isupper -------------------
    // Checks if character is uppercase
    cout << "\n--- isupper: Uppercase letters ---\n";
    i = 0;
    while (txt[i] != '\0') {
        if (isupper(txt[i]))
            cout << txt[i]; // Print only uppercase letters
        i++;
    }
    cout << endl;

    // ------------------- isxdigit -------------------
    // Checks if character is a hexadecimal digit (0–9, A–F, a–f)
    cout << "\n--- isxdigit: Hexadecimal digits ---\n";
    i = 0;
    while (txt[i] != '\0') {
        if (isxdigit(txt[i]))
            cout << txt[i]; // Print only hex digits
        i++;
    }
    cout << endl;

    return 0; // Program executed successfully
}

/*
------------------- Concept Explanation -------------------

1. Purpose:
   - Demonstrates the usage of various character classification functions 
     from the <cctype> library.

2. Functions Overview:
   - isalnum(ch): true if letter or digit.
   - isalpha(ch): true if alphabetic letter.
   - isblank(ch): true if space or tab.
   - iscntrl(ch): true if control character (e.g., \n, \t).
   - isdigit(ch): true if digit (0–9).
   - isgraph(ch): true if printable and not space.
   - islower(ch): true if lowercase letter.
   - isprint(ch): true if printable (including space).
   - ispunct(ch): true if punctuation (!, @, #, etc.).
   - isspace(ch): true if whitespace (space, tab, newline).
   - isupper(ch): true if uppercase letter.
   - isxdigit(ch): true if hexadecimal digit (0–9, A–F, a–f).

3. Program Logic:
   - Loops through each character in the test string.
   - For each function, it prints only the characters that satisfy the condition.

4. Example Input:
   "Anakin \n Skywalker 123 !@# abc DEF"

   Example Outputs:
   - isalpha: AnakinSkywalkerabcDEF
   - isdigit: 123
   - ispunct: !@#
   - isupper: ASD (from DEF)
   - islower: anakinskywalkerabc

5. Key Takeaway for Students:
   - <cctype> provides powerful tools for analyzing and validating text.
   - Each function tests a different property of a character.
   - These functions are extremely useful in parsing, validation, and text processing tasks.
*/
