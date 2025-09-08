#include <iostream>
#include <string>

using namespace std;

int main() {
    string txt1 = "My name is Alaska";

    // ---------------- substr() ----------------
    // substr(pos, len) -> Creates a substring starting at index 'pos' 
    // and of length 'len'.
    // Here: start at index 0, take 2 characters ("My").
    string txt2 = txt1.substr(0, 2);
    cout << txt2 << endl;

    // ---------------- operator[] ----------------
    // Accesses a character at a given index (0-based).
    // txt1[8] -> 9th character of the string (here it's 'i').
    cout << "index 8 = " << txt1[8] << endl;

    // ---------------- find() ----------------
    // find(char) -> Returns the index of the first occurrence of the character.
    // If not found, returns string::npos.
    // Here: finds the first 'i' (at index 8).
    cout << txt1.find('i') << endl;

    return 0;
}
