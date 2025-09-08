#include <iostream>
#include <string>

using namespace std;

int main() {
    // ------------------- Stored Password -------------------
    // This is the correct password that the program expects.
    string password = "Anakin";

    // ------------------- User Input -------------------
    // Variable to store the password entered by the user.
    string enterpass;

    // Ask user to enter a password
    cout << "Enter a password:  ";
    getline(cin, enterpass);

    // ------------------- compare() -------------------
    // The compare() function compares two strings:
    //   - Returns 0 if both strings are equal.
    //   - Returns a negative value if *this < str.
    //   - Returns a positive value if *this > str.
    //
    // Here: password.compare(enterpass)
    // If it equals 0, then both strings match.
    if (password.compare(enterpass) == 0) {
        cout << "True";   // Passwords match
    } else {
        cout << "False";  // Passwords do not match
    }

    return 0;
}

/*
------------------- Concept Explanation -------------------

1. compare() vs '==' operator:
   - Both can be used to compare strings.
   - '==' is simpler and checks equality directly.
   - compare() gives more control because it can also tell 
     which string is lexicographically greater or smaller.

2. getline() vs cin:
   - getline(cin, enterpass) allows entering spaces in input.
   - cin >> enterpass would only read until the first space.

3. Example Output:
   Input: Anakin
   -> True
   Input: anakin
   -> False (case-sensitive)

4. Key Takeaway for Students:
   - compare() == 0 → Strings are equal.
   - Any other result → Strings differ.
*/
